// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/ConstraintGenerators.h"

#ifdef CHAOSRIGIDASSETNODES_ConstraintGenerators_generated_h
#error "ConstraintGenerators.generated.h already included, missing '#pragma once' in ConstraintGenerators.h"
#endif
#define CHAOSRIGIDASSETNODES_ConstraintGenerators_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBaseConstraintGenerationSettings *********************************
struct Z_Construct_UScriptStruct_FBaseConstraintGenerationSettings_Statics;
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBaseConstraintGenerationSettings_Statics; \
	CHAOSRIGIDASSETNODES_API static class UScriptStruct* StaticStruct();


struct FBaseConstraintGenerationSettings;
// ********** End ScriptStruct FBaseConstraintGenerationSettings ***********************************

// ********** Begin Class UConstraintGenerator *****************************************************
struct Z_Construct_UClass_UConstraintGenerator_Statics;
CHAOSRIGIDASSETNODES_API UClass* Z_Construct_UClass_UConstraintGenerator_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstraintGenerator(); \
	friend struct ::Z_Construct_UClass_UConstraintGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSRIGIDASSETNODES_API UClass* ::Z_Construct_UClass_UConstraintGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UConstraintGenerator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ChaosRigidAssetNodes"), Z_Construct_UClass_UConstraintGenerator_NoRegister) \
	DECLARE_SERIALIZER(UConstraintGenerator)


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstraintGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConstraintGenerator(UConstraintGenerator&&) = delete; \
	UConstraintGenerator(const UConstraintGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstraintGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintGenerator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstraintGenerator) \
	NO_API virtual ~UConstraintGenerator();


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_32_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConstraintGenerator;

// ********** End Class UConstraintGenerator *******************************************************

// ********** Begin Class UConstraintGenerator_SwingTwist ******************************************
struct Z_Construct_UClass_UConstraintGenerator_SwingTwist_Statics;
CHAOSRIGIDASSETNODES_API UClass* Z_Construct_UClass_UConstraintGenerator_SwingTwist_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstraintGenerator_SwingTwist(); \
	friend struct ::Z_Construct_UClass_UConstraintGenerator_SwingTwist_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSRIGIDASSETNODES_API UClass* ::Z_Construct_UClass_UConstraintGenerator_SwingTwist_NoRegister(); \
public: \
	DECLARE_CLASS2(UConstraintGenerator_SwingTwist, UConstraintGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosRigidAssetNodes"), Z_Construct_UClass_UConstraintGenerator_SwingTwist_NoRegister) \
	DECLARE_SERIALIZER(UConstraintGenerator_SwingTwist)


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstraintGenerator_SwingTwist(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConstraintGenerator_SwingTwist(UConstraintGenerator_SwingTwist&&) = delete; \
	UConstraintGenerator_SwingTwist(const UConstraintGenerator_SwingTwist&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstraintGenerator_SwingTwist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintGenerator_SwingTwist); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstraintGenerator_SwingTwist) \
	NO_API virtual ~UConstraintGenerator_SwingTwist();


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConstraintGenerator_SwingTwist;

// ********** End Class UConstraintGenerator_SwingTwist ********************************************

// ********** Begin ScriptStruct FMakeSwingTwistConstraintGenerator ********************************
struct Z_Construct_UScriptStruct_FMakeSwingTwistConstraintGenerator_Statics;
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMakeSwingTwistConstraintGenerator_Statics; \
	CHAOSRIGIDASSETNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FRigidDataflowNode Super;


struct FMakeSwingTwistConstraintGenerator;
// ********** End ScriptStruct FMakeSwingTwistConstraintGenerator **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_ConstraintGenerators_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
