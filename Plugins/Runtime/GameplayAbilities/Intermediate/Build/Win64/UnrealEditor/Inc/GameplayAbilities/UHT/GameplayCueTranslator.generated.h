// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueTranslator.h"

#ifdef GAMEPLAYABILITIES_GameplayCueTranslator_generated_h
#error "GameplayCueTranslator.generated.h already included, missing '#pragma once' in GameplayCueTranslator.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayCueTranslatorNodeIndex ***********************************
struct Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayCueTranslatorNodeIndex;
// ********** End ScriptStruct FGameplayCueTranslatorNodeIndex *************************************

// ********** Begin ScriptStruct FGameplayCueTranslationLink ***************************************
struct Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayCueTranslationLink;
// ********** End ScriptStruct FGameplayCueTranslationLink *****************************************

// ********** Begin ScriptStruct FGameplayCueTranslatorNode ****************************************
struct Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayCueTranslatorNode;
// ********** End ScriptStruct FGameplayCueTranslatorNode ******************************************

// ********** Begin ScriptStruct FGameplayCueTranslationManager ************************************
struct Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_184_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayCueTranslationManager;
// ********** End ScriptStruct FGameplayCueTranslationManager **************************************

// ********** Begin Class UGameplayCueTranslator ***************************************************
struct Z_Construct_UClass_UGameplayCueTranslator_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueTranslator_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCueTranslator(); \
	friend struct ::Z_Construct_UClass_UGameplayCueTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayCueTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCueTranslator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayCueTranslator_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCueTranslator)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_263_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayCueTranslator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCueTranslator(UGameplayCueTranslator&&) = delete; \
	UGameplayCueTranslator(const UGameplayCueTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayCueTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueTranslator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueTranslator) \
	GAMEPLAYABILITIES_API virtual ~UGameplayCueTranslator();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_260_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_263_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCueTranslator;

// ********** End Class UGameplayCueTranslator *****************************************************

// ********** Begin Class UGameplayCueTranslator_Test **********************************************
struct Z_Construct_UClass_UGameplayCueTranslator_Test_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueTranslator_Test_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_289_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCueTranslator_Test(); \
	friend struct ::Z_Construct_UClass_UGameplayCueTranslator_Test_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayCueTranslator_Test_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCueTranslator_Test, UGameplayCueTranslator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayCueTranslator_Test_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCueTranslator_Test)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_289_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayCueTranslator_Test(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCueTranslator_Test(UGameplayCueTranslator_Test&&) = delete; \
	UGameplayCueTranslator_Test(const UGameplayCueTranslator_Test&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayCueTranslator_Test); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueTranslator_Test); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueTranslator_Test) \
	NO_API virtual ~UGameplayCueTranslator_Test();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_286_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_289_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_289_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_289_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCueTranslator_Test;

// ********** End Class UGameplayCueTranslator_Test ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
