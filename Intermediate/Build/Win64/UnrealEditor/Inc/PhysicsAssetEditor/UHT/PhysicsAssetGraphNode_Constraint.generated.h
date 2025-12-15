// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetGraph/PhysicsAssetGraphNode_Constraint.h"

#ifdef PHYSICSASSETEDITOR_PhysicsAssetGraphNode_Constraint_generated_h
#error "PhysicsAssetGraphNode_Constraint.generated.h already included, missing '#pragma once' in PhysicsAssetGraphNode_Constraint.h"
#endif
#define PHYSICSASSETEDITOR_PhysicsAssetGraphNode_Constraint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsAssetGraphNode_Constraint ****************************************
struct Z_Construct_UClass_UPhysicsAssetGraphNode_Constraint_Statics;
PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraphNode_Constraint_NoRegister();

#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Constraint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsAssetGraphNode_Constraint(); \
	friend struct ::Z_Construct_UClass_UPhysicsAssetGraphNode_Constraint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSASSETEDITOR_API UClass* ::Z_Construct_UClass_UPhysicsAssetGraphNode_Constraint_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsAssetGraphNode_Constraint, UPhysicsAssetGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsAssetEditor"), Z_Construct_UClass_UPhysicsAssetGraphNode_Constraint_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsAssetGraphNode_Constraint)


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Constraint_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsAssetGraphNode_Constraint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsAssetGraphNode_Constraint(UPhysicsAssetGraphNode_Constraint&&) = delete; \
	UPhysicsAssetGraphNode_Constraint(const UPhysicsAssetGraphNode_Constraint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsAssetGraphNode_Constraint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetGraphNode_Constraint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetGraphNode_Constraint) \
	NO_API virtual ~UPhysicsAssetGraphNode_Constraint();


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Constraint_h_11_PROLOG
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Constraint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Constraint_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Constraint_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsAssetGraphNode_Constraint;

// ********** End Class UPhysicsAssetGraphNode_Constraint ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Constraint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
