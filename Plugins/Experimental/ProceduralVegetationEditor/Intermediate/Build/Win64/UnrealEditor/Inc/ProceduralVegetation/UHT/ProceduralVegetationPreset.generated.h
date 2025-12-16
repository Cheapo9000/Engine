// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralVegetationPreset.h"

#ifdef PROCEDURALVEGETATION_ProceduralVegetationPreset_generated_h
#error "ProceduralVegetationPreset.generated.h already included, missing '#pragma once' in ProceduralVegetationPreset.h"
#endif
#define PROCEDURALVEGETATION_ProceduralVegetationPreset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPVPresetVariationInfo ********************************************
struct Z_Construct_UScriptStruct_FPVPresetVariationInfo_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVPresetVariationInfo_Statics; \
	PROCEDURALVEGETATION_API static class UScriptStruct* StaticStruct();


struct FPVPresetVariationInfo;
// ********** End ScriptStruct FPVPresetVariationInfo **********************************************

// ********** Begin Class UProceduralVegetationPreset **********************************************
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateDataAsset);


struct Z_Construct_UClass_UProceduralVegetationPreset_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UProceduralVegetationPreset_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralVegetationPreset(); \
	friend struct ::Z_Construct_UClass_UProceduralVegetationPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UProceduralVegetationPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(UProceduralVegetationPreset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UProceduralVegetationPreset_NoRegister) \
	DECLARE_SERIALIZER(UProceduralVegetationPreset)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProceduralVegetationPreset(UProceduralVegetationPreset&&) = delete; \
	UProceduralVegetationPreset(const UProceduralVegetationPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralVegetationPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralVegetationPreset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProceduralVegetationPreset) \
	NO_API virtual ~UProceduralVegetationPreset();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProceduralVegetationPreset;

// ********** End Class UProceduralVegetationPreset ************************************************

// ********** Begin ScriptStruct FPlantProfile *****************************************************
struct Z_Construct_UScriptStruct_FPlantProfile_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlantProfile_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPlantProfile;
// ********** End ScriptStruct FPlantProfile *******************************************************

// ********** Begin Class UPlantProfileAsset *******************************************************
struct Z_Construct_UClass_UPlantProfileAsset_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPlantProfileAsset_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlantProfileAsset(); \
	friend struct ::Z_Construct_UClass_UPlantProfileAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPlantProfileAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlantProfileAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPlantProfileAsset_NoRegister) \
	DECLARE_SERIALIZER(UPlantProfileAsset)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlantProfileAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlantProfileAsset(UPlantProfileAsset&&) = delete; \
	UPlantProfileAsset(const UPlantProfileAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlantProfileAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlantProfileAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlantProfileAsset) \
	NO_API virtual ~UPlantProfileAsset();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_94_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlantProfileAsset;

// ********** End Class UPlantProfileAsset *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_ProceduralVegetationPreset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
