// Copyright Eagle 3D Streaming. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "UObject/NoExportTypes.h"
#include "E3dsAutomationToolsSettings.generated.h"

class FToolBarBuilder;
class FMenuBuilder;
UCLASS(config = MySetting)
class E3DSAUTOMATIONTOOLS_API UE3dsAutomationToolsSettings : public UObject
{
	GENERATED_BODY()

public:
	UE3dsAutomationToolsSettings(const FObjectInitializer& obj);
	UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		FFilePath ExecutablePath;
		

	UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		//FFilePath 
		FString EngineFolderPath;

		UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		//FFilePath 
			FString EngineExePath;
		
		UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		//FFilePath 
			FFilePath UProjectPath;
		
			UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		FFilePath PathTo7Zip;
		
		
	UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		FString ApiKey;
	//UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		//FString CloudStorage;
	//UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		//FString UserName;
	UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		FString E3DSStreamingAppName;

	UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		FDirectoryPath PackagingFolder;
	UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		bool DoDedicatedServerBuild;

	UPROPERTY(Config, EditAnywhere, Category = "Custom Settings")
		FString E3DSDedicatedServerAppName;

};