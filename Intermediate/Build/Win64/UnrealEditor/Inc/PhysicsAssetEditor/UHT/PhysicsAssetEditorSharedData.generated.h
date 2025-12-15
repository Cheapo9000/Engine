// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetEditorSharedData.h"

#ifdef PHYSICSASSETEDITOR_PhysicsAssetEditorSharedData_generated_h
#error "PhysicsAssetEditorSharedData.generated.h already included, missing '#pragma once' in PhysicsAssetEditorSharedData.h"
#endif
#define PHYSICSASSETEDITOR_PhysicsAssetEditorSharedData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsAssetCollisionPair ***********************************************
struct Z_Construct_UClass_UPhysicsAssetCollisionPair_Statics;
PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetCollisionPair_NoRegister();

#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSharedData_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsAssetCollisionPair(); \
	friend struct ::Z_Construct_UClass_UPhysicsAssetCollisionPair_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSASSETEDITOR_API UClass* ::Z_Construct_UClass_UPhysicsAssetCollisionPair_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsAssetCollisionPair, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsAssetEditor"), Z_Construct_UClass_UPhysicsAssetCollisionPair_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsAssetCollisionPair)


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSharedData_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PHYSICSASSETEDITOR_API UPhysicsAssetCollisionPair(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsAssetCollisionPair(UPhysicsAssetCollisionPair&&) = delete; \
	UPhysicsAssetCollisionPair(const UPhysicsAssetCollisionPair&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PHYSICSASSETEDITOR_API, UPhysicsAssetCollisionPair); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetCollisionPair); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetCollisionPair) \
	PHYSICSASSETEDITOR_API virtual ~UPhysicsAssetCollisionPair();


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSharedData_h_42_PROLOG
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSharedData_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSharedData_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSharedData_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsAssetCollisionPair;

// ********** End Class UPhysicsAssetCollisionPair *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSharedData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
