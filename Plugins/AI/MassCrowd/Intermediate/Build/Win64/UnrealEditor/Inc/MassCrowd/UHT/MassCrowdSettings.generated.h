// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCrowdSettings.h"

#ifdef MASSCROWD_MassCrowdSettings_generated_h
#error "MassCrowdSettings.generated.h already included, missing '#pragma once' in MassCrowdSettings.h"
#endif
#define MASSCROWD_MassCrowdSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassCrowdLaneDensityDesc *****************************************
struct Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics;
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics; \
	MASSCROWD_API static class UScriptStruct* StaticStruct();


struct FMassCrowdLaneDensityDesc;
// ********** End ScriptStruct FMassCrowdLaneDensityDesc *******************************************

// ********** Begin Class UMassCrowdSettings *******************************************************
struct Z_Construct_UClass_UMassCrowdSettings_Statics;
MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSettings_NoRegister();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCrowdSettings(); \
	friend struct ::Z_Construct_UClass_UMassCrowdSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSCROWD_API UClass* ::Z_Construct_UClass_UMassCrowdSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCrowdSettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassCrowd"), Z_Construct_UClass_UMassCrowdSettings_NoRegister) \
	DECLARE_SERIALIZER(UMassCrowdSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Plugins");} \



#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSCROWD_API UMassCrowdSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCrowdSettings(UMassCrowdSettings&&) = delete; \
	UMassCrowdSettings(const UMassCrowdSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSCROWD_API, UMassCrowdSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCrowdSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassCrowdSettings) \
	MASSCROWD_API virtual ~UMassCrowdSettings();


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_51_PROLOG
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCrowdSettings;

// ********** End Class UMassCrowdSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
