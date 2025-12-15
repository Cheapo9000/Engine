// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DirectionalLight.h"

#ifdef ENGINE_DirectionalLight_generated_h
#error "DirectionalLight.generated.h already included, missing '#pragma once' in DirectionalLight.h"
#endif
#define ENGINE_DirectionalLight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADirectionalLight ********************************************************
struct Z_Construct_UClass_ADirectionalLight_Statics;
ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_20_INCLASS \
private: \
	static void StaticRegisterNativesADirectionalLight(); \
	friend struct ::Z_Construct_UClass_ADirectionalLight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ADirectionalLight_NoRegister(); \
public: \
	DECLARE_CLASS2(ADirectionalLight, ALight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ADirectionalLight_NoRegister) \
	DECLARE_SERIALIZER(ADirectionalLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADirectionalLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADirectionalLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADirectionalLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADirectionalLight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADirectionalLight(ADirectionalLight&&) = delete; \
	ADirectionalLight(const ADirectionalLight&) = delete; \
	ENGINE_API virtual ~ADirectionalLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADirectionalLight;

// ********** End Class ADirectionalLight **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
