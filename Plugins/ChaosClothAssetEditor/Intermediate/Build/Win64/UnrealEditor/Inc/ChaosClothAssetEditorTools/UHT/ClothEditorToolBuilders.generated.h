// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothEditorToolBuilders.h"

#ifdef CHAOSCLOTHASSETEDITORTOOLS_ClothEditorToolBuilders_generated_h
#error "ClothEditorToolBuilders.generated.h already included, missing '#pragma once' in ClothEditorToolBuilders.h"
#endif
#define CHAOSCLOTHASSETEDITORTOOLS_ClothEditorToolBuilders_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UChaosClothAssetEditorToolBuilder ************************************
struct Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_Statics;
CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_NoRegister();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETEDITORTOOLS_API UChaosClothAssetEditorToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosClothAssetEditorToolBuilder(UChaosClothAssetEditorToolBuilder&&) = delete; \
	UChaosClothAssetEditorToolBuilder(const UChaosClothAssetEditorToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETEDITORTOOLS_API, UChaosClothAssetEditorToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothAssetEditorToolBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothAssetEditorToolBuilder) \
	virtual ~UChaosClothAssetEditorToolBuilder() = default;


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_34_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosClothAssetEditorToolBuilder(); \
	friend struct ::Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETEDITORTOOLS_API UClass* ::Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosClothAssetEditorToolBuilder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEditorTools"), Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UChaosClothAssetEditorToolBuilder)


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_34_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_34_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_34_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosClothAssetEditorToolBuilder() {} \
public: \
	typedef UChaosClothAssetEditorToolBuilder UClassType; \
	typedef IChaosClothAssetEditorToolBuilder ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_31_PROLOG
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosClothAssetEditorToolBuilder;

// ********** End Interface UChaosClothAssetEditorToolBuilder **************************************

// ********** Begin Class UClothEditorWeightMapPaintToolBuilder ************************************
struct Z_Construct_UClass_UClothEditorWeightMapPaintToolBuilder_Statics;
CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothEditorWeightMapPaintToolBuilder_NoRegister();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothEditorWeightMapPaintToolBuilder(); \
	friend struct ::Z_Construct_UClass_UClothEditorWeightMapPaintToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETEDITORTOOLS_API UClass* ::Z_Construct_UClass_UClothEditorWeightMapPaintToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothEditorWeightMapPaintToolBuilder, UMeshSurfacePointMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEditorTools"), Z_Construct_UClass_UClothEditorWeightMapPaintToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UClothEditorWeightMapPaintToolBuilder) \
	virtual UObject* _getUObject() const override { return const_cast<UClothEditorWeightMapPaintToolBuilder*>(this); }


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETEDITORTOOLS_API UClothEditorWeightMapPaintToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothEditorWeightMapPaintToolBuilder(UClothEditorWeightMapPaintToolBuilder&&) = delete; \
	UClothEditorWeightMapPaintToolBuilder(const UClothEditorWeightMapPaintToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETEDITORTOOLS_API, UClothEditorWeightMapPaintToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothEditorWeightMapPaintToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothEditorWeightMapPaintToolBuilder) \
	CHAOSCLOTHASSETEDITORTOOLS_API virtual ~UClothEditorWeightMapPaintToolBuilder();


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_55_PROLOG
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothEditorWeightMapPaintToolBuilder;

// ********** End Class UClothEditorWeightMapPaintToolBuilder **************************************

// ********** Begin Class UClothMeshSelectionToolBuilder *******************************************
struct Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics;
CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothMeshSelectionToolBuilder_NoRegister();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothMeshSelectionToolBuilder(); \
	friend struct ::Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETEDITORTOOLS_API UClass* ::Z_Construct_UClass_UClothMeshSelectionToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothMeshSelectionToolBuilder, UInteractiveToolWithToolTargetsBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEditorTools"), Z_Construct_UClass_UClothMeshSelectionToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UClothMeshSelectionToolBuilder) \
	virtual UObject* _getUObject() const override { return const_cast<UClothMeshSelectionToolBuilder*>(this); }


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETEDITORTOOLS_API UClothMeshSelectionToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothMeshSelectionToolBuilder(UClothMeshSelectionToolBuilder&&) = delete; \
	UClothMeshSelectionToolBuilder(const UClothMeshSelectionToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETEDITORTOOLS_API, UClothMeshSelectionToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothMeshSelectionToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothMeshSelectionToolBuilder) \
	CHAOSCLOTHASSETEDITORTOOLS_API virtual ~UClothMeshSelectionToolBuilder();


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_78_PROLOG
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothMeshSelectionToolBuilder;

// ********** End Class UClothMeshSelectionToolBuilder *********************************************

// ********** Begin Class UClothTransferSkinWeightsToolBuilder *************************************
struct Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics;
CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_NoRegister();

#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothTransferSkinWeightsToolBuilder(); \
	friend struct ::Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETEDITORTOOLS_API UClass* ::Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothTransferSkinWeightsToolBuilder, USingleSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEditorTools"), Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UClothTransferSkinWeightsToolBuilder) \
	virtual UObject* _getUObject() const override { return const_cast<UClothTransferSkinWeightsToolBuilder*>(this); }


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTHASSETEDITORTOOLS_API UClothTransferSkinWeightsToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothTransferSkinWeightsToolBuilder(UClothTransferSkinWeightsToolBuilder&&) = delete; \
	UClothTransferSkinWeightsToolBuilder(const UClothTransferSkinWeightsToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTHASSETEDITORTOOLS_API, UClothTransferSkinWeightsToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothTransferSkinWeightsToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothTransferSkinWeightsToolBuilder) \
	CHAOSCLOTHASSETEDITORTOOLS_API virtual ~UClothTransferSkinWeightsToolBuilder();


#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_102_PROLOG
#define FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_105_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothTransferSkinWeightsToolBuilder;

// ********** End Class UClothTransferSkinWeightsToolBuilder ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothEditorToolBuilders_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
