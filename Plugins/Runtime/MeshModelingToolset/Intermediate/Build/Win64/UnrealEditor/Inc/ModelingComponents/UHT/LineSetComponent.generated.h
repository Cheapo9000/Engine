// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/LineSetComponent.h"

#ifdef MODELINGCOMPONENTS_LineSetComponent_generated_h
#error "LineSetComponent.generated.h already included, missing '#pragma once' in LineSetComponent.h"
#endif
#define MODELINGCOMPONENTS_LineSetComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FColor;

// ********** Begin Class ULineSetComponent ********************************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddLines); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execSetLineMaterial);


struct Z_Construct_UClass_ULineSetComponent_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULineSetComponent(); \
	friend struct ::Z_Construct_UClass_ULineSetComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_ULineSetComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULineSetComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_ULineSetComponent_NoRegister) \
	DECLARE_SERIALIZER(ULineSetComponent)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULineSetComponent(ULineSetComponent&&) = delete; \
	ULineSetComponent(const ULineSetComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, ULineSetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULineSetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULineSetComponent) \
	MODELINGCOMPONENTS_API virtual ~ULineSetComponent();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_41_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULineSetComponent;

// ********** End Class ULineSetComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
