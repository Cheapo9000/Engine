// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SpotLight.h"

#ifdef ENGINE_SpotLight_generated_h
#error "SpotLight.generated.h already included, missing '#pragma once' in SpotLight.h"
#endif
#define ENGINE_SpotLight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASpotLight ***************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetOuterConeAngle); \
	DECLARE_FUNCTION(execSetInnerConeAngle);


struct Z_Construct_UClass_ASpotLight_Statics;
ENGINE_API UClass* Z_Construct_UClass_ASpotLight_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASpotLight(); \
	friend struct ::Z_Construct_UClass_ASpotLight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ASpotLight_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpotLight, ALight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ASpotLight_NoRegister) \
	DECLARE_SERIALIZER(ASpotLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASpotLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpotLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASpotLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpotLight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpotLight(ASpotLight&&) = delete; \
	ASpotLight(const ASpotLight&) = delete; \
	ENGINE_API virtual ~ASpotLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpotLight;

// ********** End Class ASpotLight *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
