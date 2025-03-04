// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCrowdSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSCROWD_MassCrowdSettings_generated_h
#error "MassCrowdSettings.generated.h already included, missing '#pragma once' in MassCrowdSettings.h"
#endif
#define MASSCROWD_MassCrowdSettings_generated_h

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSCROWD_API UScriptStruct* StaticStruct<struct FMassCrowdLaneDensityDesc>();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCrowdSettings(); \
	friend struct Z_Construct_UClass_UMassCrowdSettings_Statics; \
public: \
	DECLARE_CLASS(UMassCrowdSettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassCrowd"), NO_API) \
	DECLARE_SERIALIZER(UMassCrowdSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Plugins");} \



#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassCrowdSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassCrowdSettings(UMassCrowdSettings&&); \
	UMassCrowdSettings(const UMassCrowdSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassCrowdSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCrowdSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassCrowdSettings) \
	NO_API virtual ~UMassCrowdSettings();


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_49_PROLOG
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSCROWD_API UClass* StaticClass<class UMassCrowdSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
