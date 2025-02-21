// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Async/ChangeClientAsyncAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChangeClientAsyncAction;
struct FGuid;
struct FMultiUserChangeClientReplicationRequest;
struct FMultiUserChangeClientReplicationResult;
#ifdef MULTIUSERCLIENTLIBRARY_ChangeClientAsyncAction_generated_h
#error "ChangeClientAsyncAction.generated.h already included, missing '#pragma once' in ChangeClientAsyncAction.h"
#endif
#define MULTIUSERCLIENTLIBRARY_ChangeClientAsyncAction_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_19_DELEGATE \
static void FOnChangeOperationCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnChangeOperationCompleted, FMultiUserChangeClientReplicationResult const& Response);


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeClient);


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChangeClientAsyncAction(); \
	friend struct Z_Construct_UClass_UChangeClientAsyncAction_Statics; \
public: \
	DECLARE_CLASS(UChangeClientAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), NO_API) \
	DECLARE_SERIALIZER(UChangeClientAsyncAction)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChangeClientAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChangeClientAsyncAction(UChangeClientAsyncAction&&); \
	UChangeClientAsyncAction(const UChangeClientAsyncAction&); \
public: \
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


template<> MULTIUSERCLIENTLIBRARY_API UClass* StaticClass<class UChangeClientAsyncAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_Async_ChangeClientAsyncAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
