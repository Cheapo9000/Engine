// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeDelay.h"

#ifdef ENGINE_SoundNodeDelay_generated_h
#error "SoundNodeDelay.generated.h already included, missing '#pragma once' in SoundNodeDelay.h"
#endif
#define ENGINE_SoundNodeDelay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundNodeDelay **********************************************************
struct Z_Construct_UClass_USoundNodeDelay_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundNodeDelay_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeDelay(); \
	friend struct ::Z_Construct_UClass_USoundNodeDelay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundNodeDelay_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNodeDelay, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundNodeDelay_NoRegister) \
	DECLARE_SERIALIZER(USoundNodeDelay)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeDelay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeDelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeDelay); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNodeDelay(USoundNodeDelay&&) = delete; \
	USoundNodeDelay(const USoundNodeDelay&) = delete; \
	ENGINE_API virtual ~USoundNodeDelay();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNodeDelay;

// ********** End Class USoundNodeDelay ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
