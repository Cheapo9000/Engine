// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanSDKSettings.h"

#ifdef METAHUMANSDKEDITOR_MetaHumanSDKSettings_generated_h
#error "MetaHumanSDKSettings.generated.h already included, missing '#pragma once' in MetaHumanSDKSettings.h"
#endif
#define METAHUMANSDKEDITOR_MetaHumanSDKSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaHumanSDKSettings ****************************************************
struct Z_Construct_UClass_UMetaHumanSDKSettings_Statics;
METAHUMANSDKEDITOR_API UClass* Z_Construct_UClass_UMetaHumanSDKSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanSDKSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanSDKSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanSDKSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANSDKEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanSDKSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanSDKSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaHumanSDKEditor"), Z_Construct_UClass_UMetaHumanSDKSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanSDKSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("MetaHumanSDK");} \



#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanSDKSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANSDKEDITOR_API UMetaHumanSDKSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanSDKSettings(UMetaHumanSDKSettings&&) = delete; \
	UMetaHumanSDKSettings(const UMetaHumanSDKSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANSDKEDITOR_API, UMetaHumanSDKSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanSDKSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanSDKSettings) \
	METAHUMANSDKEDITOR_API virtual ~UMetaHumanSDKSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanSDKSettings_h_12_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanSDKSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanSDKSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanSDKSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanSDKSettings;

// ********** End Class UMetaHumanSDKSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_MetaHumanSDKSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
