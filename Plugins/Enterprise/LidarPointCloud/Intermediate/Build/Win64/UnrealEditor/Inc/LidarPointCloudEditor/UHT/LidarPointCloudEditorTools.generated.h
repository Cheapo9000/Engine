// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LidarPointCloudEditorTools.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIDARPOINTCLOUDEDITOR_LidarPointCloudEditorTools_generated_h
#error "LidarPointCloudEditorTools.generated.h already included, missing '#pragma once' in LidarPointCloudEditorTools.h"
#endif
#define LIDARPOINTCLOUDEDITOR_LidarPointCloudEditorTools_generated_h

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBase(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBase_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBase, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBase)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBase(ULidarEditorToolBase&&); \
	ULidarEditorToolBase(const ULidarEditorToolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolBase) \
	NO_API virtual ~ULidarEditorToolBase();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_16_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBase>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBuilderBase(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBuilderBase_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBuilderBase, UInteractiveToolWithToolTargetsBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBuilderBase)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBuilderBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBuilderBase(ULidarEditorToolBuilderBase&&); \
	ULidarEditorToolBuilderBase(const ULidarEditorToolBuilderBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBuilderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBuilderBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarEditorToolBuilderBase) \
	NO_API virtual ~ULidarEditorToolBuilderBase();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_30_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBuilderBase>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolClickDragBase(); \
	friend struct Z_Construct_UClass_ULidarEditorToolClickDragBase_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolClickDragBase, ULidarEditorToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolClickDragBase) \
	virtual UObject* _getUObject() const override { return const_cast<ULidarEditorToolClickDragBase*>(this); }


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolClickDragBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolClickDragBase(ULidarEditorToolClickDragBase&&); \
	ULidarEditorToolClickDragBase(const ULidarEditorToolClickDragBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolClickDragBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolClickDragBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolClickDragBase) \
	NO_API virtual ~ULidarEditorToolClickDragBase();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_40_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_48_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolClickDragBase>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBuilderSelect(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBuilderSelect_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBuilderSelect, ULidarEditorToolBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBuilderSelect)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBuilderSelect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBuilderSelect(ULidarEditorToolBuilderSelect&&); \
	ULidarEditorToolBuilderSelect(const ULidarEditorToolBuilderSelect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBuilderSelect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBuilderSelect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarEditorToolBuilderSelect) \
	NO_API virtual ~ULidarEditorToolBuilderSelect();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_89_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBuilderSelect>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetAlignment); \
	DECLARE_FUNCTION(execAlignAroundOriginalCoordinates); \
	DECLARE_FUNCTION(execAlignAroundWorldOrigin);


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarToolActionsAlign(); \
	friend struct Z_Construct_UClass_ULidarToolActionsAlign_Statics; \
public: \
	DECLARE_CLASS(ULidarToolActionsAlign, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarToolActionsAlign)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarToolActionsAlign(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarToolActionsAlign(ULidarToolActionsAlign&&); \
	ULidarToolActionsAlign(const ULidarToolActionsAlign&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarToolActionsAlign); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarToolActionsAlign); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarToolActionsAlign) \
	NO_API virtual ~ULidarToolActionsAlign();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_95_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarToolActionsAlign>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolAlign(); \
	friend struct Z_Construct_UClass_ULidarEditorToolAlign_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolAlign, ULidarEditorToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolAlign)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolAlign(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolAlign(ULidarEditorToolAlign&&); \
	ULidarEditorToolAlign(const ULidarEditorToolAlign&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolAlign); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolAlign); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolAlign) \
	NO_API virtual ~ULidarEditorToolAlign();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_111_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_115_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolAlign>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBuilderAlign(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBuilderAlign_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBuilderAlign, ULidarEditorToolBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBuilderAlign)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBuilderAlign(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBuilderAlign(ULidarEditorToolBuilderAlign&&); \
	ULidarEditorToolBuilderAlign(const ULidarEditorToolBuilderAlign&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBuilderAlign); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBuilderAlign); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarEditorToolBuilderAlign) \
	NO_API virtual ~ULidarEditorToolBuilderAlign();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_119_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_123_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBuilderAlign>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMergeData); \
	DECLARE_FUNCTION(execMergeActors);


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarToolActionsMerge(); \
	friend struct Z_Construct_UClass_ULidarToolActionsMerge_Statics; \
public: \
	DECLARE_CLASS(ULidarToolActionsMerge, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarToolActionsMerge)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_130_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarToolActionsMerge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarToolActionsMerge(ULidarToolActionsMerge&&); \
	ULidarToolActionsMerge(const ULidarToolActionsMerge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarToolActionsMerge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarToolActionsMerge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarToolActionsMerge) \
	NO_API virtual ~ULidarToolActionsMerge();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_127_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_130_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarToolActionsMerge>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolMerge(); \
	friend struct Z_Construct_UClass_ULidarEditorToolMerge_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolMerge, ULidarEditorToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolMerge)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolMerge(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolMerge(ULidarEditorToolMerge&&); \
	ULidarEditorToolMerge(const ULidarEditorToolMerge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolMerge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolMerge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolMerge) \
	NO_API virtual ~ULidarEditorToolMerge();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_143_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_147_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_147_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolMerge>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBuilderMerge(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBuilderMerge_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBuilderMerge, ULidarEditorToolBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBuilderMerge)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_155_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBuilderMerge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBuilderMerge(ULidarEditorToolBuilderMerge&&); \
	ULidarEditorToolBuilderMerge(const ULidarEditorToolBuilderMerge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBuilderMerge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBuilderMerge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarEditorToolBuilderMerge) \
	NO_API virtual ~ULidarEditorToolBuilderMerge();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_151_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_155_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_155_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBuilderMerge>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveCollision); \
	DECLARE_FUNCTION(execBuildCollision);


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_162_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarToolActionsCollision(); \
	friend struct Z_Construct_UClass_ULidarToolActionsCollision_Statics; \
public: \
	DECLARE_CLASS(ULidarToolActionsCollision, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarToolActionsCollision)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_162_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarToolActionsCollision(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarToolActionsCollision(ULidarToolActionsCollision&&); \
	ULidarToolActionsCollision(const ULidarToolActionsCollision&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarToolActionsCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarToolActionsCollision); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarToolActionsCollision) \
	NO_API virtual ~ULidarToolActionsCollision();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_159_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_162_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_162_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_162_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarToolActionsCollision>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolCollision(); \
	friend struct Z_Construct_UClass_ULidarEditorToolCollision_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolCollision, ULidarEditorToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolCollision)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_179_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolCollision(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolCollision(ULidarEditorToolCollision&&); \
	ULidarEditorToolCollision(const ULidarEditorToolCollision&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolCollision); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolCollision) \
	NO_API virtual ~ULidarEditorToolCollision();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_175_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_179_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_179_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolCollision>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBuilderCollision(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBuilderCollision_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBuilderCollision, ULidarEditorToolBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBuilderCollision)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_187_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBuilderCollision(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBuilderCollision(ULidarEditorToolBuilderCollision&&); \
	ULidarEditorToolBuilderCollision(const ULidarEditorToolBuilderCollision&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBuilderCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBuilderCollision); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarEditorToolBuilderCollision) \
	NO_API virtual ~ULidarEditorToolBuilderCollision();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_183_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_187_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_187_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBuilderCollision>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildStaticMesh);


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarToolActionsMeshing(); \
	friend struct Z_Construct_UClass_ULidarToolActionsMeshing_Statics; \
public: \
	DECLARE_CLASS(ULidarToolActionsMeshing, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarToolActionsMeshing)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_194_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarToolActionsMeshing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarToolActionsMeshing(ULidarToolActionsMeshing&&); \
	ULidarToolActionsMeshing(const ULidarToolActionsMeshing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarToolActionsMeshing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarToolActionsMeshing); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarToolActionsMeshing) \
	NO_API virtual ~ULidarToolActionsMeshing();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_191_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_194_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarToolActionsMeshing>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_216_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolMeshing(); \
	friend struct Z_Construct_UClass_ULidarEditorToolMeshing_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolMeshing, ULidarEditorToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolMeshing)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_216_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolMeshing(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolMeshing(ULidarEditorToolMeshing&&); \
	ULidarEditorToolMeshing(const ULidarEditorToolMeshing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolMeshing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolMeshing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolMeshing) \
	NO_API virtual ~ULidarEditorToolMeshing();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_212_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_216_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_216_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_216_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolMeshing>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_224_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBuilderMeshing(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBuilderMeshing_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBuilderMeshing, ULidarEditorToolBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBuilderMeshing)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_224_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBuilderMeshing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBuilderMeshing(ULidarEditorToolBuilderMeshing&&); \
	ULidarEditorToolBuilderMeshing(const ULidarEditorToolBuilderMeshing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBuilderMeshing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBuilderMeshing); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarEditorToolBuilderMeshing) \
	NO_API virtual ~ULidarEditorToolBuilderMeshing();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_220_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_224_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_224_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_224_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBuilderMeshing>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_231_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateNormals);


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_231_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarToolActionsNormals(); \
	friend struct Z_Construct_UClass_ULidarToolActionsNormals_Statics; \
public: \
	DECLARE_CLASS(ULidarToolActionsNormals, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarToolActionsNormals)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_231_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarToolActionsNormals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarToolActionsNormals(ULidarToolActionsNormals&&); \
	ULidarToolActionsNormals(const ULidarToolActionsNormals&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarToolActionsNormals); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarToolActionsNormals); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarToolActionsNormals) \
	NO_API virtual ~ULidarToolActionsNormals();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_228_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_231_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_231_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_231_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_231_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarToolActionsNormals>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_254_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolNormals(); \
	friend struct Z_Construct_UClass_ULidarEditorToolNormals_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolNormals, ULidarEditorToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolNormals)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_254_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolNormals(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolNormals(ULidarEditorToolNormals&&); \
	ULidarEditorToolNormals(const ULidarEditorToolNormals&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolNormals); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolNormals); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolNormals) \
	NO_API virtual ~ULidarEditorToolNormals();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_250_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_254_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_254_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_254_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolNormals>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_262_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBuilderNormals(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBuilderNormals_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBuilderNormals, ULidarEditorToolBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBuilderNormals)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_262_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBuilderNormals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBuilderNormals(ULidarEditorToolBuilderNormals&&); \
	ULidarEditorToolBuilderNormals(const ULidarEditorToolBuilderNormals&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBuilderNormals); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBuilderNormals); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarEditorToolBuilderNormals) \
	NO_API virtual ~ULidarEditorToolBuilderNormals();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_258_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_262_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_262_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_262_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBuilderNormals>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_269_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildStaticMesh); \
	DECLARE_FUNCTION(execExtractAsCopy); \
	DECLARE_FUNCTION(execExtract); \
	DECLARE_FUNCTION(execCalculateNormals); \
	DECLARE_FUNCTION(execResetVisibility); \
	DECLARE_FUNCTION(execHideSelected); \
	DECLARE_FUNCTION(execDeleteHidden); \
	DECLARE_FUNCTION(execDeleteSelected); \
	DECLARE_FUNCTION(execInvertSelection); \
	DECLARE_FUNCTION(execClearSelection);


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_269_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarToolActionsSelection(); \
	friend struct Z_Construct_UClass_ULidarToolActionsSelection_Statics; \
public: \
	DECLARE_CLASS(ULidarToolActionsSelection, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarToolActionsSelection)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_269_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarToolActionsSelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarToolActionsSelection(ULidarToolActionsSelection&&); \
	ULidarToolActionsSelection(const ULidarToolActionsSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarToolActionsSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarToolActionsSelection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarToolActionsSelection) \
	NO_API virtual ~ULidarToolActionsSelection();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_266_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_269_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_269_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_269_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_269_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarToolActionsSelection>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_330_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolSelectionBase(); \
	friend struct Z_Construct_UClass_ULidarEditorToolSelectionBase_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolSelectionBase, ULidarEditorToolClickDragBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolSelectionBase)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_330_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolSelectionBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolSelectionBase(ULidarEditorToolSelectionBase&&); \
	ULidarEditorToolSelectionBase(const ULidarEditorToolSelectionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolSelectionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolSelectionBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolSelectionBase) \
	NO_API virtual ~ULidarEditorToolSelectionBase();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_326_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_330_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_330_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_330_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolSelectionBase>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_357_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBoxSelection(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBoxSelection_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBoxSelection, ULidarEditorToolSelectionBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBoxSelection)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_357_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBoxSelection(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBoxSelection(ULidarEditorToolBoxSelection&&); \
	ULidarEditorToolBoxSelection(const ULidarEditorToolBoxSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBoxSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBoxSelection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolBoxSelection) \
	NO_API virtual ~ULidarEditorToolBoxSelection();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_353_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_357_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_357_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_357_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBoxSelection>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_368_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBuilderBoxSelection(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBuilderBoxSelection_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBuilderBoxSelection, ULidarEditorToolBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBuilderBoxSelection)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_368_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBuilderBoxSelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBuilderBoxSelection(ULidarEditorToolBuilderBoxSelection&&); \
	ULidarEditorToolBuilderBoxSelection(const ULidarEditorToolBuilderBoxSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBuilderBoxSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBuilderBoxSelection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarEditorToolBuilderBoxSelection) \
	NO_API virtual ~ULidarEditorToolBuilderBoxSelection();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_364_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_368_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_368_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_368_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBuilderBoxSelection>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_376_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolPolygonalSelection(); \
	friend struct Z_Construct_UClass_ULidarEditorToolPolygonalSelection_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolPolygonalSelection, ULidarEditorToolSelectionBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolPolygonalSelection)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_376_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolPolygonalSelection(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolPolygonalSelection(ULidarEditorToolPolygonalSelection&&); \
	ULidarEditorToolPolygonalSelection(const ULidarEditorToolPolygonalSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolPolygonalSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolPolygonalSelection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolPolygonalSelection) \
	NO_API virtual ~ULidarEditorToolPolygonalSelection();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_372_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_376_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_376_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_376_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolPolygonalSelection>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_389_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBuilderPolygonalSelection(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBuilderPolygonalSelection_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBuilderPolygonalSelection, ULidarEditorToolBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBuilderPolygonalSelection)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_389_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBuilderPolygonalSelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBuilderPolygonalSelection(ULidarEditorToolBuilderPolygonalSelection&&); \
	ULidarEditorToolBuilderPolygonalSelection(const ULidarEditorToolBuilderPolygonalSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBuilderPolygonalSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBuilderPolygonalSelection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarEditorToolBuilderPolygonalSelection) \
	NO_API virtual ~ULidarEditorToolBuilderPolygonalSelection();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_385_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_389_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_389_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_389_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBuilderPolygonalSelection>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_397_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolLassoSelection(); \
	friend struct Z_Construct_UClass_ULidarEditorToolLassoSelection_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolLassoSelection, ULidarEditorToolSelectionBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolLassoSelection)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_397_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolLassoSelection(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolLassoSelection(ULidarEditorToolLassoSelection&&); \
	ULidarEditorToolLassoSelection(const ULidarEditorToolLassoSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolLassoSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolLassoSelection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolLassoSelection) \
	NO_API virtual ~ULidarEditorToolLassoSelection();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_393_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_397_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_397_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_397_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolLassoSelection>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_407_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBuilderLassoSelection(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBuilderLassoSelection_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBuilderLassoSelection, ULidarEditorToolBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBuilderLassoSelection)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_407_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBuilderLassoSelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBuilderLassoSelection(ULidarEditorToolBuilderLassoSelection&&); \
	ULidarEditorToolBuilderLassoSelection(const ULidarEditorToolBuilderLassoSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBuilderLassoSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBuilderLassoSelection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarEditorToolBuilderLassoSelection) \
	NO_API virtual ~ULidarEditorToolBuilderLassoSelection();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_403_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_407_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_407_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_407_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBuilderLassoSelection>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_414_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarToolActionsPaintSelection(); \
	friend struct Z_Construct_UClass_ULidarToolActionsPaintSelection_Statics; \
public: \
	DECLARE_CLASS(ULidarToolActionsPaintSelection, ULidarToolActionsSelection, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarToolActionsPaintSelection)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_414_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarToolActionsPaintSelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarToolActionsPaintSelection(ULidarToolActionsPaintSelection&&); \
	ULidarToolActionsPaintSelection(const ULidarToolActionsPaintSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarToolActionsPaintSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarToolActionsPaintSelection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarToolActionsPaintSelection) \
	NO_API virtual ~ULidarToolActionsPaintSelection();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_411_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_414_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_414_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_414_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarToolActionsPaintSelection>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_425_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolPaintSelection(); \
	friend struct Z_Construct_UClass_ULidarEditorToolPaintSelection_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolPaintSelection, ULidarEditorToolSelectionBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolPaintSelection)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_425_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolPaintSelection(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolPaintSelection(ULidarEditorToolPaintSelection&&); \
	ULidarEditorToolPaintSelection(const ULidarEditorToolPaintSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolPaintSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolPaintSelection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarEditorToolPaintSelection) \
	NO_API virtual ~ULidarEditorToolPaintSelection();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_421_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_425_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_425_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_425_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolPaintSelection>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_451_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarEditorToolBuilderPaintSelection(); \
	friend struct Z_Construct_UClass_ULidarEditorToolBuilderPaintSelection_Statics; \
public: \
	DECLARE_CLASS(ULidarEditorToolBuilderPaintSelection, ULidarEditorToolBuilderBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LidarPointCloudEditor"), NO_API) \
	DECLARE_SERIALIZER(ULidarEditorToolBuilderPaintSelection)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_451_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarEditorToolBuilderPaintSelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULidarEditorToolBuilderPaintSelection(ULidarEditorToolBuilderPaintSelection&&); \
	ULidarEditorToolBuilderPaintSelection(const ULidarEditorToolBuilderPaintSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarEditorToolBuilderPaintSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarEditorToolBuilderPaintSelection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarEditorToolBuilderPaintSelection) \
	NO_API virtual ~ULidarEditorToolBuilderPaintSelection();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_447_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_451_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_451_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h_451_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<class ULidarEditorToolBuilderPaintSelection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEditorTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
