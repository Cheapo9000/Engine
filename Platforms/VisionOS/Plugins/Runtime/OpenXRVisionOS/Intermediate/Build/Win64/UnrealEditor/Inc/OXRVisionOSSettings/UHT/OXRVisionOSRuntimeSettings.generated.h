// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OXRVisionOSRuntimeSettings.h"

#ifdef OXRVISIONOSSETTINGS_OXRVisionOSRuntimeSettings_generated_h
#error "OXRVisionOSRuntimeSettings.generated.h already included, missing '#pragma once' in OXRVisionOSRuntimeSettings.h"
#endif
#define OXRVISIONOSSETTINGS_OXRVisionOSRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOXRVisionOSRuntimeSettings **********************************************
struct Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics;
OXRVISIONOSSETTINGS_API UClass* Z_Construct_UClass_UOXRVisionOSRuntimeSettings_NoRegister();

#define FID_Engine_Platforms_VisionOS_Plugins_Runtime_OpenXRVisionOS_Source_OXRVisionOSSettings_Public_OXRVisionOSRuntimeSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOXRVisionOSRuntimeSettings(); \
	friend struct ::Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OXRVISIONOSSETTINGS_API UClass* ::Z_Construct_UClass_UOXRVisionOSRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOXRVisionOSRuntimeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OXRVisionOSSettings"), Z_Construct_UClass_UOXRVisionOSRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UOXRVisionOSRuntimeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Platforms_VisionOS_Plugins_Runtime_OpenXRVisionOS_Source_OXRVisionOSSettings_Public_OXRVisionOSRuntimeSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOXRVisionOSRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOXRVisionOSRuntimeSettings(UOXRVisionOSRuntimeSettings&&) = delete; \
	UOXRVisionOSRuntimeSettings(const UOXRVisionOSRuntimeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOXRVisionOSRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOXRVisionOSRuntimeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOXRVisionOSRuntimeSettings) \
	NO_API virtual ~UOXRVisionOSRuntimeSettings();


#define FID_Engine_Platforms_VisionOS_Plugins_Runtime_OpenXRVisionOS_Source_OXRVisionOSSettings_Public_OXRVisionOSRuntimeSettings_h_11_PROLOG
#define FID_Engine_Platforms_VisionOS_Plugins_Runtime_OpenXRVisionOS_Source_OXRVisionOSSettings_Public_OXRVisionOSRuntimeSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Platforms_VisionOS_Plugins_Runtime_OpenXRVisionOS_Source_OXRVisionOSSettings_Public_OXRVisionOSRuntimeSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Platforms_VisionOS_Plugins_Runtime_OpenXRVisionOS_Source_OXRVisionOSSettings_Public_OXRVisionOSRuntimeSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOXRVisionOSRuntimeSettings;

// ********** End Class UOXRVisionOSRuntimeSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Platforms_VisionOS_Plugins_Runtime_OpenXRVisionOS_Source_OXRVisionOSSettings_Public_OXRVisionOSRuntimeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
