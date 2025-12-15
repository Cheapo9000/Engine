// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/GeneratedMeshAreaLight.h"

#ifdef ENGINE_GeneratedMeshAreaLight_generated_h
#error "GeneratedMeshAreaLight.generated.h already included, missing '#pragma once' in GeneratedMeshAreaLight.h"
#endif
#define ENGINE_GeneratedMeshAreaLight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGeneratedMeshAreaLight **************************************************
struct Z_Construct_UClass_AGeneratedMeshAreaLight_Statics;
ENGINE_API UClass* Z_Construct_UClass_AGeneratedMeshAreaLight_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAGeneratedMeshAreaLight(); \
	friend struct ::Z_Construct_UClass_AGeneratedMeshAreaLight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AGeneratedMeshAreaLight_NoRegister(); \
public: \
	DECLARE_CLASS2(AGeneratedMeshAreaLight, ASpotLight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AGeneratedMeshAreaLight_NoRegister) \
	DECLARE_SERIALIZER(AGeneratedMeshAreaLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AGeneratedMeshAreaLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeneratedMeshAreaLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AGeneratedMeshAreaLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeneratedMeshAreaLight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGeneratedMeshAreaLight(AGeneratedMeshAreaLight&&) = delete; \
	AGeneratedMeshAreaLight(const AGeneratedMeshAreaLight&) = delete; \
	ENGINE_API virtual ~AGeneratedMeshAreaLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGeneratedMeshAreaLight;

// ********** End Class AGeneratedMeshAreaLight ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
