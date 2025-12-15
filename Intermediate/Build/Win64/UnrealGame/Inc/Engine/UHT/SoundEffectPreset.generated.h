// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundEffectPreset.h"

#ifdef ENGINE_SoundEffectPreset_generated_h
#error "SoundEffectPreset.generated.h already included, missing '#pragma once' in SoundEffectPreset.h"
#endif
#define ENGINE_SoundEffectPreset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundEffectPreset *******************************************************
struct Z_Construct_UClass_USoundEffectPreset_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundEffectPreset(); \
	friend struct ::Z_Construct_UClass_USoundEffectPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundEffectPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundEffectPreset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundEffectPreset_NoRegister) \
	DECLARE_SERIALIZER(USoundEffectPreset)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundEffectPreset(USoundEffectPreset&&) = delete; \
	USoundEffectPreset(const USoundEffectPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundEffectPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectPreset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectPreset)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundEffectPreset;

// ********** End Class USoundEffectPreset *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
