// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/DynamicMeshCommitter.h"

#ifdef MODELINGCOMPONENTS_DynamicMeshCommitter_generated_h
#error "DynamicMeshCommitter.generated.h already included, missing '#pragma once' in DynamicMeshCommitter.h"
#endif
#define MODELINGCOMPONENTS_DynamicMeshCommitter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDynamicMeshCommitter ************************************************
struct Z_Construct_UClass_UDynamicMeshCommitter_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshCommitter_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UDynamicMeshCommitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMeshCommitter(UDynamicMeshCommitter&&) = delete; \
	UDynamicMeshCommitter(const UDynamicMeshCommitter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UDynamicMeshCommitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMeshCommitter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMeshCommitter) \
	virtual ~UDynamicMeshCommitter() = default;


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDynamicMeshCommitter(); \
	friend struct ::Z_Construct_UClass_UDynamicMeshCommitter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UDynamicMeshCommitter_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMeshCommitter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UDynamicMeshCommitter_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMeshCommitter)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDynamicMeshCommitter() {} \
public: \
	typedef UDynamicMeshCommitter UClassType; \
	typedef IDynamicMeshCommitter ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMeshCommitter;

// ********** End Interface UDynamicMeshCommitter **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
