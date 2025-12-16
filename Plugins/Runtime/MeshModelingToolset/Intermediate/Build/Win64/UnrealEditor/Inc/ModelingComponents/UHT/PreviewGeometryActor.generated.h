// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/PreviewGeometryActor.h"

#ifdef MODELINGCOMPONENTS_PreviewGeometryActor_generated_h
#error "PreviewGeometryActor.generated.h already included, missing '#pragma once' in PreviewGeometryActor.h"
#endif
#define MODELINGCOMPONENTS_PreviewGeometryActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APreviewGeometryActor;
class ULineSetComponent;
class UMaterialInterface;
class UPointSetComponent;
class UTriangleSetComponent;
class UWorld;

// ********** Begin Class APreviewGeometryActor ****************************************************
struct Z_Construct_UClass_APreviewGeometryActor_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewGeometryActor_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPreviewGeometryActor(); \
	friend struct ::Z_Construct_UClass_APreviewGeometryActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_APreviewGeometryActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APreviewGeometryActor, AInternalToolFrameworkActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_APreviewGeometryActor_NoRegister) \
	DECLARE_SERIALIZER(APreviewGeometryActor)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APreviewGeometryActor(APreviewGeometryActor&&) = delete; \
	APreviewGeometryActor(const APreviewGeometryActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, APreviewGeometryActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APreviewGeometryActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APreviewGeometryActor) \
	MODELINGCOMPONENTS_API virtual ~APreviewGeometryActor();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APreviewGeometryActor;

// ********** End Class APreviewGeometryActor ******************************************************

// ********** Begin Class UPreviewGeometry *********************************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAllPointSetsMaterial); \
	DECLARE_FUNCTION(execSetPointSetMaterial); \
	DECLARE_FUNCTION(execSetPointSetVisibility); \
	DECLARE_FUNCTION(execRemoveAllPointSets); \
	DECLARE_FUNCTION(execRemovePointSet); \
	DECLARE_FUNCTION(execFindPointSet); \
	DECLARE_FUNCTION(execAddPointSet); \
	DECLARE_FUNCTION(execSetAllLineSetsMaterial); \
	DECLARE_FUNCTION(execSetLineSetMaterial); \
	DECLARE_FUNCTION(execSetLineSetVisibility); \
	DECLARE_FUNCTION(execRemoveAllLineSets); \
	DECLARE_FUNCTION(execRemoveLineSet); \
	DECLARE_FUNCTION(execFindLineSet); \
	DECLARE_FUNCTION(execAddLineSet); \
	DECLARE_FUNCTION(execRemoveAllTriangleSets); \
	DECLARE_FUNCTION(execRemoveTriangleSet); \
	DECLARE_FUNCTION(execFindTriangleSet); \
	DECLARE_FUNCTION(execAddTriangleSet); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execCreateInWorld);


struct Z_Construct_UClass_UPreviewGeometry_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPreviewGeometry(); \
	friend struct ::Z_Construct_UClass_UPreviewGeometry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UPreviewGeometry_NoRegister(); \
public: \
	DECLARE_CLASS2(UPreviewGeometry, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UPreviewGeometry_NoRegister) \
	DECLARE_SERIALIZER(UPreviewGeometry)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UPreviewGeometry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPreviewGeometry(UPreviewGeometry&&) = delete; \
	UPreviewGeometry(const UPreviewGeometry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UPreviewGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewGeometry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreviewGeometry)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_39_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPreviewGeometry;

// ********** End Class UPreviewGeometry ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
