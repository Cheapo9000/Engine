// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Async/ChangeClientAsyncAction.h"

#ifdef MULTIUSERCLIENTLIBRARY_ChangeClientAsyncAction_generated_h
#error "ChangeClientAsyncAction.generated.h already included, missing '#pragma once' in ChangeClientAsyncAction.h"
#endif
#define MULTIUSERCLIENTLIBRARY_ChangeClientAsyncAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChangeClientAsyncAction;
struct FGuid;
struct FMultiUserChangeClientReplicationRequest;
struct FMultiUserChangeClientReplicationResult;

// ********** Begin Delegate FOnChangeOperationCompleted *******************************************
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_19_DELEGATE \
static void FOnChangeOperationCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnChangeOperationCompleted, FMultiUserChangeClientReplicationResult const& Response);


// ********** End Delegate FOnChangeOperationCompleted *********************************************

// ********** Begin Class UChangeClientAsyncAction *************************************************
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeClient);


struct Z_Construct_UClass_UChangeClientAsyncAction_Statics;
MULTIUSERCLIENTLIBRARY_API UClass* Z_Construct_UClass_UChangeClientAsyncAction_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChangeClientAsyncAction(); \
	friend struct ::Z_Construct_UClass_UChangeClientAsyncAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIUSERCLIENTLIBRARY_API UClass* ::Z_Construct_UClass_UChangeClientAsyncAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UChangeClientAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), Z_Construct_UClass_UChangeClientAsyncAction_NoRegister) \
	DECLARE_SERIALIZER(UChangeClientAsyncAction)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChangeClientAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChangeClientAsyncAction(UChangeClientAsyncAction&&) = delete; \
	UChangeClientAsyncAction(const UChangeClientAsyncAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChangeClientAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChangeClientAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChangeClientAsyncAction) \
	NO_API virtual ~UChangeClientAsyncAction();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_13_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChangeClientAsyncAction;

// ********** End Class UChangeClientAsyncAction ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
