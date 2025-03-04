// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithRuntime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATASMITHRUNTIME_DatasmithRuntime_generated_h
#error "DatasmithRuntime.generated.h already included, missing '#pragma once' in DatasmithRuntime.h"
#endif
#define DATASMITHRUNTIME_DatasmithRuntime_generated_h

#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics; \
	DATASMITHRUNTIME_API static class UScriptStruct* StaticStruct();


template<> DATASMITHRUNTIME_API UScriptStruct* StaticStruct<struct FDatasmithRuntimeImportOptions>();

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


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADatasmithRuntimeActor(); \
	friend struct Z_Construct_UClass_ADatasmithRuntimeActor_Statics; \
public: \
	DECLARE_CLASS(ADatasmithRuntimeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithRuntime"), NO_API) \
	DECLARE_SERIALIZER(ADatasmithRuntimeActor)


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_141_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADatasmithRuntimeActor(ADatasmithRuntimeActor&&); \
	ADatasmithRuntimeActor(const ADatasmithRuntimeActor&); \
public: \
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


template<> DATASMITHRUNTIME_API UClass* StaticClass<class ADatasmithRuntimeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h


#define FOREACH_ENUM_EBUILDHIERARCHYMETHOD(op) \
	op(EBuildHierarchyMethod::None) \
	op(EBuildHierarchyMethod::Simplified) \
	op(EBuildHierarchyMethod::Unfiltered) 

enum class EBuildHierarchyMethod : uint8;
template<> struct TIsUEnumClass<EBuildHierarchyMethod> { enum { Value = true }; };
template<> DATASMITHRUNTIME_API UEnum* StaticEnum<EBuildHierarchyMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
