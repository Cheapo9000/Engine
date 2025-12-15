// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeBranch.h"

#ifdef ENGINE_SoundNodeBranch_generated_h
#error "SoundNodeBranch.generated.h already included, missing '#pragma once' in SoundNodeBranch.h"
#endif
#define ENGINE_SoundNodeBranch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundNodeBranch *********************************************************
struct Z_Construct_UClass_USoundNodeBranch_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundNodeBranch_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeBranch(); \
	friend struct ::Z_Construct_UClass_USoundNodeBranch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundNodeBranch_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNodeBranch, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundNodeBranch_NoRegister) \
	DECLARE_SERIALIZER(USoundNodeBranch)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeBranch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeBranch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeBranch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeBranch); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNodeBranch(USoundNodeBranch&&) = delete; \
	USoundNodeBranch(const USoundNodeBranch&) = delete; \
	ENGINE_API virtual ~USoundNodeBranch();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNodeBranch;

// ********** End Class USoundNodeBranch ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
