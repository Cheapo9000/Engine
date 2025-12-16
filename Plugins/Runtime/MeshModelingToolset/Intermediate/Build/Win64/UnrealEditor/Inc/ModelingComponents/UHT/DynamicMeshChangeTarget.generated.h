// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Changes/DynamicMeshChangeTarget.h"

#ifdef MODELINGCOMPONENTS_DynamicMeshChangeTarget_generated_h
#error "DynamicMeshChangeTarget.generated.h already included, missing '#pragma once' in DynamicMeshChangeTarget.h"
#endif
#define MODELINGCOMPONENTS_DynamicMeshChangeTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDynamicMeshReplacementChangeTarget **************************************
struct Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMeshReplacementChangeTarget(); \
	friend struct ::Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMeshReplacementChangeTarget, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMeshReplacementChangeTarget) \
	virtual UObject* _getUObject() const override { return const_cast<UDynamicMeshReplacementChangeTarget*>(this); }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMeshReplacementChangeTarget(UDynamicMeshReplacementChangeTarget&&) = delete; \
	UDynamicMeshReplacementChangeTarget(const UDynamicMeshReplacementChangeTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UDynamicMeshReplacementChangeTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMeshReplacementChangeTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicMeshReplacementChangeTarget)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMeshReplacementChangeTarget;

// ********** End Class UDynamicMeshReplacementChangeTarget ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
