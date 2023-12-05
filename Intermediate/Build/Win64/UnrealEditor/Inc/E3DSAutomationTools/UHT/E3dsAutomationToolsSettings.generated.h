// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "E3dsAutomationToolsSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef E3DSAUTOMATIONTOOLS_E3dsAutomationToolsSettings_generated_h
#error "E3dsAutomationToolsSettings.generated.h already included, missing '#pragma once' in E3dsAutomationToolsSettings.h"
#endif
#define E3DSAUTOMATIONTOOLS_E3dsAutomationToolsSettings_generated_h

#define FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_SPARSE_DATA
#define FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_ACCESSORS
#define FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUE3dsAutomationToolsSettings(); \
	friend struct Z_Construct_UClass_UE3dsAutomationToolsSettings_Statics; \
public: \
	DECLARE_CLASS(UE3dsAutomationToolsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/E3DSAutomationTools"), NO_API) \
	DECLARE_SERIALIZER(UE3dsAutomationToolsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("MySetting");} \



#define FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UE3dsAutomationToolsSettings(UE3dsAutomationToolsSettings&&); \
	NO_API UE3dsAutomationToolsSettings(const UE3dsAutomationToolsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UE3dsAutomationToolsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UE3dsAutomationToolsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UE3dsAutomationToolsSettings) \
	NO_API virtual ~UE3dsAutomationToolsSettings();


#define FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_22_PROLOG
#define FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_SPARSE_DATA \
	FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_ACCESSORS \
	FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> E3DSAUTOMATIONTOOLS_API UClass* StaticClass<class UE3dsAutomationToolsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_0_ue4_UE53_Tiny_Plugins_E3DSAutomationTools_Source_E3DSAutomationTools_Public_E3dsAutomationToolsSettings_h


#define FOREACH_ENUM_EPACKAGINGMODES(op) \
	op(EPackagingModes::Development) \
	op(EPackagingModes::Shipping) 

enum class EPackagingModes : uint8;
template<> struct TIsUEnumClass<EPackagingModes> { enum { Value = true }; };
template<> E3DSAUTOMATIONTOOLS_API UEnum* StaticEnum<EPackagingModes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
