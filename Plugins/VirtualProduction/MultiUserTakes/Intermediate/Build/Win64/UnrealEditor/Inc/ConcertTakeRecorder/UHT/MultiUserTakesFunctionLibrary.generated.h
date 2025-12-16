// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiUserTakesFunctionLibrary.h"

#ifdef CONCERTTAKERECORDER_MultiUserTakesFunctionLibrary_generated_h
#error "MultiUserTakesFunctionLibrary.generated.h already included, missing '#pragma once' in MultiUserTakesFunctionLibrary.h"
#endif
#define CONCERTTAKERECORDER_MultiUserTakesFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;

// ********** Begin Class UMultiUserTakesFunctionLibrary *******************************************
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Public_MultiUserTakesFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSynchronizeTakeRecorderTransactionsLocal); \
	DECLARE_FUNCTION(execGetSynchronizeTakeRecorderTransactions); \
	DECLARE_FUNCTION(execGetSynchronizeTakeRecorderTransactionsLocal); \
	DECLARE_FUNCTION(execSetRecordOnClient); \
	DECLARE_FUNCTION(execGetRecordOnClient); \
	DECLARE_FUNCTION(execSetRecordOnClientLocal); \
	DECLARE_FUNCTION(execGetRecordOnClientLocal);


struct Z_Construct_UClass_UMultiUserTakesFunctionLibrary_Statics;
CONCERTTAKERECORDER_API UClass* Z_Construct_UClass_UMultiUserTakesFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Public_MultiUserTakesFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiUserTakesFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMultiUserTakesFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTTAKERECORDER_API UClass* ::Z_Construct_UClass_UMultiUserTakesFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiUserTakesFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConcertTakeRecorder"), Z_Construct_UClass_UMultiUserTakesFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMultiUserTakesFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Public_MultiUserTakesFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserTakesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiUserTakesFunctionLibrary(UMultiUserTakesFunctionLibrary&&) = delete; \
	UMultiUserTakesFunctionLibrary(const UMultiUserTakesFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserTakesFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserTakesFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserTakesFunctionLibrary) \
	NO_API virtual ~UMultiUserTakesFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Public_MultiUserTakesFunctionLibrary_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Public_MultiUserTakesFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Public_MultiUserTakesFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Public_MultiUserTakesFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Public_MultiUserTakesFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiUserTakesFunctionLibrary;

// ********** End Class UMultiUserTakesFunctionLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Public_MultiUserTakesFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
