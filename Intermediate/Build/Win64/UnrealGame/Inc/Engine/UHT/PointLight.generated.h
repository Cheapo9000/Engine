// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PointLight.h"

#ifdef ENGINE_PointLight_generated_h
#error "PointLight.generated.h already included, missing '#pragma once' in PointLight.h"
#endif
#define ENGINE_PointLight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APointLight **************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetLightFalloffExponent); \
	DECLARE_FUNCTION(execSetRadius);


struct Z_Construct_UClass_APointLight_Statics;
ENGINE_API UClass* Z_Construct_UClass_APointLight_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPointLight(); \
	friend struct ::Z_Construct_UClass_APointLight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_APointLight_NoRegister(); \
public: \
	DECLARE_CLASS2(APointLight, ALight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_APointLight_NoRegister) \
	DECLARE_SERIALIZER(APointLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APointLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APointLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APointLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointLight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APointLight(APointLight&&) = delete; \
	APointLight(const APointLight&) = delete; \
	ENGINE_API virtual ~APointLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APointLight;

// ********** End Class APointLight ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
