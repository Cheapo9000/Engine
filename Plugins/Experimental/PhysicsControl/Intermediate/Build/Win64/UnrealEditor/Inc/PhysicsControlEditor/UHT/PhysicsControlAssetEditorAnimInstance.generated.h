// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsControlAssetEditorAnimInstance.h"

#ifdef PHYSICSCONTROLEDITOR_PhysicsControlAssetEditorAnimInstance_generated_h
#error "PhysicsControlAssetEditorAnimInstance.generated.h already included, missing '#pragma once' in PhysicsControlAssetEditorAnimInstance.h"
#endif
#define PHYSICSCONTROLEDITOR_PhysicsControlAssetEditorAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsControlAssetEditorAnimInstance ***********************************
struct Z_Construct_UClass_UPhysicsControlAssetEditorAnimInstance_Statics;
PHYSICSCONTROLEDITOR_API UClass* Z_Construct_UClass_UPhysicsControlAssetEditorAnimInstance_NoRegister();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetEditorAnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsControlAssetEditorAnimInstance(); \
	friend struct ::Z_Construct_UClass_UPhysicsControlAssetEditorAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSCONTROLEDITOR_API UClass* ::Z_Construct_UClass_UPhysicsControlAssetEditorAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsControlAssetEditorAnimInstance, UAnimPreviewInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PhysicsControlEditor"), Z_Construct_UClass_UPhysicsControlAssetEditorAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsControlAssetEditorAnimInstance)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetEditorAnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsControlAssetEditorAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsControlAssetEditorAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsControlAssetEditorAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsControlAssetEditorAnimInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsControlAssetEditorAnimInstance(UPhysicsControlAssetEditorAnimInstance&&) = delete; \
	UPhysicsControlAssetEditorAnimInstance(const UPhysicsControlAssetEditorAnimInstance&) = delete; \
	NO_API virtual ~UPhysicsControlAssetEditorAnimInstance();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetEditorAnimInstance_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetEditorAnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetEditorAnimInstance_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetEditorAnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsControlAssetEditorAnimInstance;

// ********** End Class UPhysicsControlAssetEditorAnimInstance *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlEditor_Private_PhysicsControlAssetEditorAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
