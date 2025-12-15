// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SplineMeshActor.h"

#ifdef ENGINE_SplineMeshActor_generated_h
#error "SplineMeshActor.generated.h already included, missing '#pragma once' in SplineMeshActor.h"
#endif
#define ENGINE_SplineMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASplineMeshActor *********************************************************
struct Z_Construct_UClass_ASplineMeshActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ASplineMeshActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASplineMeshActor(); \
	friend struct ::Z_Construct_UClass_ASplineMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ASplineMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASplineMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ASplineMeshActor_NoRegister) \
	DECLARE_SERIALIZER(ASplineMeshActor)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASplineMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASplineMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASplineMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASplineMeshActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASplineMeshActor(ASplineMeshActor&&) = delete; \
	ASplineMeshActor(const ASplineMeshActor&) = delete; \
	ENGINE_API virtual ~ASplineMeshActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASplineMeshActor;

// ********** End Class ASplineMeshActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
