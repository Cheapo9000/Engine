// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshSculptLayersManagerAPI.h"

#ifdef MODELINGCOMPONENTS_MeshSculptLayersManagerAPI_generated_h
#error "MeshSculptLayersManagerAPI.generated.h already included, missing '#pragma once' in MeshSculptLayersManagerAPI.h"
#endif
#define MODELINGCOMPONENTS_MeshSculptLayersManagerAPI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMeshSculptLayersManager *********************************************
struct Z_Construct_UClass_UMeshSculptLayersManager_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSculptLayersManager_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshSculptLayersManagerAPI_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UMeshSculptLayersManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshSculptLayersManager(UMeshSculptLayersManager&&) = delete; \
	UMeshSculptLayersManager(const UMeshSculptLayersManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UMeshSculptLayersManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSculptLayersManager); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshSculptLayersManager) \
	virtual ~UMeshSculptLayersManager() = default;


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshSculptLayersManagerAPI_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeshSculptLayersManager(); \
	friend struct ::Z_Construct_UClass_UMeshSculptLayersManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UMeshSculptLayersManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshSculptLayersManager, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UMeshSculptLayersManager_NoRegister) \
	DECLARE_SERIALIZER(UMeshSculptLayersManager)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshSculptLayersManagerAPI_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshSculptLayersManagerAPI_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshSculptLayersManagerAPI_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshSculptLayersManagerAPI_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeshSculptLayersManager() {} \
public: \
	typedef UMeshSculptLayersManager UClassType; \
	typedef IMeshSculptLayersManager ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshSculptLayersManagerAPI_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshSculptLayersManagerAPI_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshSculptLayersManagerAPI_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshSculptLayersManager;

// ********** End Interface UMeshSculptLayersManager ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshSculptLayersManagerAPI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
