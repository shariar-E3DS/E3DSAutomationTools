// Copyright Eagle 3D Streaming. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "UObject/NoExportTypes.h"
#include "E3dsAutomationToolsSettings.generated.h"

class FToolBarBuilder;
class FMenuBuilder;

UENUM(BlueprintType)
enum class EPackagingModes : uint8
{
	Development UMETA(DisplayName = "Development"),
	Shipping UMETA(DisplayName = "Shipping"),
};



UCLASS(config = MySetting)
class E3DSAUTOMATIONTOOLS_API UE3dsAutomationToolsSettings : public UObject
{
	GENERATED_BODY()

public:
	FString GetEnumAsString(EPackagingModes EnumValue)
	{
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EPackagingModes"), true);
		if (!EnumPtr)
		{
			// Handle error, enum not found
			return FString();
		}

		return EnumPtr->GetDisplayNameTextByIndex(static_cast<int32>(EnumValue)).ToString();
	}
	

	UE3dsAutomationToolsSettings(const FObjectInitializer& obj);
	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings", DisplayName = "Path to E3DS Executable" )

		FFilePath E3DSExecutablePath;


		

	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		//FFilePath 
		FString EngineFolderPath;

		UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		//FFilePath 
			FString EngineExePath;
		
		UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		//FFilePath 
			FFilePath UProjectPath;
		
			UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		FFilePath PathTo7Zip;
		
		
	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		FString ApiKey;
	//UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		//FString CloudStorage;
	//UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		//FString UserName;
	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		FString E3DSStreamingAppName;

	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		TEnumAsByte<EPackagingModes> PackagingMode;

	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		FDirectoryPath PackagingFolder;
	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		bool DoDedicatedServerBuild;

	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		FString E3DSDedicatedServerAppName;

	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		FString TestUrl;

};