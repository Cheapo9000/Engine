// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetEditorPhysicsHandleComponent.h"

#ifdef PHYSICSASSETEDITOR_PhysicsAssetEditorPhysicsHandleComponent_generated_h
#error "PhysicsAssetEditorPhysicsHandleComponent.generated.h already included, missing '#pragma once' in PhysicsAssetEditorPhysicsHandleComponent.h"
#endif
#define PHYSICSASSETEDITOR_PhysicsAssetEditorPhysicsHandleComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsAssetEditorPhysicsHandleComponent ********************************
struct Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_Statics;
PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_NoRegister();

#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAssetEditorPhysicsHandleComponent(); \
	friend struct ::Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSASSETEDITOR_API UClass* ::Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsAssetEditorPhysicsHandleComponent, UPhysicsHandleComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsAssetEditor"), Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsAssetEditorPhysicsHandleComponent)


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsAssetEditorPhysicsHandleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetEditorPhysicsHandleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsAssetEditorPhysicsHandleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetEditorPhysicsHandleComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsAssetEditorPhysicsHandleComponent(UPhysicsAssetEditorPhysicsHandleComponent&&) = delete; \
	UPhysicsAssetEditorPhysicsHandleComponent(const UPhysicsAssetEditorPhysicsHandleComponent&) = delete; \
	NO_API virtual ~UPhysicsAssetEditorPhysicsHandleComponent();


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h_12_PROLOG
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h_15_INCLASS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsAssetEditorPhysicsHandleComponent;

// ********** End Class UPhysicsAssetEditorPhysicsHandleComponent **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
