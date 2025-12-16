// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothEditorOptions.h"

#ifdef CHAOSCLOTHASSETEDITOR_ClothEditorOptions_generated_h
#error "ClothEditorOptions.generated.h already included, missing '#pragma once' in ClothEditorOptions.h"
#endif
#define CHAOSCLOTHASSETEDITOR_ClothEditorOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosClothEditorOptions *************************************************
struct Z_Construct_UClass_UChaosClothEditorOptions_Statics;
CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothEditorOptions_NoRegister();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorOptions_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUChaosClothEditorOptions(); \
	friend struct ::Z_Construct_UClass_UChaosClothEditorOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETEDITOR_API UClass* ::Z_Construct_UClass_UChaosClothEditorOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosClothEditorOptions, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEditor"), Z_Construct_UClass_UChaosClothEditorOptions_NoRegister) \
	DECLARE_SERIALIZER(UChaosClothEditorOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorOptions_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETEDITOR_API UChaosClothEditorOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothEditorOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETEDITOR_API, UChaosClothEditorOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothEditorOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosClothEditorOptions(UChaosClothEditorOptions&&) = delete; \
	UChaosClothEditorOptions(const UChaosClothEditorOptions&) = delete; \
	CHAOSCLOTHASSETEDITOR_API virtual ~UChaosClothEditorOptions();


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorOptions_h_23_PROLOG
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorOptions_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorOptions_h_26_INCLASS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorOptions_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosClothEditorOptions;

// ********** End Class UChaosClothEditorOptions ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorOptions_h

// ********** Begin Enum EConstructionViewportMousePanButton ***************************************
#define FOREACH_ENUM_ECONSTRUCTIONVIEWPORTMOUSEPANBUTTON(op) \
	op(EConstructionViewportMousePanButton::Right) \
	op(EConstructionViewportMousePanButton::Middle) \
	op(EConstructionViewportMousePanButton::RightOrMiddle) 

enum class EConstructionViewportMousePanButton : uint8;
template<> struct TIsUEnumClass<EConstructionViewportMousePanButton> { enum { Value = true }; };
template<> CHAOSCLOTHASSETEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EConstructionViewportMousePanButton>();
// ********** End Enum EConstructionViewportMousePanButton *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
