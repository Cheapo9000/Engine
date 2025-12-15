// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceControlHelpers.h"

#ifdef SOURCECONTROL_SourceControlHelpers_generated_h
#error "SourceControlHelpers.generated.h already included, missing '#pragma once' in SourceControlHelpers.h"
#endif
#define SOURCECONTROL_SourceControlHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceControlState;

// ********** Begin ScriptStruct FSourceControlState ***********************************************
struct Z_Construct_UScriptStruct_FSourceControlState_Statics;
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceControlState_Statics; \
	SOURCECONTROL_API static class UScriptStruct* StaticStruct();


struct FSourceControlState;
// ********** End ScriptStruct FSourceControlState *************************************************

// ********** Begin Delegate FQueryFileStateDelegate ***********************************************
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_557_DELEGATE \
static SOURCECONTROL_API void FQueryFileStateDelegate_DelegateWrapper(const FScriptDelegate& QueryFileStateDelegate, FSourceControlState FileStateOut);


// ********** End Delegate FQueryFileStateDelegate *************************************************

// ********** Begin Class USourceControlHelpers ****************************************************
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_249_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncQueryFileStates); \
	DECLARE_FUNCTION(execAsyncQueryFileState); \
	DECLARE_FUNCTION(execQueryFileStates); \
	DECLARE_FUNCTION(execQueryFileState); \
	DECLARE_FUNCTION(execCopyFile); \
	DECLARE_FUNCTION(execCheckInFiles); \
	DECLARE_FUNCTION(execCheckInFile); \
	DECLARE_FUNCTION(execRevertUnchangedFiles); \
	DECLARE_FUNCTION(execRevertUnchangedFile); \
	DECLARE_FUNCTION(execRevertFiles); \
	DECLARE_FUNCTION(execRevertFile); \
	DECLARE_FUNCTION(execMarkFilesForDelete); \
	DECLARE_FUNCTION(execMarkFileForDelete); \
	DECLARE_FUNCTION(execMarkFilesForAdd); \
	DECLARE_FUNCTION(execMarkFileForAdd); \
	DECLARE_FUNCTION(execCheckOutOrAddFiles); \
	DECLARE_FUNCTION(execCheckOutOrAddFile); \
	DECLARE_FUNCTION(execCheckOutFiles); \
	DECLARE_FUNCTION(execCheckOutFile); \
	DECLARE_FUNCTION(execSyncFiles); \
	DECLARE_FUNCTION(execSyncFile); \
	DECLARE_FUNCTION(execLastErrorMsg); \
	DECLARE_FUNCTION(execIsAvailable); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execCurrentProvider);


#if WITH_EDITOR
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_249_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRevertAndReloadPackages);
#else // WITH_EDITOR
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_249_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_USourceControlHelpers_Statics;
SOURCECONTROL_API UClass* Z_Construct_UClass_USourceControlHelpers_NoRegister();

#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_249_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceControlHelpers(); \
	friend struct ::Z_Construct_UClass_USourceControlHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCECONTROL_API UClass* ::Z_Construct_UClass_USourceControlHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceControlHelpers, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SourceControl"), Z_Construct_UClass_USourceControlHelpers_NoRegister) \
	DECLARE_SERIALIZER(USourceControlHelpers)


#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_249_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOURCECONTROL_API USourceControlHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceControlHelpers(USourceControlHelpers&&) = delete; \
	USourceControlHelpers(const USourceControlHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOURCECONTROL_API, USourceControlHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceControlHelpers); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceControlHelpers) \
	SOURCECONTROL_API virtual ~USourceControlHelpers();


#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_244_PROLOG
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_249_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_249_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_249_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_249_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_249_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceControlHelpers;

// ********** End Class USourceControlHelpers ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
