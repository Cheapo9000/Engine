// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetEditorSelection.h"

#ifdef PHYSICSASSETEDITOR_PhysicsAssetEditorSelection_generated_h
#error "PhysicsAssetEditorSelection.generated.h already included, missing '#pragma once' in PhysicsAssetEditorSelection.h"
#endif
#define PHYSICSASSETEDITOR_PhysicsAssetEditorSelection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPhysicsAssetEditorSelectedElement ********************************
struct Z_Construct_UScriptStruct_FPhysicsAssetEditorSelectedElement_Statics;
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSelection_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsAssetEditorSelectedElement_Statics; \
	PHYSICSASSETEDITOR_API static class UScriptStruct* StaticStruct();


struct FPhysicsAssetEditorSelectedElement;
// ********** End ScriptStruct FPhysicsAssetEditorSelectedElement **********************************

// ********** Begin Class UPhysicsAssetEditorSelection *********************************************
struct Z_Construct_UClass_UPhysicsAssetEditorSelection_Statics;
PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorSelection_NoRegister();

#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSelection_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsAssetEditorSelection(); \
	friend struct ::Z_Construct_UClass_UPhysicsAssetEditorSelection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSASSETEDITOR_API UClass* ::Z_Construct_UClass_UPhysicsAssetEditorSelection_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsAssetEditorSelection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsAssetEditor"), Z_Construct_UClass_UPhysicsAssetEditorSelection_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsAssetEditorSelection)


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSelection_h_169_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsAssetEditorSelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsAssetEditorSelection(UPhysicsAssetEditorSelection&&) = delete; \
	UPhysicsAssetEditorSelection(const UPhysicsAssetEditorSelection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsAssetEditorSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetEditorSelection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetEditorSelection) \
	NO_API virtual ~UPhysicsAssetEditorSelection();


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSelection_h_165_PROLOG
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSelection_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSelection_h_169_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSelection_h_169_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsAssetEditorSelection;

// ********** End Class UPhysicsAssetEditorSelection ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSelection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
