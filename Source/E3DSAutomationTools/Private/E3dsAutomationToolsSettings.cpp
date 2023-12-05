// Copyright Eagle 3D Streaming. All Rights Reserved.

#include "E3dsAutomationToolsSettings.h"
//#include "Paths.h"



bool DoesPluginExist(const FString& PluginName)
{
    // Construct paths for project and engine plugin folders
    FString ProjectPluginPathRelative = FPaths::Combine(FPaths::ProjectPluginsDir(), PluginName);
    FString EnginePluginPathRelative = FPaths::Combine(FPaths::EnginePluginsDir(), PluginName);

    // Convert relative paths to absolute paths
    FString ProjectPluginPath = FPaths::ConvertRelativePathToFull(ProjectPluginPathRelative);
    FString EnginePluginPath = FPaths::ConvertRelativePathToFull(EnginePluginPathRelative);

    ProjectPluginPath = "C:/0.ue4/UE53_Tiny/Plugins/E3dsAutomationTools";

   
    // Check if the plugin directory exists in the project folder
    if (FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*ProjectPluginPath))
    {
        // Plugin exists in the project folder
        int aa = 0;
        aa = 88;
        return true;
    }

    // Check if the plugin directory exists in the project folder
    if (FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*ProjectPluginPath))
    {
        // Plugin exists in the project folder
        return true;
    }

    // Check if the plugin directory exists in the engine folder
    if (FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*EnginePluginPath))
    {
        // Plugin exists in the engine folder
        return true;
    }

    // Plugin not found in either folder
    return false;
}



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


    // Example usage
    FString PluginName = TEXT("E3dsAutomationTools"); // Replace with the actual plugin name



    FString ProjectPluginsDir = FPaths::ProjectPluginsDir();

    // Construct paths for project and engine plugin folders
    FString ProjectPluginPathRelative = FPaths::Combine(FPaths::ProjectPluginsDir(), PluginName);
    FString EnginePluginPathRelative = FPaths::Combine(FPaths::EnginePluginsDir(),"Marketplace", PluginName);

    // Convert relative paths to absolute paths
    FString ProjectPluginPath = FPaths::ConvertRelativePathToFull(ProjectPluginPathRelative);
    FString EnginePluginPath = FPaths::ConvertRelativePathToFull(EnginePluginPathRelative);

    // Check if the plugin directory exists in the project folder
    if (FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*ProjectPluginPath))
    {
        // Plugin exists in the project folder
        ProjectPluginsDir = ProjectPluginPath;
    }
    // Check if the plugin directory exists in the engine folder
    else  if (FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*EnginePluginPath))//Marketplace
    {
        // Plugin exists in the engine folder
        ProjectPluginsDir = EnginePluginPath;
    }


  
   

    E3DSExecutablePath.FilePath = ProjectPluginsDir + "/files/el_am.exe";

}