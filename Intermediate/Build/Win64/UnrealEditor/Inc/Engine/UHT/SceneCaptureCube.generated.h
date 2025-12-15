// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SceneCaptureCube.h"

#ifdef ENGINE_SceneCaptureCube_generated_h
#error "SceneCaptureCube.generated.h already included, missing '#pragma once' in SceneCaptureCube.h"
#endif
#define ENGINE_SceneCaptureCube_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASceneCaptureCube ********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnInterpToggle);


struct Z_Construct_UClass_ASceneCaptureCube_Statics;
ENGINE_API UClass* Z_Construct_UClass_ASceneCaptureCube_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASceneCaptureCube(); \
	friend struct ::Z_Construct_UClass_ASceneCaptureCube_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ASceneCaptureCube_NoRegister(); \
public: \
	DECLARE_CLASS2(ASceneCaptureCube, ASceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ASceneCaptureCube_NoRegister) \
	DECLARE_SERIALIZER(ASceneCaptureCube)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASceneCaptureCube(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASceneCaptureCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASceneCaptureCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneCaptureCube); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASceneCaptureCube(ASceneCaptureCube&&) = delete; \
	ASceneCaptureCube(const ASceneCaptureCube&) = delete; \
	ENGINE_API virtual ~ASceneCaptureCube();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASceneCaptureCube;

// ********** End Class ASceneCaptureCube **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
