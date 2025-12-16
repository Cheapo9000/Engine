// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertSyncSettings.h"

#ifdef CONCERTSYNCCORE_ConcertSyncSettings_generated_h
#error "ConcertSyncSettings.generated.h already included, missing '#pragma once' in ConcertSyncSettings.h"
#endif
#define CONCERTSYNCCORE_ConcertSyncSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTransactionClassFilter *******************************************
struct Z_Construct_UScriptStruct_FTransactionClassFilter_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransactionClassFilter_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FTransactionClassFilter;
// ********** End ScriptStruct FTransactionClassFilter *********************************************

// ********** Begin ScriptStruct FPackageClassFilter ***********************************************
struct Z_Construct_UScriptStruct_FPackageClassFilter_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPackageClassFilter_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FPackageClassFilter;
// ********** End ScriptStruct FPackageClassFilter *************************************************

// ********** Begin Class UConcertSyncConfig *******************************************************
struct Z_Construct_UClass_UConcertSyncConfig_Statics;
CONCERTSYNCCORE_API UClass* Z_Construct_UClass_UConcertSyncConfig_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertSyncConfig(); \
	friend struct ::Z_Construct_UClass_UConcertSyncConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTSYNCCORE_API UClass* ::Z_Construct_UClass_UConcertSyncConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UConcertSyncConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertSyncCore"), Z_Construct_UClass_UConcertSyncConfig_NoRegister) \
	DECLARE_SERIALIZER(UConcertSyncConfig) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("ConcertSyncCore");} \



#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConcertSyncConfig(UConcertSyncConfig&&) = delete; \
	UConcertSyncConfig(const UConcertSyncConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONCERTSYNCCORE_API, UConcertSyncConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertSyncConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConcertSyncConfig) \
	CONCERTSYNCCORE_API virtual ~UConcertSyncConfig();


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_59_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConcertSyncConfig;

// ********** End Class UConcertSyncConfig *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h

// ********** Begin Enum EShowPresenceInGame *******************************************************
#define FOREACH_ENUM_ESHOWPRESENCEINGAME(op) \
	op(EShowPresenceInGame::NotVisibleInGame) \
	op(EShowPresenceInGame::VisibleInGameOnlyEditor) \
	op(EShowPresenceInGame::VisibleInGameAlways) 

enum class EShowPresenceInGame;
template<> struct TIsUEnumClass<EShowPresenceInGame> { enum { Value = true }; };
template<> CONCERTSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EShowPresenceInGame>();
// ********** End Enum EShowPresenceInGame *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
