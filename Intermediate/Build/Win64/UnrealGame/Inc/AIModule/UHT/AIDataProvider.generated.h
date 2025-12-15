// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataProviders/AIDataProvider.h"

#ifdef AIMODULE_AIDataProvider_generated_h
#error "AIDataProvider.generated.h already included, missing '#pragma once' in AIDataProvider.h"
#endif
#define AIMODULE_AIDataProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAIDataProviderValue **********************************************
struct Z_Construct_UScriptStruct_FAIDataProviderValue_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIDataProviderValue_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FAIDataProviderValue;
// ********** End ScriptStruct FAIDataProviderValue ************************************************

// ********** Begin ScriptStruct FAIDataProviderTypedValue *****************************************
struct Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderValue Super;


struct FAIDataProviderTypedValue;
// ********** End ScriptStruct FAIDataProviderTypedValue *******************************************

// ********** Begin ScriptStruct FAIDataProviderStructValue ****************************************
struct Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderValue Super;


struct FAIDataProviderStructValue;
// ********** End ScriptStruct FAIDataProviderStructValue ******************************************

// ********** Begin ScriptStruct FAIDataProviderIntValue *******************************************
struct Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


struct FAIDataProviderIntValue;
// ********** End ScriptStruct FAIDataProviderIntValue *********************************************

// ********** Begin ScriptStruct FAIDataProviderFloatValue *****************************************
struct Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_131_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


struct FAIDataProviderFloatValue;
// ********** End ScriptStruct FAIDataProviderFloatValue *******************************************

// ********** Begin ScriptStruct FAIDataProviderBoolValue ******************************************
struct Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


struct FAIDataProviderBoolValue;
// ********** End ScriptStruct FAIDataProviderBoolValue ********************************************

// ********** Begin Class UAIDataProvider **********************************************************
struct Z_Construct_UClass_UAIDataProvider_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_INCLASS \
private: \
	static void StaticRegisterNativesUAIDataProvider(); \
	friend struct ::Z_Construct_UClass_UAIDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAIDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIDataProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAIDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UAIDataProvider)


#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIDataProvider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIDataProvider(UAIDataProvider&&) = delete; \
	UAIDataProvider(const UAIDataProvider&) = delete; \
	AIMODULE_API virtual ~UAIDataProvider();


#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_154_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIDataProvider;

// ********** End Class UAIDataProvider ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
