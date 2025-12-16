// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NUTActor.h"

#ifdef NETCODEUNITTEST_NUTActor_generated_h
#error "NUTActor.generated.h already included, missing '#pragma once' in NUTActor.h"
#endif
#define NETCODEUNITTEST_NUTActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANUTActor;

// ********** Begin Delegate FExecuteOnServer ******************************************************
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_45_DELEGATE \
NETCODEUNITTEST_API void FExecuteOnServer_DelegateWrapper(const FScriptDelegate& ExecuteOnServer, ANUTActor* InNUTActor);


// ********** End Delegate FExecuteOnServer ********************************************************

// ********** Begin Class ANUTActor ****************************************************************
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_51_RPC_WRAPPERS \
	virtual bool ServerExecute_Validate(const FString& ); \
	virtual void ServerExecute_Implementation(const FString& InDelegate); \
	NETCODEUNITTEST_API virtual void NetMulticastPing_Implementation(); \
	NETCODEUNITTEST_API virtual bool ServerClientPing_Validate(); \
	NETCODEUNITTEST_API virtual void ServerClientPing_Implementation(); \
	NETCODEUNITTEST_API virtual bool ServerReceiveText_Validate(FText const& ); \
	NETCODEUNITTEST_API virtual void ServerReceiveText_Implementation(FText const& InText); \
	virtual bool ServerClientStillAlive_Validate(); \
	virtual void ServerClientStillAlive_Implementation(); \
	virtual bool ServerAdmin_Validate(const FString& ); \
	virtual void ServerAdmin_Implementation(const FString& Command); \
	DECLARE_FUNCTION(execServerExecute); \
	DECLARE_FUNCTION(execNetMulticastPing); \
	DECLARE_FUNCTION(execServerClientPing); \
	DECLARE_FUNCTION(execServerReceiveText); \
	DECLARE_FUNCTION(execServerClientStillAlive); \
	DECLARE_FUNCTION(execWait); \
	DECLARE_FUNCTION(execNetFlush); \
	DECLARE_FUNCTION(execUnitTravel); \
	DECLARE_FUNCTION(execUnitSeamlessTravel); \
	DECLARE_FUNCTION(execServerAdmin); \
	DECLARE_FUNCTION(execAdmin);


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_51_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ANUTActor_Statics;
NETCODEUNITTEST_API UClass* Z_Construct_UClass_ANUTActor_NoRegister();

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_51_INCLASS \
private: \
	static void StaticRegisterNativesANUTActor(); \
	friend struct ::Z_Construct_UClass_ANUTActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCODEUNITTEST_API UClass* ::Z_Construct_UClass_ANUTActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ANUTActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), Z_Construct_UClass_ANUTActor_NoRegister) \
	DECLARE_SERIALIZER(ANUTActor)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANUTActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANUTActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANUTActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANUTActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANUTActor(ANUTActor&&) = delete; \
	ANUTActor(const ANUTActor&) = delete; \
	NO_API virtual ~ANUTActor();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_48_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_51_RPC_WRAPPERS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_51_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_51_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANUTActor;

// ********** End Class ANUTActor ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
