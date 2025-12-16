// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/TriangleSetComponent.h"

#ifdef MODELINGCOMPONENTS_TriangleSetComponent_generated_h
#error "TriangleSetComponent.generated.h already included, missing '#pragma once' in TriangleSetComponent.h"
#endif
#define MODELINGCOMPONENTS_TriangleSetComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRenderableTriangleVertex *****************************************
struct Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FRenderableTriangleVertex;
// ********** End ScriptStruct FRenderableTriangleVertex *******************************************

// ********** Begin ScriptStruct FRenderableTriangle ***********************************************
struct Z_Construct_UScriptStruct_FRenderableTriangle_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRenderableTriangle_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FRenderableTriangle;
// ********** End ScriptStruct FRenderableTriangle *************************************************

// ********** Begin Class UTriangleSetComponent ****************************************************
struct Z_Construct_UClass_UTriangleSetComponent_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTriangleSetComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriangleSetComponent(); \
	friend struct ::Z_Construct_UClass_UTriangleSetComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UTriangleSetComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTriangleSetComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UTriangleSetComponent_NoRegister) \
	DECLARE_SERIALIZER(UTriangleSetComponent)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_89_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTriangleSetComponent(UTriangleSetComponent&&) = delete; \
	UTriangleSetComponent(const UTriangleSetComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UTriangleSetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriangleSetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTriangleSetComponent) \
	MODELINGCOMPONENTS_API virtual ~UTriangleSetComponent();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_86_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTriangleSetComponent;

// ********** End Class UTriangleSetComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
