// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SurfaceEffectsSubsystem.h"

#ifdef SURFACEEFFECTS_SurfaceEffectsSubsystem_generated_h
#error "SurfaceEffectsSubsystem.generated.h already included, missing '#pragma once' in SurfaceEffectsSubsystem.h"
#endif
#define SURFACEEFFECTS_SurfaceEffectsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USurfaceEffectRule *******************************************************
struct Z_Construct_UClass_USurfaceEffectRule_Statics;
SURFACEEFFECTS_API UClass* Z_Construct_UClass_USurfaceEffectRule_NoRegister();

#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurfaceEffectRule(); \
	friend struct ::Z_Construct_UClass_USurfaceEffectRule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SURFACEEFFECTS_API UClass* ::Z_Construct_UClass_USurfaceEffectRule_NoRegister(); \
public: \
	DECLARE_CLASS2(USurfaceEffectRule, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SurfaceEffects"), Z_Construct_UClass_USurfaceEffectRule_NoRegister) \
	DECLARE_SERIALIZER(USurfaceEffectRule)


#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SURFACEEFFECTS_API USurfaceEffectRule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USurfaceEffectRule(USurfaceEffectRule&&) = delete; \
	USurfaceEffectRule(const USurfaceEffectRule&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SURFACEEFFECTS_API, USurfaceEffectRule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurfaceEffectRule); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurfaceEffectRule) \
	SURFACEEFFECTS_API virtual ~USurfaceEffectRule();


#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USurfaceEffectRule;

// ********** End Class USurfaceEffectRule *********************************************************

// ********** Begin ScriptStruct FSurfaceEffectTableRow ********************************************
struct Z_Construct_UScriptStruct_FSurfaceEffectTableRow_Statics;
#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSurfaceEffectTableRow_Statics; \
	SURFACEEFFECTS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FSurfaceEffectTableRow;
// ********** End ScriptStruct FSurfaceEffectTableRow **********************************************

// ********** Begin Class USurfaceEffectsSubsystem *************************************************
struct Z_Construct_UClass_USurfaceEffectsSubsystem_Statics;
SURFACEEFFECTS_API UClass* Z_Construct_UClass_USurfaceEffectsSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurfaceEffectsSubsystem(); \
	friend struct ::Z_Construct_UClass_USurfaceEffectsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SURFACEEFFECTS_API UClass* ::Z_Construct_UClass_USurfaceEffectsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USurfaceEffectsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SurfaceEffects"), Z_Construct_UClass_USurfaceEffectsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USurfaceEffectsSubsystem)


#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SURFACEEFFECTS_API USurfaceEffectsSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USurfaceEffectsSubsystem(USurfaceEffectsSubsystem&&) = delete; \
	USurfaceEffectsSubsystem(const USurfaceEffectsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SURFACEEFFECTS_API, USurfaceEffectsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurfaceEffectsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USurfaceEffectsSubsystem) \
	SURFACEEFFECTS_API virtual ~USurfaceEffectsSubsystem();


#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_75_PROLOG
#define FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USurfaceEffectsSubsystem;

// ********** End Class USurfaceEffectsSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SurfaceEffects_Source_SurfaceEffects_Public_SurfaceEffectsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
