// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTagResponseTable.h"

#ifdef GAMEPLAYABILITIES_GameplayTagResponseTable_generated_h
#error "GameplayTagResponseTable.generated.h already included, missing '#pragma once' in GameplayTagResponseTable.h"
#endif
#define GAMEPLAYABILITIES_GameplayTagResponseTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
struct FGameplayTag;

// ********** Begin ScriptStruct FGameplayTagReponsePair *******************************************
struct Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayTagReponsePair;
// ********** End ScriptStruct FGameplayTagReponsePair *********************************************

// ********** Begin ScriptStruct FGameplayTagResponseTableEntry ************************************
struct Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayTagResponseTableEntry;
// ********** End ScriptStruct FGameplayTagResponseTableEntry **************************************

// ********** Begin Class UGameplayTagReponseTable *************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_64_RPC_WRAPPERS \
	DECLARE_FUNCTION(execTagResponseEvent);


struct Z_Construct_UClass_UGameplayTagReponseTable_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayTagReponseTable_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagReponseTable(); \
	friend struct ::Z_Construct_UClass_UGameplayTagReponseTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayTagReponseTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayTagReponseTable, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayTagReponseTable_NoRegister) \
	DECLARE_SERIALIZER(UGameplayTagReponseTable)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayTagReponseTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagReponseTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayTagReponseTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagReponseTable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayTagReponseTable(UGameplayTagReponseTable&&) = delete; \
	UGameplayTagReponseTable(const UGameplayTagReponseTable&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UGameplayTagReponseTable();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_61_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_64_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_64_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayTagReponseTable;

// ********** End Class UGameplayTagReponseTable ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
