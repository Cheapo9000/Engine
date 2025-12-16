// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshResizing/MeshWrapLandmarkSelectionTool.h"

#ifdef MESHRESIZINGEDITORTOOLS_MeshWrapLandmarkSelectionTool_generated_h
#error "MeshWrapLandmarkSelectionTool.generated.h already included, missing '#pragma once' in MeshWrapLandmarkSelectionTool.h"
#endif
#define MESHRESIZINGEDITORTOOLS_MeshWrapLandmarkSelectionTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshWrapLandmarkSelectionMechanic ***************************************
struct Z_Construct_UClass_UMeshWrapLandmarkSelectionMechanic_Statics;
MESHRESIZINGEDITORTOOLS_API UClass* Z_Construct_UClass_UMeshWrapLandmarkSelectionMechanic_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshWrapLandmarkSelectionMechanic(); \
	friend struct ::Z_Construct_UClass_UMeshWrapLandmarkSelectionMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHRESIZINGEDITORTOOLS_API UClass* ::Z_Construct_UClass_UMeshWrapLandmarkSelectionMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshWrapLandmarkSelectionMechanic, UPolygonSelectionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshResizingEditorTools"), Z_Construct_UClass_UMeshWrapLandmarkSelectionMechanic_NoRegister) \
	DECLARE_SERIALIZER(UMeshWrapLandmarkSelectionMechanic)


#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshWrapLandmarkSelectionMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshWrapLandmarkSelectionMechanic(UMeshWrapLandmarkSelectionMechanic&&) = delete; \
	UMeshWrapLandmarkSelectionMechanic(const UMeshWrapLandmarkSelectionMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshWrapLandmarkSelectionMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshWrapLandmarkSelectionMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshWrapLandmarkSelectionMechanic) \
	NO_API virtual ~UMeshWrapLandmarkSelectionMechanic();


#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshWrapLandmarkSelectionMechanic;

// ********** End Class UMeshWrapLandmarkSelectionMechanic *****************************************

// ********** Begin ScriptStruct FMeshWrapToolLandmark *********************************************
struct Z_Construct_UScriptStruct_FMeshWrapToolLandmark_Statics;
#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshWrapToolLandmark_Statics; \
	MESHRESIZINGEDITORTOOLS_API static class UScriptStruct* StaticStruct();


struct FMeshWrapToolLandmark;
// ********** End ScriptStruct FMeshWrapToolLandmark ***********************************************

// ********** Begin Class UMeshWrapLandmarkSelectionToolProperties *********************************
struct Z_Construct_UClass_UMeshWrapLandmarkSelectionToolProperties_Statics;
MESHRESIZINGEDITORTOOLS_API UClass* Z_Construct_UClass_UMeshWrapLandmarkSelectionToolProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshWrapLandmarkSelectionToolProperties(); \
	friend struct ::Z_Construct_UClass_UMeshWrapLandmarkSelectionToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHRESIZINGEDITORTOOLS_API UClass* ::Z_Construct_UClass_UMeshWrapLandmarkSelectionToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshWrapLandmarkSelectionToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshResizingEditorTools"), Z_Construct_UClass_UMeshWrapLandmarkSelectionToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UMeshWrapLandmarkSelectionToolProperties)


#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHRESIZINGEDITORTOOLS_API UMeshWrapLandmarkSelectionToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshWrapLandmarkSelectionToolProperties(UMeshWrapLandmarkSelectionToolProperties&&) = delete; \
	UMeshWrapLandmarkSelectionToolProperties(const UMeshWrapLandmarkSelectionToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHRESIZINGEDITORTOOLS_API, UMeshWrapLandmarkSelectionToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshWrapLandmarkSelectionToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshWrapLandmarkSelectionToolProperties) \
	MESHRESIZINGEDITORTOOLS_API virtual ~UMeshWrapLandmarkSelectionToolProperties();


#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_59_PROLOG
#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshWrapLandmarkSelectionToolProperties;

// ********** End Class UMeshWrapLandmarkSelectionToolProperties ***********************************

// ********** Begin Class UMeshWrapLandmarkSelectionTool *******************************************
struct Z_Construct_UClass_UMeshWrapLandmarkSelectionTool_Statics;
MESHRESIZINGEDITORTOOLS_API UClass* Z_Construct_UClass_UMeshWrapLandmarkSelectionTool_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshWrapLandmarkSelectionTool(); \
	friend struct ::Z_Construct_UClass_UMeshWrapLandmarkSelectionTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHRESIZINGEDITORTOOLS_API UClass* ::Z_Construct_UClass_UMeshWrapLandmarkSelectionTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshWrapLandmarkSelectionTool, USingleSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshResizingEditorTools"), Z_Construct_UClass_UMeshWrapLandmarkSelectionTool_NoRegister) \
	DECLARE_SERIALIZER(UMeshWrapLandmarkSelectionTool)


#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHRESIZINGEDITORTOOLS_API UMeshWrapLandmarkSelectionTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshWrapLandmarkSelectionTool(UMeshWrapLandmarkSelectionTool&&) = delete; \
	UMeshWrapLandmarkSelectionTool(const UMeshWrapLandmarkSelectionTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHRESIZINGEDITORTOOLS_API, UMeshWrapLandmarkSelectionTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshWrapLandmarkSelectionTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshWrapLandmarkSelectionTool) \
	MESHRESIZINGEDITORTOOLS_API virtual ~UMeshWrapLandmarkSelectionTool();


#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_81_PROLOG
#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshWrapLandmarkSelectionTool;

// ********** End Class UMeshWrapLandmarkSelectionTool *********************************************

// ********** Begin Class UMeshWrapLandmarkSelectionToolBuilder ************************************
struct Z_Construct_UClass_UMeshWrapLandmarkSelectionToolBuilder_Statics;
MESHRESIZINGEDITORTOOLS_API UClass* Z_Construct_UClass_UMeshWrapLandmarkSelectionToolBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshWrapLandmarkSelectionToolBuilder(); \
	friend struct ::Z_Construct_UClass_UMeshWrapLandmarkSelectionToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHRESIZINGEDITORTOOLS_API UClass* ::Z_Construct_UClass_UMeshWrapLandmarkSelectionToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshWrapLandmarkSelectionToolBuilder, UInteractiveToolWithToolTargetsBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshResizingEditorTools"), Z_Construct_UClass_UMeshWrapLandmarkSelectionToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UMeshWrapLandmarkSelectionToolBuilder) \
	virtual UObject* _getUObject() const override { return const_cast<UMeshWrapLandmarkSelectionToolBuilder*>(this); }


#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_140_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHRESIZINGEDITORTOOLS_API UMeshWrapLandmarkSelectionToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshWrapLandmarkSelectionToolBuilder(UMeshWrapLandmarkSelectionToolBuilder&&) = delete; \
	UMeshWrapLandmarkSelectionToolBuilder(const UMeshWrapLandmarkSelectionToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHRESIZINGEDITORTOOLS_API, UMeshWrapLandmarkSelectionToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshWrapLandmarkSelectionToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshWrapLandmarkSelectionToolBuilder) \
	MESHRESIZINGEDITORTOOLS_API virtual ~UMeshWrapLandmarkSelectionToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_137_PROLOG
#define FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_140_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h_140_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshWrapLandmarkSelectionToolBuilder;

// ********** End Class UMeshWrapLandmarkSelectionToolBuilder **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshResizing_Source_MeshResizingEditorTools_Private_MeshResizing_MeshWrapLandmarkSelectionTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
