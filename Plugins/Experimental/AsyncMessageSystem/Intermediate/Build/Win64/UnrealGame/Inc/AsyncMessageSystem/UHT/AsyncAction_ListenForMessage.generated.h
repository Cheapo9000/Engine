// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncAction_ListenForMessage.h"

#ifdef ASYNCMESSAGESYSTEM_AsyncAction_ListenForMessage_generated_h
#error "AsyncAction_ListenForMessage.generated.h already included, missing '#pragma once' in AsyncAction_ListenForMessage.h"
#endif
#define ASYNCMESSAGESYSTEM_AsyncAction_ListenForMessage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAsyncMessageBindingEndpointInterface;
class UAsyncAction_ListenForAsyncMessage;
class UObject;
struct FAsyncMessage;
struct FAsyncMessageId;

// ********** Begin Delegate FAsyncMessageReceivedDelegate *****************************************
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncAction_ListenForMessage_h_18_DELEGATE \
ASYNCMESSAGESYSTEM_API void FAsyncMessageReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncMessageReceivedDelegate, FAsyncMessage const& Message);


// ********** End Delegate FAsyncMessageReceivedDelegate *******************************************

// ********** Begin Class UAsyncAction_ListenForAsyncMessage ***************************************
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncAction_ListenForMessage_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopListeningForAsyncMessage); \
	DECLARE_FUNCTION(execStartListeningForAsyncMessage);


struct Z_Construct_UClass_UAsyncAction_ListenForAsyncMessage_Statics;
ASYNCMESSAGESYSTEM_API UClass* Z_Construct_UClass_UAsyncAction_ListenForAsyncMessage_NoRegister();

#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncAction_ListenForMessage_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_ListenForAsyncMessage(); \
	friend struct ::Z_Construct_UClass_UAsyncAction_ListenForAsyncMessage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCMESSAGESYSTEM_API UClass* ::Z_Construct_UClass_UAsyncAction_ListenForAsyncMessage_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAction_ListenForAsyncMessage, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncMessageSystem"), Z_Construct_UClass_UAsyncAction_ListenForAsyncMessage_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAction_ListenForAsyncMessage)


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncAction_ListenForMessage_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_ListenForAsyncMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_ListenForAsyncMessage(UAsyncAction_ListenForAsyncMessage&&) = delete; \
	UAsyncAction_ListenForAsyncMessage(const UAsyncAction_ListenForAsyncMessage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_ListenForAsyncMessage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_ListenForAsyncMessage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_ListenForAsyncMessage) \
	NO_API virtual ~UAsyncAction_ListenForAsyncMessage();


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncAction_ListenForMessage_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncAction_ListenForMessage_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncAction_ListenForMessage_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncAction_ListenForMessage_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncAction_ListenForMessage_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_ListenForAsyncMessage;

// ********** End Class UAsyncAction_ListenForAsyncMessage *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncAction_ListenForMessage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
