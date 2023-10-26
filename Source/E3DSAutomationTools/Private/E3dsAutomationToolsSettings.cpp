// Copyright Eagle 3D Streaming. All Rights Reserved.

#include "E3dsAutomationToolsSettings.h"
//#include "Paths.h"

UE3dsAutomationToolsSettings::UE3dsAutomationToolsSettings(const FObjectInitializer& obj)
{


#if ENGINE_MAJOR_VERSION == 5
    FString EngineDir = FPaths::EngineDir();
    FString EditorPath = FPaths::Combine(*EngineDir, TEXT("Binaries/Win64/UnrealEditor.exe")); // For Windows 64-bit
    EngineExePath = EditorPath;
	
#else
    FString EngineDir = FPaths::EngineDir();
    FString EditorPath = FPaths::Combine(*EngineDir, TEXT("Binaries/Win64/UE4Editor.exe")); // For Windows 64-bit
    EngineExePath = EditorPath;
#endif

    EngineFolderPath = FPaths::EngineDir();

    UProjectPath.FilePath =FPaths::GetProjectFilePath();


FString ProjectPluginsDir = FPaths::ProjectPluginsDir();

FString PluginRootFolder = ProjectPluginsDir + "E3dsAutomationTools/files";

ExecutablePath.FilePath = PluginRootFolder+"/el_am.exe";


}