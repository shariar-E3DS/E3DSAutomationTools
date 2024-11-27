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


 
UCLASS(config = E3DSAutomationToolsSettings)
class E3DSAUTOMATIONTOOLS_API UE3dsAutomationToolsSettings : public UObject
{
	GENERATED_BODY()

public:
	template< typename T >
	FString EnumToString(T EnumValue)
	{
		static_assert(TIsUEnumClass< T >::Value, "'T' template parameter to EnumToString must be a valid UEnum");
		return StaticEnum< T >()->GetNameStringByValue((int64)EnumValue);
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
		EPackagingModes PackagingMode;

	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		FDirectoryPath PackagingFolder;
	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		bool DoDedicatedServerBuild;

	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		FString E3DSDedicatedServerAppName;

	UPROPERTY(Config, EditAnywhere, Category = "E3DS Automation Settings")
		FString TestUrl;

};