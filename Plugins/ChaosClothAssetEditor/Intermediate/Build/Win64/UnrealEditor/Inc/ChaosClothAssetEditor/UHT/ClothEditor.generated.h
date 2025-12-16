// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothEditor.h"

#ifdef CHAOSCLOTHASSETEDITOR_ClothEditor_generated_h
#error "ClothEditor.generated.h already included, missing '#pragma once' in ClothEditor.h"
#endif
#define CHAOSCLOTHASSETEDITOR_ClothEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosClothAssetEditor ***************************************************
struct Z_Construct_UClass_UChaosClothAssetEditor_Statics;
CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothAssetEditor_NoRegister();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothAssetEditor(); \
	friend struct ::Z_Construct_UClass_UChaosClothAssetEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETEDITOR_API UClass* ::Z_Construct_UClass_UChaosClothAssetEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosClothAssetEditor, UBaseCharacterFXEditor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEditor"), Z_Construct_UClass_UChaosClothAssetEditor_NoRegister) \
	DECLARE_SERIALIZER(UChaosClothAssetEditor)


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETEDITOR_API UChaosClothAssetEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosClothAssetEditor(UChaosClothAssetEditor&&) = delete; \
	UChaosClothAssetEditor(const UChaosClothAssetEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETEDITOR_API, UChaosClothAssetEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothAssetEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosClothAssetEditor) \
	CHAOSCLOTHASSETEDITOR_API virtual ~UChaosClothAssetEditor();


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h_23_PROLOG
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosClothAssetEditor;

// ********** End Class UChaosClothAssetEditor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
