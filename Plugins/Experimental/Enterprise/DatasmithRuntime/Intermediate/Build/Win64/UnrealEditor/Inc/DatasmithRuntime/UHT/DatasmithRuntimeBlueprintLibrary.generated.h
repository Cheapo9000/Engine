// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithRuntimeBlueprintLibrary.h"

#ifdef DATASMITHRUNTIME_DatasmithRuntimeBlueprintLibrary_generated_h
#error "DatasmithRuntimeBlueprintLibrary.generated.h already included, missing '#pragma once' in DatasmithRuntimeBlueprintLibrary.h"
#endif
#define DATASMITHRUNTIME_DatasmithRuntimeBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADatasmithRuntimeActor;
class UDirectLinkProxy;
struct FDatasmithRuntimeSourceInfo;

// ********** Begin ScriptStruct FDatasmithRuntimeSourceInfo ***************************************
struct Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics;
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDatasmithRuntimeSourceInfo;
// ********** End ScriptStruct FDatasmithRuntimeSourceInfo *****************************************

// ********** Begin Delegate FDatasmithRuntimeChangeEvent ******************************************
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_41_DELEGATE \
DATASMITHRUNTIME_API void FDatasmithRuntimeChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& DatasmithRuntimeChangeEvent);


// ********** End Delegate FDatasmithRuntimeChangeEvent ********************************************

// ********** Begin Class UDirectLinkProxy *********************************************************
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetListOfSources); \
	DECLARE_FUNCTION(execGetEndPointName);


struct Z_Construct_UClass_UDirectLinkProxy_Statics;
DATASMITHRUNTIME_API UClass* Z_Construct_UClass_UDirectLinkProxy_NoRegister();

#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectLinkProxy(); \
	friend struct ::Z_Construct_UClass_UDirectLinkProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHRUNTIME_API UClass* ::Z_Construct_UClass_UDirectLinkProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UDirectLinkProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithRuntime"), Z_Construct_UClass_UDirectLinkProxy_NoRegister) \
	DECLARE_SERIALIZER(UDirectLinkProxy)


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDirectLinkProxy(UDirectLinkProxy&&) = delete; \
	UDirectLinkProxy(const UDirectLinkProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectLinkProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectLinkProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDirectLinkProxy)


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDirectLinkProxy;

// ********** End Class UDirectLinkProxy ***********************************************************

// ********** Begin Class UDatasmithRuntimeLibrary *************************************************
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadFileFromExplorer); \
	DECLARE_FUNCTION(execGetDirectLinkProxy); \
	DECLARE_FUNCTION(execResetActor); \
	DECLARE_FUNCTION(execLoadFile);


struct Z_Construct_UClass_UDatasmithRuntimeLibrary_Statics;
DATASMITHRUNTIME_API UClass* Z_Construct_UClass_UDatasmithRuntimeLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithRuntimeLibrary(); \
	friend struct ::Z_Construct_UClass_UDatasmithRuntimeLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHRUNTIME_API UClass* ::Z_Construct_UClass_UDatasmithRuntimeLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithRuntimeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithRuntime"), Z_Construct_UClass_UDatasmithRuntimeLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithRuntimeLibrary)


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithRuntimeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithRuntimeLibrary(UDatasmithRuntimeLibrary&&) = delete; \
	UDatasmithRuntimeLibrary(const UDatasmithRuntimeLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithRuntimeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithRuntimeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithRuntimeLibrary) \
	NO_API virtual ~UDatasmithRuntimeLibrary();


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_67_PROLOG
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithRuntimeLibrary;

// ********** End Class UDatasmithRuntimeLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
