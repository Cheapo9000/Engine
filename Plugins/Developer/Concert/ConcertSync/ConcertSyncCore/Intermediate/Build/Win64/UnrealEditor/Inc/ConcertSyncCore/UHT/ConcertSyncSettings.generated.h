// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertSyncSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ConcertSyncSettings_generated_h
#error "ConcertSyncSettings.generated.h already included, missing '#pragma once' in ConcertSyncSettings.h"
#endif
#define CONCERTSYNCCORE_ConcertSyncSettings_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransactionClassFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FTransactionClassFilter>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPackageClassFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FPackageClassFilter>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertSyncConfig(); \
	friend struct Z_Construct_UClass_UConcertSyncConfig_Statics; \
public: \
	DECLARE_CLASS(UConcertSyncConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertSyncCore"), NO_API) \
	DECLARE_SERIALIZER(UConcertSyncConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("ConcertSyncCore");} \



#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConcertSyncConfig(UConcertSyncConfig&&); \
	UConcertSyncConfig(const UConcertSyncConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConcertSyncConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertSyncConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConcertSyncConfig) \
	NO_API virtual ~UConcertSyncConfig();


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_57_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONCERTSYNCCORE_API UClass* StaticClass<class UConcertSyncConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h


#define FOREACH_ENUM_ESHOWPRESENCEINGAME(op) \
	op(EShowPresenceInGame::NotVisibleInGame) \
	op(EShowPresenceInGame::VisibleInGameOnlyEditor) \
	op(EShowPresenceInGame::VisibleInGameAlways) 

enum class EShowPresenceInGame;
template<> struct TIsUEnumClass<EShowPresenceInGame> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EShowPresenceInGame>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
