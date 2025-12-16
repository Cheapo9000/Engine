// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UpdateManager.h"

#ifdef HOTFIX_UpdateManager_generated_h
#error "UpdateManager.generated.h already included, missing '#pragma once' in UpdateManager.h"
#endif
#define HOTFIX_UpdateManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FUpdateContextDefinition ******************************************
struct Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics; \
	HOTFIX_API static class UScriptStruct* StaticStruct();


struct FUpdateContextDefinition;
// ********** End ScriptStruct FUpdateContextDefinition ********************************************

// ********** Begin Class UUpdateManager ***********************************************************
struct Z_Construct_UClass_UUpdateManager_Statics;
HOTFIX_API UClass* Z_Construct_UClass_UUpdateManager_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_177_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateManager(); \
	friend struct ::Z_Construct_UClass_UUpdateManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOTFIX_API UClass* ::Z_Construct_UClass_UUpdateManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UUpdateManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hotfix"), Z_Construct_UClass_UUpdateManager_NoRegister) \
	DECLARE_SERIALIZER(UUpdateManager)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_177_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUpdateManager(UUpdateManager&&) = delete; \
	UUpdateManager(const UUpdateManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOTFIX_API, UUpdateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUpdateManager)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_174_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_177_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_177_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_177_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUpdateManager;

// ********** End Class UUpdateManager *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h

// ********** Begin Enum EUpdateState **************************************************************
#define FOREACH_ENUM_EUPDATESTATE(op) \
	op(EUpdateState::UpdateIdle) \
	op(EUpdateState::UpdatePending) \
	op(EUpdateState::CheckingForPatch) \
	op(EUpdateState::CheckingForHotfix) \
	op(EUpdateState::WaitingOnInitialLoad) \
	op(EUpdateState::InitialLoadComplete) \
	op(EUpdateState::UpdateComplete) 

enum class EUpdateState : uint8;
template<> struct TIsUEnumClass<EUpdateState> { enum { Value = true }; };
template<> HOTFIX_NON_ATTRIBUTED_API UEnum* StaticEnum<EUpdateState>();
// ********** End Enum EUpdateState ****************************************************************

// ********** Begin Enum EUpdateCompletionStatus ***************************************************
#define FOREACH_ENUM_EUPDATECOMPLETIONSTATUS(op) \
	op(EUpdateCompletionStatus::UpdateUnknown) \
	op(EUpdateCompletionStatus::UpdateSuccess) \
	op(EUpdateCompletionStatus::UpdateSuccess_NoChange) \
	op(EUpdateCompletionStatus::UpdateSuccess_NeedsReload) \
	op(EUpdateCompletionStatus::UpdateSuccess_NeedsRelaunch) \
	op(EUpdateCompletionStatus::UpdateSuccess_NeedsPatch) \
	op(EUpdateCompletionStatus::UpdateFailure_PatchCheck) \
	op(EUpdateCompletionStatus::UpdateFailure_HotfixCheck) \
	op(EUpdateCompletionStatus::UpdateFailure_NotLoggedIn) 

enum class EUpdateCompletionStatus : uint8;
template<> struct TIsUEnumClass<EUpdateCompletionStatus> { enum { Value = true }; };
template<> HOTFIX_NON_ATTRIBUTED_API UEnum* StaticEnum<EUpdateCompletionStatus>();
// ********** End Enum EUpdateCompletionStatus *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
