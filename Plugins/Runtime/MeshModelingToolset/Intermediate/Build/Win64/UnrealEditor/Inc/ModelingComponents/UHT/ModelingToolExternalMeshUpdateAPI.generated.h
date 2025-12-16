// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelingToolExternalMeshUpdateAPI.h"

#ifdef MODELINGCOMPONENTS_ModelingToolExternalMeshUpdateAPI_generated_h
#error "ModelingToolExternalMeshUpdateAPI.generated.h already included, missing '#pragma once' in ModelingToolExternalMeshUpdateAPI.h"
#endif
#define MODELINGCOMPONENTS_ModelingToolExternalMeshUpdateAPI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UModelingToolExternalDynamicMeshUpdateAPI ****************************
struct Z_Construct_UClass_UModelingToolExternalDynamicMeshUpdateAPI_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingToolExternalDynamicMeshUpdateAPI_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingToolExternalMeshUpdateAPI_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UModelingToolExternalDynamicMeshUpdateAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModelingToolExternalDynamicMeshUpdateAPI(UModelingToolExternalDynamicMeshUpdateAPI&&) = delete; \
	UModelingToolExternalDynamicMeshUpdateAPI(const UModelingToolExternalDynamicMeshUpdateAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UModelingToolExternalDynamicMeshUpdateAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelingToolExternalDynamicMeshUpdateAPI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelingToolExternalDynamicMeshUpdateAPI) \
	virtual ~UModelingToolExternalDynamicMeshUpdateAPI() = default;


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingToolExternalMeshUpdateAPI_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUModelingToolExternalDynamicMeshUpdateAPI(); \
	friend struct ::Z_Construct_UClass_UModelingToolExternalDynamicMeshUpdateAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UModelingToolExternalDynamicMeshUpdateAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UModelingToolExternalDynamicMeshUpdateAPI, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UModelingToolExternalDynamicMeshUpdateAPI_NoRegister) \
	DECLARE_SERIALIZER(UModelingToolExternalDynamicMeshUpdateAPI)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingToolExternalMeshUpdateAPI_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingToolExternalMeshUpdateAPI_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingToolExternalMeshUpdateAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingToolExternalMeshUpdateAPI_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IModelingToolExternalDynamicMeshUpdateAPI() {} \
public: \
	typedef UModelingToolExternalDynamicMeshUpdateAPI UClassType; \
	typedef IModelingToolExternalDynamicMeshUpdateAPI ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingToolExternalMeshUpdateAPI_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingToolExternalMeshUpdateAPI_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingToolExternalMeshUpdateAPI_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModelingToolExternalDynamicMeshUpdateAPI;

// ********** End Interface UModelingToolExternalDynamicMeshUpdateAPI ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingToolExternalMeshUpdateAPI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
