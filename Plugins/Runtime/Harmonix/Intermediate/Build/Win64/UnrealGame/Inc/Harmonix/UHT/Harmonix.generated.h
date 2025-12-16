// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Harmonix.h"

#ifdef HARMONIX_Harmonix_generated_h
#error "Harmonix.generated.h already included, missing '#pragma once' in Harmonix.h"
#endif
#define HARMONIX_Harmonix_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHarmonixBlueprintUtil ***************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMeasuredVideoToAudioRenderOffsetMs); \
	DECLARE_FUNCTION(execSetMeasuredVideoToAudioRenderOffsetMs); \
	DECLARE_FUNCTION(execGetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs); \
	DECLARE_FUNCTION(execSetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs);


struct Z_Construct_UClass_UHarmonixBlueprintUtil_Statics;
HARMONIX_API UClass* Z_Construct_UClass_UHarmonixBlueprintUtil_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixBlueprintUtil(); \
	friend struct ::Z_Construct_UClass_UHarmonixBlueprintUtil_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIX_API UClass* ::Z_Construct_UClass_UHarmonixBlueprintUtil_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixBlueprintUtil, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Harmonix"), Z_Construct_UClass_UHarmonixBlueprintUtil_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixBlueprintUtil)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_h_142_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARMONIX_API UHarmonixBlueprintUtil(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixBlueprintUtil(UHarmonixBlueprintUtil&&) = delete; \
	UHarmonixBlueprintUtil(const UHarmonixBlueprintUtil&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIX_API, UHarmonixBlueprintUtil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixBlueprintUtil); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixBlueprintUtil) \
	HARMONIX_API virtual ~UHarmonixBlueprintUtil();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_h_139_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_h_142_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixBlueprintUtil;

// ********** End Class UHarmonixBlueprintUtil *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
