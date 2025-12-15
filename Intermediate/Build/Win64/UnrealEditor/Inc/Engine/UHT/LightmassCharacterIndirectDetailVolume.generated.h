// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lightmass/LightmassCharacterIndirectDetailVolume.h"

#ifdef ENGINE_LightmassCharacterIndirectDetailVolume_generated_h
#error "LightmassCharacterIndirectDetailVolume.generated.h already included, missing '#pragma once' in LightmassCharacterIndirectDetailVolume.h"
#endif
#define ENGINE_LightmassCharacterIndirectDetailVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALightmassCharacterIndirectDetailVolume **********************************
struct Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALightmassCharacterIndirectDetailVolume(); \
	friend struct ::Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ALightmassCharacterIndirectDetailVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_NoRegister) \
	DECLARE_SERIALIZER(ALightmassCharacterIndirectDetailVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALightmassCharacterIndirectDetailVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightmassCharacterIndirectDetailVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALightmassCharacterIndirectDetailVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightmassCharacterIndirectDetailVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALightmassCharacterIndirectDetailVolume(ALightmassCharacterIndirectDetailVolume&&) = delete; \
	ALightmassCharacterIndirectDetailVolume(const ALightmassCharacterIndirectDetailVolume&) = delete; \
	ENGINE_API virtual ~ALightmassCharacterIndirectDetailVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALightmassCharacterIndirectDetailVolume;

// ********** End Class ALightmassCharacterIndirectDetailVolume ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
