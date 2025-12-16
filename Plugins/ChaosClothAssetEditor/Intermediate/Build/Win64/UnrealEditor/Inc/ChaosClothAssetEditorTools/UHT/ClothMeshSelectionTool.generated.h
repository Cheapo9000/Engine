// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothMeshSelectionTool.h"

#ifdef CHAOSCLOTHASSETEDITORTOOLS_ClothMeshSelectionTool_generated_h
#error "ClothMeshSelectionTool.generated.h already included, missing '#pragma once' in ClothMeshSelectionTool.h"
#endif
#define CHAOSCLOTHASSETEDITORTOOLS_ClothMeshSelectionTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClothMeshSelectionMechanic **********************************************
struct Z_Construct_UClass_UClothMeshSelectionMechanic_Statics;
CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothMeshSelectionMechanic_NoRegister();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothMeshSelectionMechanic(); \
	friend struct ::Z_Construct_UClass_UClothMeshSelectionMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETEDITORTOOLS_API UClass* ::Z_Construct_UClass_UClothMeshSelectionMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothMeshSelectionMechanic, UPolygonSelectionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEditorTools"), Z_Construct_UClass_UClothMeshSelectionMechanic_NoRegister) \
	DECLARE_SERIALIZER(UClothMeshSelectionMechanic)


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothMeshSelectionMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothMeshSelectionMechanic(UClothMeshSelectionMechanic&&) = delete; \
	UClothMeshSelectionMechanic(const UClothMeshSelectionMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothMeshSelectionMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothMeshSelectionMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClothMeshSelectionMechanic) \
	NO_API virtual ~UClothMeshSelectionMechanic();


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_35_PROLOG
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothMeshSelectionMechanic;

// ********** End Class UClothMeshSelectionMechanic ************************************************

// ********** Begin Class UClothMeshSelectionToolActions *******************************************
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execFloodSelection); \
	DECLARE_FUNCTION(execShrinkSelection); \
	DECLARE_FUNCTION(execGrowSelection);


struct Z_Construct_UClass_UClothMeshSelectionToolActions_Statics;
CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothMeshSelectionToolActions_NoRegister();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothMeshSelectionToolActions(); \
	friend struct ::Z_Construct_UClass_UClothMeshSelectionToolActions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETEDITORTOOLS_API UClass* ::Z_Construct_UClass_UClothMeshSelectionToolActions_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothMeshSelectionToolActions, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEditorTools"), Z_Construct_UClass_UClothMeshSelectionToolActions_NoRegister) \
	DECLARE_SERIALIZER(UClothMeshSelectionToolActions)


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETEDITORTOOLS_API UClothMeshSelectionToolActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothMeshSelectionToolActions(UClothMeshSelectionToolActions&&) = delete; \
	UClothMeshSelectionToolActions(const UClothMeshSelectionToolActions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETEDITORTOOLS_API, UClothMeshSelectionToolActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothMeshSelectionToolActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothMeshSelectionToolActions) \
	CHAOSCLOTHASSETEDITORTOOLS_API virtual ~UClothMeshSelectionToolActions();


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_46_PROLOG
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothMeshSelectionToolActions;

// ********** End Class UClothMeshSelectionToolActions *********************************************

// ********** Begin Class UClothMeshSelectionToolProperties ****************************************
struct Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics;
CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothMeshSelectionToolProperties_NoRegister();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothMeshSelectionToolProperties(); \
	friend struct ::Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETEDITORTOOLS_API UClass* ::Z_Construct_UClass_UClothMeshSelectionToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothMeshSelectionToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEditorTools"), Z_Construct_UClass_UClothMeshSelectionToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UClothMeshSelectionToolProperties)


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETEDITORTOOLS_API UClothMeshSelectionToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothMeshSelectionToolProperties(UClothMeshSelectionToolProperties&&) = delete; \
	UClothMeshSelectionToolProperties(const UClothMeshSelectionToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETEDITORTOOLS_API, UClothMeshSelectionToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothMeshSelectionToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothMeshSelectionToolProperties) \
	CHAOSCLOTHASSETEDITORTOOLS_API virtual ~UClothMeshSelectionToolProperties();


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_85_PROLOG
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothMeshSelectionToolProperties;

// ********** End Class UClothMeshSelectionToolProperties ******************************************

// ********** Begin Class UClothMeshSelectionTool **************************************************
struct Z_Construct_UClass_UClothMeshSelectionTool_Statics;
CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothMeshSelectionTool_NoRegister();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothMeshSelectionTool(); \
	friend struct ::Z_Construct_UClass_UClothMeshSelectionTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETEDITORTOOLS_API UClass* ::Z_Construct_UClass_UClothMeshSelectionTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothMeshSelectionTool, USingleSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEditorTools"), Z_Construct_UClass_UClothMeshSelectionTool_NoRegister) \
	DECLARE_SERIALIZER(UClothMeshSelectionTool)


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETEDITORTOOLS_API UClothMeshSelectionTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothMeshSelectionTool(UClothMeshSelectionTool&&) = delete; \
	UClothMeshSelectionTool(const UClothMeshSelectionTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETEDITORTOOLS_API, UClothMeshSelectionTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothMeshSelectionTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClothMeshSelectionTool) \
	CHAOSCLOTHASSETEDITORTOOLS_API virtual ~UClothMeshSelectionTool();


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_110_PROLOG
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothMeshSelectionTool;

// ********** End Class UClothMeshSelectionTool ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothMeshSelectionTool_h

// ********** Begin Enum EClothMeshSelectionToolActions ********************************************
#define FOREACH_ENUM_ECLOTHMESHSELECTIONTOOLACTIONS(op) \
	op(EClothMeshSelectionToolActions::NoAction) \
	op(EClothMeshSelectionToolActions::GrowSelection) \
	op(EClothMeshSelectionToolActions::ShrinkSelection) \
	op(EClothMeshSelectionToolActions::FloodSelection) \
	op(EClothMeshSelectionToolActions::ClearSelection) 

enum class EClothMeshSelectionToolActions;
template<> struct TIsUEnumClass<EClothMeshSelectionToolActions> { enum { Value = true }; };
template<> CHAOSCLOTHASSETEDITORTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EClothMeshSelectionToolActions>();
// ********** End Enum EClothMeshSelectionToolActions **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
