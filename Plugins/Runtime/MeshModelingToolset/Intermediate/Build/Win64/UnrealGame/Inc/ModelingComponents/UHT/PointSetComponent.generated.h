// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/PointSetComponent.h"

#ifdef MODELINGCOMPONENTS_PointSetComponent_generated_h
#error "PointSetComponent.generated.h already included, missing '#pragma once' in PointSetComponent.h"
#endif
#define MODELINGCOMPONENTS_PointSetComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FColor;

// ********** Begin Class UPointSetComponent *******************************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPoints); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execSetPointMaterial);


struct Z_Construct_UClass_UPointSetComponent_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPointSetComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointSetComponent(); \
	friend struct ::Z_Construct_UClass_UPointSetComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UPointSetComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPointSetComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UPointSetComponent_NoRegister) \
	DECLARE_SERIALIZER(UPointSetComponent)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPointSetComponent(UPointSetComponent&&) = delete; \
	UPointSetComponent(const UPointSetComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UPointSetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointSetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPointSetComponent) \
	MODELINGCOMPONENTS_API virtual ~UPointSetComponent();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_49_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPointSetComponent;

// ********** End Class UPointSetComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
