// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SceneCapture2D.h"

#ifdef ENGINE_SceneCapture2D_generated_h
#error "SceneCapture2D.generated.h already included, missing '#pragma once' in SceneCapture2D.h"
#endif
#define ENGINE_SceneCapture2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASceneCapture2D **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnInterpToggle);


struct Z_Construct_UClass_ASceneCapture2D_Statics;
ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASceneCapture2D(); \
	friend struct ::Z_Construct_UClass_ASceneCapture2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ASceneCapture2D_NoRegister(); \
public: \
	DECLARE_CLASS2(ASceneCapture2D, ASceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ASceneCapture2D_NoRegister) \
	DECLARE_SERIALIZER(ASceneCapture2D)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASceneCapture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASceneCapture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASceneCapture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneCapture2D); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASceneCapture2D(ASceneCapture2D&&) = delete; \
	ASceneCapture2D(const ASceneCapture2D&) = delete; \
	ENGINE_API virtual ~ASceneCapture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASceneCapture2D;

// ********** End Class ASceneCapture2D ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
