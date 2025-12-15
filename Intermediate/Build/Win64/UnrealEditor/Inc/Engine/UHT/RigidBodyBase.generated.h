// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/RigidBodyBase.h"

#ifdef ENGINE_RigidBodyBase_generated_h
#error "RigidBodyBase.generated.h already included, missing '#pragma once' in RigidBodyBase.h"
#endif
#define ENGINE_RigidBodyBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARigidBodyBase ***********************************************************
struct Z_Construct_UClass_ARigidBodyBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesARigidBodyBase(); \
	friend struct ::Z_Construct_UClass_ARigidBodyBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ARigidBodyBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ARigidBodyBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ARigidBodyBase_NoRegister) \
	DECLARE_SERIALIZER(ARigidBodyBase)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ARigidBodyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARigidBodyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ARigidBodyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARigidBodyBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARigidBodyBase(ARigidBodyBase&&) = delete; \
	ARigidBodyBase(const ARigidBodyBase&) = delete; \
	ENGINE_API virtual ~ARigidBodyBase();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARigidBodyBase;

// ********** End Class ARigidBodyBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
