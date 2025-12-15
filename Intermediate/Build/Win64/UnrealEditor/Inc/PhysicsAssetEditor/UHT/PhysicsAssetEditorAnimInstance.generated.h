// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetEditorAnimInstance.h"

#ifdef PHYSICSASSETEDITOR_PhysicsAssetEditorAnimInstance_generated_h
#error "PhysicsAssetEditorAnimInstance.generated.h already included, missing '#pragma once' in PhysicsAssetEditorAnimInstance.h"
#endif
#define PHYSICSASSETEDITOR_PhysicsAssetEditorAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsAssetEditorAnimInstance ******************************************
struct Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_Statics;
PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_NoRegister();

#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAssetEditorAnimInstance(); \
	friend struct ::Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSASSETEDITOR_API UClass* ::Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsAssetEditorAnimInstance, UAnimPreviewInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PhysicsAssetEditor"), Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsAssetEditorAnimInstance)


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsAssetEditorAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetEditorAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsAssetEditorAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetEditorAnimInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsAssetEditorAnimInstance(UPhysicsAssetEditorAnimInstance&&) = delete; \
	UPhysicsAssetEditorAnimInstance(const UPhysicsAssetEditorAnimInstance&) = delete; \
	NO_API virtual ~UPhysicsAssetEditorAnimInstance();


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_14_PROLOG
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_17_INCLASS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsAssetEditorAnimInstance;

// ********** End Class UPhysicsAssetEditorAnimInstance ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
