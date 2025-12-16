// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithRuntime.h"

#ifdef DATASMITHRUNTIME_DatasmithRuntime_generated_h
#error "DatasmithRuntime.generated.h already included, missing '#pragma once' in DatasmithRuntime.h"
#endif
#define DATASMITHRUNTIME_DatasmithRuntime_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDatasmithRuntimeImportOptions ************************************
struct Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics;
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics; \
	DATASMITHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDatasmithRuntimeImportOptions;
// ********** End ScriptStruct FDatasmithRuntimeImportOptions **************************************

// ********** Begin Class ADatasmithRuntimeActor ***************************************************
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadFile); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execIsReceiving); \
	DECLARE_FUNCTION(execGetSourceIndex); \
	DECLARE_FUNCTION(execCloseConnection); \
	DECLARE_FUNCTION(execOpenConnectionWithIndex); \
	DECLARE_FUNCTION(execGetSourceName); \
	DECLARE_FUNCTION(execGetDestinationName); \
	DECLARE_FUNCTION(execIsConnected);


struct Z_Construct_UClass_ADatasmithRuntimeActor_Statics;
DATASMITHRUNTIME_API UClass* Z_Construct_UClass_ADatasmithRuntimeActor_NoRegister();

#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADatasmithRuntimeActor(); \
	friend struct ::Z_Construct_UClass_ADatasmithRuntimeActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHRUNTIME_API UClass* ::Z_Construct_UClass_ADatasmithRuntimeActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADatasmithRuntimeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithRuntime"), Z_Construct_UClass_ADatasmithRuntimeActor_NoRegister) \
	DECLARE_SERIALIZER(ADatasmithRuntimeActor)


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_141_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADatasmithRuntimeActor(ADatasmithRuntimeActor&&) = delete; \
	ADatasmithRuntimeActor(const ADatasmithRuntimeActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADatasmithRuntimeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADatasmithRuntimeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADatasmithRuntimeActor) \
	NO_API virtual ~ADatasmithRuntimeActor();


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_136_PROLOG
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_141_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_141_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADatasmithRuntimeActor;

// ********** End Class ADatasmithRuntimeActor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h

// ********** Begin Enum EBuildHierarchyMethod *****************************************************
#define FOREACH_ENUM_EBUILDHIERARCHYMETHOD(op) \
	op(EBuildHierarchyMethod::None) \
	op(EBuildHierarchyMethod::Simplified) \
	op(EBuildHierarchyMethod::Unfiltered) 

enum class EBuildHierarchyMethod : uint8;
template<> struct TIsUEnumClass<EBuildHierarchyMethod> { enum { Value = true }; };
template<> DATASMITHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuildHierarchyMethod>();
// ********** End Enum EBuildHierarchyMethod *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
