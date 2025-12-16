// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseTools/BaseVoxelTool.h"

#ifdef MODELINGCOMPONENTS_BaseVoxelTool_generated_h
#error "BaseVoxelTool.generated.h already included, missing '#pragma once' in BaseVoxelTool.h"
#endif
#define MODELINGCOMPONENTS_BaseVoxelTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseVoxelTool ***********************************************************
struct Z_Construct_UClass_UBaseVoxelTool_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseVoxelTool_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseVoxelTool(); \
	friend struct ::Z_Construct_UClass_UBaseVoxelTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UBaseVoxelTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseVoxelTool, UBaseCreateFromSelectedTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UBaseVoxelTool_NoRegister) \
	DECLARE_SERIALIZER(UBaseVoxelTool)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UBaseVoxelTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseVoxelTool(UBaseVoxelTool&&) = delete; \
	UBaseVoxelTool(const UBaseVoxelTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UBaseVoxelTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseVoxelTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseVoxelTool) \
	MODELINGCOMPONENTS_API virtual ~UBaseVoxelTool();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseVoxelTool;

// ********** End Class UBaseVoxelTool *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
