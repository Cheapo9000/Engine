// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeOscillator.h"

#ifdef ENGINE_SoundNodeOscillator_generated_h
#error "SoundNodeOscillator.generated.h already included, missing '#pragma once' in SoundNodeOscillator.h"
#endif
#define ENGINE_SoundNodeOscillator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundNodeOscillator *****************************************************
struct Z_Construct_UClass_USoundNodeOscillator_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundNodeOscillator_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeOscillator(); \
	friend struct ::Z_Construct_UClass_USoundNodeOscillator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundNodeOscillator_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNodeOscillator, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundNodeOscillator_NoRegister) \
	DECLARE_SERIALIZER(USoundNodeOscillator)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNodeOscillator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeOscillator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNodeOscillator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeOscillator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNodeOscillator(USoundNodeOscillator&&) = delete; \
	USoundNodeOscillator(const USoundNodeOscillator&) = delete; \
	NO_API virtual ~USoundNodeOscillator();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNodeOscillator;

// ********** End Class USoundNodeOscillator *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
