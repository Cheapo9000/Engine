// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/DynamicMeshProvider.h"

#ifdef MODELINGCOMPONENTS_DynamicMeshProvider_generated_h
#error "DynamicMeshProvider.generated.h already included, missing '#pragma once' in DynamicMeshProvider.h"
#endif
#define MODELINGCOMPONENTS_DynamicMeshProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDynamicMeshProvider *************************************************
struct Z_Construct_UClass_UDynamicMeshProvider_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshProvider_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UDynamicMeshProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMeshProvider(UDynamicMeshProvider&&) = delete; \
	UDynamicMeshProvider(const UDynamicMeshProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UDynamicMeshProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMeshProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMeshProvider) \
	virtual ~UDynamicMeshProvider() = default;


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDynamicMeshProvider(); \
	friend struct ::Z_Construct_UClass_UDynamicMeshProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UDynamicMeshProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMeshProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UDynamicMeshProvider_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMeshProvider)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDynamicMeshProvider() {} \
public: \
	typedef UDynamicMeshProvider UClassType; \
	typedef IDynamicMeshProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMeshProvider;

// ********** End Interface UDynamicMeshProvider ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
