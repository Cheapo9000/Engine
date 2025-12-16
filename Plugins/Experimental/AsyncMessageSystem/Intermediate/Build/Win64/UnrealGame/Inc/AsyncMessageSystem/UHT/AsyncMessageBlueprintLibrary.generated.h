// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncMessageBlueprintLibrary.h"

#ifdef ASYNCMESSAGESYSTEM_AsyncMessageBlueprintLibrary_generated_h
#error "AsyncMessageBlueprintLibrary.generated.h already included, missing '#pragma once' in AsyncMessageBlueprintLibrary.h"
#endif
#define ASYNCMESSAGESYSTEM_AsyncMessageBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAsyncMessageBindingEndpointInterface;
class UObject;
struct FAsyncMessage;
struct FAsyncMessageId;
struct FInstancedStruct;

// ********** Begin Class UAsyncMessageSystemBlueprintLibrary **************************************
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMessageBlueprintScriptCallstack); \
	DECLARE_FUNCTION(execGetMessageNativeQueueCallstack); \
	DECLARE_FUNCTION(execConv_AsyncMessageIdToString); \
	DECLARE_FUNCTION(execQueueAsyncMessageForBroadcast);


struct Z_Construct_UClass_UAsyncMessageSystemBlueprintLibrary_Statics;
ASYNCMESSAGESYSTEM_API UClass* Z_Construct_UClass_UAsyncMessageSystemBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncMessageSystemBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UAsyncMessageSystemBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCMESSAGESYSTEM_API UClass* ::Z_Construct_UClass_UAsyncMessageSystemBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncMessageSystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncMessageSystem"), Z_Construct_UClass_UAsyncMessageSystemBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAsyncMessageSystemBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncMessageSystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncMessageSystemBlueprintLibrary(UAsyncMessageSystemBlueprintLibrary&&) = delete; \
	UAsyncMessageSystemBlueprintLibrary(const UAsyncMessageSystemBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncMessageSystemBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncMessageSystemBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncMessageSystemBlueprintLibrary) \
	NO_API virtual ~UAsyncMessageSystemBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageBlueprintLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageBlueprintLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncMessageSystemBlueprintLibrary;

// ********** End Class UAsyncMessageSystemBlueprintLibrary ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
