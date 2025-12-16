// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineHotfixManager.h"

#ifdef HOTFIX_OnlineHotfixManager_generated_h
#error "OnlineHotfixManager.generated.h already included, missing '#pragma once' in OnlineHotfixManager.h"
#endif
#define HOTFIX_OnlineHotfixManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOnlineHotfixManager *****************************************************
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartHotfixProcess);


struct Z_Construct_UClass_UOnlineHotfixManager_Statics;
HOTFIX_API UClass* Z_Construct_UClass_UOnlineHotfixManager_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineHotfixManager(); \
	friend struct ::Z_Construct_UClass_UOnlineHotfixManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOTFIX_API UClass* ::Z_Construct_UClass_UOnlineHotfixManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnlineHotfixManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hotfix"), Z_Construct_UClass_UOnlineHotfixManager_NoRegister) \
	DECLARE_SERIALIZER(UOnlineHotfixManager)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnlineHotfixManager(UOnlineHotfixManager&&) = delete; \
	UOnlineHotfixManager(const UOnlineHotfixManager&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineHotfixManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineHotfixManager)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_90_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnlineHotfixManager;

// ********** End Class UOnlineHotfixManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h

// ********** Begin Enum EHotfixResult *************************************************************
#define FOREACH_ENUM_EHOTFIXRESULT(op) \
	op(EHotfixResult::Failed) \
	op(EHotfixResult::Success) \
	op(EHotfixResult::SuccessNoChange) \
	op(EHotfixResult::SuccessNeedsReload) \
	op(EHotfixResult::SuccessNeedsRelaunch) 

enum class EHotfixResult : uint8;
template<> struct TIsUEnumClass<EHotfixResult> { enum { Value = true }; };
template<> HOTFIX_NON_ATTRIBUTED_API UEnum* StaticEnum<EHotfixResult>();
// ********** End Enum EHotfixResult ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
