// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolTargets/VolumeComponentToolTarget.h"

#ifdef MODELINGCOMPONENTSEDITORONLY_VolumeComponentToolTarget_generated_h
#error "VolumeComponentToolTarget.generated.h already included, missing '#pragma once' in VolumeComponentToolTarget.h"
#endif
#define MODELINGCOMPONENTSEDITORONLY_VolumeComponentToolTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVolumeComponentToolTarget ***********************************************
struct Z_Construct_UClass_UVolumeComponentToolTarget_Statics;
MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UVolumeComponentToolTarget_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVolumeComponentToolTarget(); \
	friend struct ::Z_Construct_UClass_UVolumeComponentToolTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTSEDITORONLY_API UClass* ::Z_Construct_UClass_UVolumeComponentToolTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UVolumeComponentToolTarget, UPrimitiveComponentToolTarget, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponentsEditorOnly"), Z_Construct_UClass_UVolumeComponentToolTarget_NoRegister) \
	DECLARE_SERIALIZER(UVolumeComponentToolTarget) \
	virtual UObject* _getUObject() const override { return const_cast<UVolumeComponentToolTarget*>(this); }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVolumeComponentToolTarget(UVolumeComponentToolTarget&&) = delete; \
	UVolumeComponentToolTarget(const UVolumeComponentToolTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTSEDITORONLY_API, UVolumeComponentToolTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeComponentToolTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVolumeComponentToolTarget) \
	MODELINGCOMPONENTSEDITORONLY_API virtual ~UVolumeComponentToolTarget();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_33_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVolumeComponentToolTarget;

// ********** End Class UVolumeComponentToolTarget *************************************************

// ********** Begin Class UVolumeComponentToolTargetFactory ****************************************
struct Z_Construct_UClass_UVolumeComponentToolTargetFactory_Statics;
MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UVolumeComponentToolTargetFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVolumeComponentToolTargetFactory(); \
	friend struct ::Z_Construct_UClass_UVolumeComponentToolTargetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTSEDITORONLY_API UClass* ::Z_Construct_UClass_UVolumeComponentToolTargetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UVolumeComponentToolTargetFactory, UToolTargetFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponentsEditorOnly"), Z_Construct_UClass_UVolumeComponentToolTargetFactory_NoRegister) \
	DECLARE_SERIALIZER(UVolumeComponentToolTargetFactory)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTSEDITORONLY_API UVolumeComponentToolTargetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVolumeComponentToolTargetFactory(UVolumeComponentToolTargetFactory&&) = delete; \
	UVolumeComponentToolTargetFactory(const UVolumeComponentToolTargetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTSEDITORONLY_API, UVolumeComponentToolTargetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeComponentToolTargetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeComponentToolTargetFactory) \
	MODELINGCOMPONENTSEDITORONLY_API virtual ~UVolumeComponentToolTargetFactory();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_89_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVolumeComponentToolTargetFactory;

// ********** End Class UVolumeComponentToolTargetFactory ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_ToolTargets_VolumeComponentToolTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
