// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsConstraintActor.h"

#ifdef ENGINE_PhysicsConstraintActor_generated_h
#error "PhysicsConstraintActor.generated.h already included, missing '#pragma once' in PhysicsConstraintActor.h"
#endif
#define ENGINE_PhysicsConstraintActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APhysicsConstraintActor **************************************************
struct Z_Construct_UClass_APhysicsConstraintActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_APhysicsConstraintActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsConstraintActor(); \
	friend struct ::Z_Construct_UClass_APhysicsConstraintActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_APhysicsConstraintActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APhysicsConstraintActor, ARigidBodyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_APhysicsConstraintActor_NoRegister) \
	DECLARE_SERIALIZER(APhysicsConstraintActor)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APhysicsConstraintActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsConstraintActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APhysicsConstraintActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsConstraintActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APhysicsConstraintActor(APhysicsConstraintActor&&) = delete; \
	APhysicsConstraintActor(const APhysicsConstraintActor&) = delete; \
	ENGINE_API virtual ~APhysicsConstraintActor();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APhysicsConstraintActor;

// ********** End Class APhysicsConstraintActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
