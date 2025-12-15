// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetEditorSkeletalMeshComponent.h"

#ifdef PHYSICSASSETEDITOR_PhysicsAssetEditorSkeletalMeshComponent_generated_h
#error "PhysicsAssetEditorSkeletalMeshComponent.generated.h already included, missing '#pragma once' in PhysicsAssetEditorSkeletalMeshComponent.h"
#endif
#define PHYSICSASSETEDITOR_PhysicsAssetEditorSkeletalMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPhysicsAssetEditorDrawState **************************************
struct Z_Construct_UScriptStruct_FPhysicsAssetEditorDrawState_Statics;
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsAssetEditorDrawState_Statics; \
	PHYSICSASSETEDITOR_API static class UScriptStruct* StaticStruct();


struct FPhysicsAssetEditorDrawState;
// ********** End ScriptStruct FPhysicsAssetEditorDrawState ****************************************

// ********** Begin Class UPhysicsAssetEditorSkeletalMeshComponent *********************************
struct Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics;
PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_NoRegister();

#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAssetEditorSkeletalMeshComponent(); \
	friend struct ::Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSASSETEDITOR_API UClass* ::Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsAssetEditorSkeletalMeshComponent, UDebugSkelMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsAssetEditor"), Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsAssetEditorSkeletalMeshComponent)


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsAssetEditorSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetEditorSkeletalMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsAssetEditorSkeletalMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetEditorSkeletalMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsAssetEditorSkeletalMeshComponent(UPhysicsAssetEditorSkeletalMeshComponent&&) = delete; \
	UPhysicsAssetEditorSkeletalMeshComponent(const UPhysicsAssetEditorSkeletalMeshComponent&) = delete; \
	NO_API virtual ~UPhysicsAssetEditorSkeletalMeshComponent();


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_37_PROLOG
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_40_INCLASS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsAssetEditorSkeletalMeshComponent;

// ********** End Class UPhysicsAssetEditorSkeletalMeshComponent ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
