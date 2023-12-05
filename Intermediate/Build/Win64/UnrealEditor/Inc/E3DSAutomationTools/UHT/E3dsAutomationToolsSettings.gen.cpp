// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E3DSAutomationTools/Public/E3dsAutomationToolsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE3dsAutomationToolsSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	E3DSAUTOMATIONTOOLS_API UClass* Z_Construct_UClass_UE3dsAutomationToolsSettings();
	E3DSAUTOMATIONTOOLS_API UClass* Z_Construct_UClass_UE3dsAutomationToolsSettings_NoRegister();
	E3DSAUTOMATIONTOOLS_API UEnum* Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes();
	UPackage* Z_Construct_UPackage__Script_E3DSAutomationTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPackagingModes;
	static UEnum* EPackagingModes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPackagingModes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPackagingModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes, (UObject*)Z_Construct_UPackage__Script_E3DSAutomationTools(), TEXT("EPackagingModes"));
		}
		return Z_Registration_Info_UEnum_EPackagingModes.OuterSingleton;
	}
	template<> E3DSAUTOMATIONTOOLS_API UEnum* StaticEnum<EPackagingModes>()
	{
		return EPackagingModes_StaticEnum();
	}
	struct Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes_Statics::Enumerators[] = {
		{ "EPackagingModes::Development", (int64)EPackagingModes::Development },
		{ "EPackagingModes::Shipping", (int64)EPackagingModes::Shipping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Development.DisplayName", "Development" },
		{ "Development.Name", "EPackagingModes::Development" },
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
		{ "Shipping.DisplayName", "Shipping" },
		{ "Shipping.Name", "EPackagingModes::Shipping" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_E3DSAutomationTools,
		nullptr,
		"EPackagingModes",
		"EPackagingModes",
		Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes()
	{
		if (!Z_Registration_Info_UEnum_EPackagingModes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPackagingModes.InnerSingleton, Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPackagingModes.InnerSingleton;
	}
	void UE3dsAutomationToolsSettings::StaticRegisterNativesUE3dsAutomationToolsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UE3dsAutomationToolsSettings);
	UClass* Z_Construct_UClass_UE3dsAutomationToolsSettings_NoRegister()
	{
		return UE3dsAutomationToolsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_E3DSExecutablePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_E3DSExecutablePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineFolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EngineFolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineExePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EngineExePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UProjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UProjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTo7Zip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathTo7Zip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_E3DSStreamingAppName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_E3DSStreamingAppName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagingMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PackagingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagingFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackagingFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoDedicatedServerBuild_MetaData[];
#endif
		static void NewProp_DoDedicatedServerBuild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoDedicatedServerBuild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_E3DSDedicatedServerAppName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_E3DSDedicatedServerAppName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_E3DSAutomationTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "E3dsAutomationToolsSettings.h" },
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSExecutablePath_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
		{ "DisplayName", "Path to E3DS Executable" },
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSExecutablePath = { "E3DSExecutablePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3dsAutomationToolsSettings, E3DSExecutablePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSExecutablePath_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSExecutablePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_EngineFolderPath_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FFilePath \n" },
#endif
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FFilePath" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_EngineFolderPath = { "EngineFolderPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3dsAutomationToolsSettings, EngineFolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_EngineFolderPath_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_EngineFolderPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_EngineExePath_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FFilePath \n" },
#endif
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FFilePath" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_EngineExePath = { "EngineExePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3dsAutomationToolsSettings, EngineExePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_EngineExePath_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_EngineExePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_UProjectPath_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FFilePath \n" },
#endif
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FFilePath" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_UProjectPath = { "UProjectPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3dsAutomationToolsSettings, UProjectPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_UProjectPath_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_UProjectPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PathTo7Zip_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PathTo7Zip = { "PathTo7Zip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3dsAutomationToolsSettings, PathTo7Zip), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PathTo7Zip_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PathTo7Zip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_ApiKey_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3dsAutomationToolsSettings, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_ApiKey_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_ApiKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSStreamingAppName_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(Config, EditAnywhere, Category = \"E3DS Automation Settings\")\n//FString CloudStorage;\n//UPROPERTY(Config, EditAnywhere, Category = \"E3DS Automation Settings\")\n//FString UserName;\n" },
#endif
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(Config, EditAnywhere, Category = \"E3DS Automation Settings\")\nFString CloudStorage;\nUPROPERTY(Config, EditAnywhere, Category = \"E3DS Automation Settings\")\nFString UserName;" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSStreamingAppName = { "E3DSStreamingAppName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3dsAutomationToolsSettings, E3DSStreamingAppName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSStreamingAppName_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSStreamingAppName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PackagingMode_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PackagingMode = { "PackagingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3dsAutomationToolsSettings, PackagingMode), Z_Construct_UEnum_E3DSAutomationTools_EPackagingModes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PackagingMode_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PackagingMode_MetaData) }; // 227478579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PackagingFolder_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PackagingFolder = { "PackagingFolder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3dsAutomationToolsSettings, PackagingFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PackagingFolder_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PackagingFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_DoDedicatedServerBuild_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
	};
#endif
	void Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_DoDedicatedServerBuild_SetBit(void* Obj)
	{
		((UE3dsAutomationToolsSettings*)Obj)->DoDedicatedServerBuild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_DoDedicatedServerBuild = { "DoDedicatedServerBuild", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UE3dsAutomationToolsSettings), &Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_DoDedicatedServerBuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_DoDedicatedServerBuild_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_DoDedicatedServerBuild_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSDedicatedServerAppName_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSDedicatedServerAppName = { "E3DSDedicatedServerAppName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3dsAutomationToolsSettings, E3DSDedicatedServerAppName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSDedicatedServerAppName_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSDedicatedServerAppName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_TestUrl_MetaData[] = {
		{ "Category", "E3DS Automation Settings" },
		{ "ModuleRelativePath", "Public/E3dsAutomationToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_TestUrl = { "TestUrl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3dsAutomationToolsSettings, TestUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_TestUrl_MetaData), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_TestUrl_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSExecutablePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_EngineFolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_EngineExePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_UProjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PathTo7Zip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_ApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSStreamingAppName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PackagingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_PackagingFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_DoDedicatedServerBuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_E3DSDedicatedServerAppName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::NewProp_TestUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UE3dsAutomationToolsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::ClassParams = {
		&UE3dsAutomationToolsSettings::StaticClass,
		"MySetting",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UE3dsAutomationToolsSettings()
	{
		if (!Z_Registration_Info_UClass_UE3dsAutomationToolsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UE3dsAutomationToolsSettings.OuterSingleton, Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UE3dsAutomationToolsSettings.OuterSingleton;
	}
	template<> E3DSAUTOMATIONTOOLS_API UClass* StaticClass<UE3dsAutomationToolsSettings>()
	{
		return UE3dsAutomationToolsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UE3dsAutomationToolsSettings);
	UE3dsAutomationToolsSettings::~UE3dsAutomationToolsSettings() {}
	struct Z_CompiledInDeferFile_FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_Statics::EnumInfo[] = {
		{ EPackagingModes_StaticEnum, TEXT("EPackagingModes"), &Z_Registration_Info_UEnum_EPackagingModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 227478579U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UE3dsAutomationToolsSettings, UE3dsAutomationToolsSettings::StaticClass, TEXT("UE3dsAutomationToolsSettings"), &Z_Registration_Info_UClass_UE3dsAutomationToolsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UE3dsAutomationToolsSettings), 545295870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_72138886(TEXT("/Script/E3DSAutomationTools"),
		Z_CompiledInDeferFile_FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
