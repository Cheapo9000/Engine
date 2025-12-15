// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlPointMeshActor.h"

#ifdef LANDSCAPE_ControlPointMeshActor_generated_h
#error "ControlPointMeshActor.generated.h already included, missing '#pragma once' in ControlPointMeshActor.h"
#endif
#define LANDSCAPE_ControlPointMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AControlPointMeshActor ***************************************************
struct Z_Construct_UClass_AControlPointMeshActor_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_AControlPointMeshActor_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAControlPointMeshActor(); \
	friend struct ::Z_Construct_UClass_AControlPointMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_AControlPointMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AControlPointMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_AControlPointMeshActor_NoRegister) \
	DECLARE_SERIALIZER(AControlPointMeshActor)


#define FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API AControlPointMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControlPointMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, AControlPointMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControlPointMeshActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AControlPointMeshActor(AControlPointMeshActor&&) = delete; \
	AControlPointMeshActor(const AControlPointMeshActor&) = delete; \
	LANDSCAPE_API virtual ~AControlPointMeshActor();


#define FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_15_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AControlPointMeshActor;

// ********** End Class AControlPointMeshActor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
