// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttributeSet.h"

#ifdef GAMEPLAYABILITIES_AttributeSet_generated_h
#error "AttributeSet.generated.h already included, missing '#pragma once' in AttributeSet.h"
#endif
#define GAMEPLAYABILITIES_AttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayAttributeData ********************************************
struct Z_Construct_UScriptStruct_FGameplayAttributeData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAttributeData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAttributeData;
// ********** End ScriptStruct FGameplayAttributeData **********************************************

// ********** Begin ScriptStruct FGameplayAttribute ************************************************
struct Z_Construct_UScriptStruct_FGameplayAttribute_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayAttribute_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayAttribute;
// ********** End ScriptStruct FGameplayAttribute **************************************************

// ********** Begin Class UAttributeSet ************************************************************
struct Z_Construct_UClass_UAttributeSet_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_188_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeSet(); \
	friend struct ::Z_Construct_UClass_UAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UAttributeSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UAttributeSet)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_188_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAttributeSet(UAttributeSet&&) = delete; \
	UAttributeSet(const UAttributeSet&) = delete; \
	GAMEPLAYABILITIES_API virtual ~UAttributeSet();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_185_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_188_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_188_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_188_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAttributeSet;

// ********** End Class UAttributeSet **************************************************************

// ********** Begin ScriptStruct FAttributeMetaData ************************************************
struct Z_Construct_UScriptStruct_FAttributeMetaData_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h_274_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAttributeMetaData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FAttributeMetaData;
// ********** End ScriptStruct FAttributeMetaData **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
