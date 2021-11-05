// Copyright Epic Games, Inc. All Rights Reserved.


#include "FilesystemTestGameModeBase.h"
#include <filesystem>

void AFilesystemTestGameModeBase::BeginPlay()
{
    std::filesystem::path p = "/usr/bin";

    if(GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, UTF8_TO_TCHAR(p.c_str()));
    }

    if(std::filesystem::exists(p))
    {
        if(GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, "yay");
        }
    }
}
