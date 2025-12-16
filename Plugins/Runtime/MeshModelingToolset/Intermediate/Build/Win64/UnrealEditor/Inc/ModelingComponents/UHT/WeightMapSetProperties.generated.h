// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertySets/WeightMapSetProperties.h"

#ifdef MODELINGCOMPONENTS_WeightMapSetProperties_generated_h
#error "WeightMapSetProperties.generated.h already included, missing '#pragma once' in WeightMapSetProperties.h"
#endif
#define MODELINGCOMPONENTS_WeightMapSetProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWeightMapSetProperties **************************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWeightMapsFunc);


struct Z_Construct_UClass_UWeightMapSetProperties_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UWeightMapSetProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeightMapSetProperties(); \
	friend struct ::Z_Construct_UClass_UWeightMapSetProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UWeightMapSetProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeightMapSetProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UWeightMapSetProperties_NoRegister) \
	DECLARE_SERIALIZER(UWeightMapSetProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UWeightMapSetProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeightMapSetProperties(UWeightMapSetProperties&&) = delete; \
	UWeightMapSetProperties(const UWeightMapSetProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UWeightMapSetProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeightMapSetProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeightMapSetProperties) \
	MODELINGCOMPONENTS_API virtual ~UWeightMapSetProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeightMapSetProperties;

// ********** End Class UWeightMapSetProperties ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
