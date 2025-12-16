// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertySets/CreateMeshObjectTypeProperties.h"

#ifdef MODELINGCOMPONENTS_CreateMeshObjectTypeProperties_generated_h
#error "CreateMeshObjectTypeProperties.generated.h already included, missing '#pragma once' in CreateMeshObjectTypeProperties.h"
#endif
#define MODELINGCOMPONENTS_CreateMeshObjectTypeProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECreateObjectTypeHint : uint8;

// ********** Begin Class UCreateMeshObjectTypeProperties ******************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentCreateMeshType); \
	DECLARE_FUNCTION(execShouldShowPropertySet); \
	DECLARE_FUNCTION(execGetOutputTypeNamesFunc);


struct Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateMeshObjectTypeProperties(); \
	friend struct ::Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UCreateMeshObjectTypeProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister) \
	DECLARE_SERIALIZER(UCreateMeshObjectTypeProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UCreateMeshObjectTypeProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCreateMeshObjectTypeProperties(UCreateMeshObjectTypeProperties&&) = delete; \
	UCreateMeshObjectTypeProperties(const UCreateMeshObjectTypeProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UCreateMeshObjectTypeProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateMeshObjectTypeProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateMeshObjectTypeProperties) \
	MODELINGCOMPONENTS_API virtual ~UCreateMeshObjectTypeProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCreateMeshObjectTypeProperties;

// ********** End Class UCreateMeshObjectTypeProperties ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_CreateMeshObjectTypeProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
