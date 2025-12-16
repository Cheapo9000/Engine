// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Selection/GeometrySelectionManager.h"

#ifdef MODELINGCOMPONENTS_GeometrySelectionManager_generated_h
#error "GeometrySelectionManager.generated.h already included, missing '#pragma once' in GeometrySelectionManager.h"
#endif
#define MODELINGCOMPONENTS_GeometrySelectionManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshElementSelectionParams ***************************************
struct Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FMeshElementSelectionParams;
// ********** End ScriptStruct FMeshElementSelectionParams *****************************************

// ********** Begin Class UGeometrySelectionManager ************************************************
struct Z_Construct_UClass_UGeometrySelectionManager_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionManager_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometrySelectionManager(); \
	friend struct ::Z_Construct_UClass_UGeometrySelectionManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UGeometrySelectionManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometrySelectionManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UGeometrySelectionManager_NoRegister) \
	DECLARE_SERIALIZER(UGeometrySelectionManager)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UGeometrySelectionManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometrySelectionManager(UGeometrySelectionManager&&) = delete; \
	UGeometrySelectionManager(const UGeometrySelectionManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UGeometrySelectionManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometrySelectionManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometrySelectionManager) \
	MODELINGCOMPONENTS_API virtual ~UGeometrySelectionManager();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_79_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometrySelectionManager;

// ********** End Class UGeometrySelectionManager **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
