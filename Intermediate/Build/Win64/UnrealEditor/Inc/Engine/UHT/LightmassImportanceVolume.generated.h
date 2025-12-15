// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lightmass/LightmassImportanceVolume.h"

#ifdef ENGINE_LightmassImportanceVolume_generated_h
#error "LightmassImportanceVolume.generated.h already included, missing '#pragma once' in LightmassImportanceVolume.h"
#endif
#define ENGINE_LightmassImportanceVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALightmassImportanceVolume ***********************************************
struct Z_Construct_UClass_ALightmassImportanceVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_ALightmassImportanceVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_17_INCLASS \
private: \
	static void StaticRegisterNativesALightmassImportanceVolume(); \
	friend struct ::Z_Construct_UClass_ALightmassImportanceVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ALightmassImportanceVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ALightmassImportanceVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ALightmassImportanceVolume_NoRegister) \
	DECLARE_SERIALIZER(ALightmassImportanceVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALightmassImportanceVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightmassImportanceVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALightmassImportanceVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightmassImportanceVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALightmassImportanceVolume(ALightmassImportanceVolume&&) = delete; \
	ALightmassImportanceVolume(const ALightmassImportanceVolume&) = delete; \
	ENGINE_API virtual ~ALightmassImportanceVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALightmassImportanceVolume;

// ********** End Class ALightmassImportanceVolume *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
