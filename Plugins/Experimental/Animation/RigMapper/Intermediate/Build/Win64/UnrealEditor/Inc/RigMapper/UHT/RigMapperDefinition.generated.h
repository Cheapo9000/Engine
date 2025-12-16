// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigMapperDefinition.h"

#ifdef RIGMAPPER_RigMapperDefinition_generated_h
#error "RigMapperDefinition.generated.h already included, missing '#pragma once' in RigMapperDefinition.h"
#endif
#define RIGMAPPER_RigMapperDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFilePath;

// ********** Begin ScriptStruct FRigMapperFeature *************************************************
struct Z_Construct_UScriptStruct_FRigMapperFeature_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigMapperFeature_Statics; \
	RIGMAPPER_API static class UScriptStruct* StaticStruct();


struct FRigMapperFeature;
// ********** End ScriptStruct FRigMapperFeature ***************************************************

// ********** Begin ScriptStruct FRigMapperMultiplyFeature *****************************************
struct Z_Construct_UScriptStruct_FRigMapperMultiplyFeature_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigMapperMultiplyFeature_Statics; \
	RIGMAPPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigMapperFeature Super;


struct FRigMapperMultiplyFeature;
// ********** End ScriptStruct FRigMapperMultiplyFeature *******************************************

// ********** Begin ScriptStruct FRigMapperFeatureRange ********************************************
struct Z_Construct_UScriptStruct_FRigMapperFeatureRange_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigMapperFeatureRange_Statics; \
	RIGMAPPER_API static class UScriptStruct* StaticStruct();


struct FRigMapperFeatureRange;
// ********** End ScriptStruct FRigMapperFeatureRange **********************************************

// ********** Begin ScriptStruct FRigMapperWsFeature ***********************************************
struct Z_Construct_UScriptStruct_FRigMapperWsFeature_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigMapperWsFeature_Statics; \
	RIGMAPPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigMapperFeature Super;


struct FRigMapperWsFeature;
// ********** End ScriptStruct FRigMapperWsFeature *************************************************

// ********** Begin ScriptStruct FRigMapperSdkKey **************************************************
struct Z_Construct_UScriptStruct_FRigMapperSdkKey_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_171_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigMapperSdkKey_Statics; \
	RIGMAPPER_API static class UScriptStruct* StaticStruct();


struct FRigMapperSdkKey;
// ********** End ScriptStruct FRigMapperSdkKey ****************************************************

// ********** Begin ScriptStruct FRigMapperSdkFeature **********************************************
struct Z_Construct_UScriptStruct_FRigMapperSdkFeature_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_189_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigMapperSdkFeature_Statics; \
	RIGMAPPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigMapperFeature Super;


struct FRigMapperSdkFeature;
// ********** End ScriptStruct FRigMapperSdkFeature ************************************************

// ********** Begin ScriptStruct FRigMapperFeatureDefinitions **************************************
struct Z_Construct_UScriptStruct_FRigMapperFeatureDefinitions_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_224_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigMapperFeatureDefinitions_Statics; \
	RIGMAPPER_API static class UScriptStruct* StaticStruct();


struct FRigMapperFeatureDefinitions;
// ********** End ScriptStruct FRigMapperFeatureDefinitions ****************************************

// ********** Begin Class URigMapperDefinition *****************************************************
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_258_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWasDefinitionValidated); \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execIsDefinitionValid); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execExportAsJsonFile); \
	DECLARE_FUNCTION(execExportAsJsonString); \
	DECLARE_FUNCTION(execLoadFromJsonString); \
	DECLARE_FUNCTION(execLoadFromJsonFile);


struct Z_Construct_UClass_URigMapperDefinition_Statics;
RIGMAPPER_API UClass* Z_Construct_UClass_URigMapperDefinition_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_258_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigMapperDefinition(); \
	friend struct ::Z_Construct_UClass_URigMapperDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGMAPPER_API UClass* ::Z_Construct_UClass_URigMapperDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(URigMapperDefinition, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigMapper"), Z_Construct_UClass_URigMapperDefinition_NoRegister) \
	DECLARE_SERIALIZER(URigMapperDefinition)


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_258_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGMAPPER_API URigMapperDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigMapperDefinition(URigMapperDefinition&&) = delete; \
	URigMapperDefinition(const URigMapperDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGMAPPER_API, URigMapperDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigMapperDefinition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigMapperDefinition) \
	RIGMAPPER_API virtual ~URigMapperDefinition();


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_255_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_258_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_258_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_258_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_258_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigMapperDefinition;

// ********** End Class URigMapperDefinition *******************************************************

// ********** Begin Class URigMapperLinkedDefinitions **********************************************
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_331_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAreLinkedDefinitionsValid); \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execBakeDefinitions);


struct Z_Construct_UClass_URigMapperLinkedDefinitions_Statics;
RIGMAPPER_API UClass* Z_Construct_UClass_URigMapperLinkedDefinitions_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_331_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigMapperLinkedDefinitions(); \
	friend struct ::Z_Construct_UClass_URigMapperLinkedDefinitions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGMAPPER_API UClass* ::Z_Construct_UClass_URigMapperLinkedDefinitions_NoRegister(); \
public: \
	DECLARE_CLASS2(URigMapperLinkedDefinitions, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigMapper"), Z_Construct_UClass_URigMapperLinkedDefinitions_NoRegister) \
	DECLARE_SERIALIZER(URigMapperLinkedDefinitions)


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_331_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGMAPPER_API URigMapperLinkedDefinitions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigMapperLinkedDefinitions(URigMapperLinkedDefinitions&&) = delete; \
	URigMapperLinkedDefinitions(const URigMapperLinkedDefinitions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGMAPPER_API, URigMapperLinkedDefinitions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigMapperLinkedDefinitions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigMapperLinkedDefinitions) \
	RIGMAPPER_API virtual ~URigMapperLinkedDefinitions();


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_328_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_331_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_331_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_331_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_331_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigMapperLinkedDefinitions;

// ********** End Class URigMapperLinkedDefinitions ************************************************

// ********** Begin Class URigMapperDefinitionUserData *********************************************
struct Z_Construct_UClass_URigMapperDefinitionUserData_Statics;
RIGMAPPER_API UClass* Z_Construct_UClass_URigMapperDefinitionUserData_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_372_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigMapperDefinitionUserData(); \
	friend struct ::Z_Construct_UClass_URigMapperDefinitionUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGMAPPER_API UClass* ::Z_Construct_UClass_URigMapperDefinitionUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(URigMapperDefinitionUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigMapper"), Z_Construct_UClass_URigMapperDefinitionUserData_NoRegister) \
	DECLARE_SERIALIZER(URigMapperDefinitionUserData)


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_372_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGMAPPER_API URigMapperDefinitionUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigMapperDefinitionUserData(URigMapperDefinitionUserData&&) = delete; \
	URigMapperDefinitionUserData(const URigMapperDefinitionUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGMAPPER_API, URigMapperDefinitionUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigMapperDefinitionUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigMapperDefinitionUserData) \
	RIGMAPPER_API virtual ~URigMapperDefinitionUserData();


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_369_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_372_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_372_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h_372_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigMapperDefinitionUserData;

// ********** End Class URigMapperDefinitionUserData ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapper_Public_RigMapperDefinition_h

// ********** Begin Enum ERigMapperFeatureType *****************************************************
#define FOREACH_ENUM_ERIGMAPPERFEATURETYPE(op) \
	op(ERigMapperFeatureType::Input) \
	op(ERigMapperFeatureType::WeightedSum) \
	op(ERigMapperFeatureType::SDK) \
	op(ERigMapperFeatureType::Multiply) 

enum class ERigMapperFeatureType : uint8;
template<> struct TIsUEnumClass<ERigMapperFeatureType> { enum { Value = true }; };
template<> RIGMAPPER_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigMapperFeatureType>();
// ********** End Enum ERigMapperFeatureType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
