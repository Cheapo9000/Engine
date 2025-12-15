// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeSoundClass.h"

#ifdef ENGINE_SoundNodeSoundClass_generated_h
#error "SoundNodeSoundClass.generated.h already included, missing '#pragma once' in SoundNodeSoundClass.h"
#endif
#define ENGINE_SoundNodeSoundClass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundNodeSoundClass *****************************************************
struct Z_Construct_UClass_USoundNodeSoundClass_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundNodeSoundClass_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeSoundClass(); \
	friend struct ::Z_Construct_UClass_USoundNodeSoundClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundNodeSoundClass_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNodeSoundClass, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundNodeSoundClass_NoRegister) \
	DECLARE_SERIALIZER(USoundNodeSoundClass)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeSoundClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeSoundClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeSoundClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeSoundClass); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNodeSoundClass(USoundNodeSoundClass&&) = delete; \
	USoundNodeSoundClass(const USoundNodeSoundClass&) = delete; \
	ENGINE_API virtual ~USoundNodeSoundClass();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNodeSoundClass;

// ********** End Class USoundNodeSoundClass *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
