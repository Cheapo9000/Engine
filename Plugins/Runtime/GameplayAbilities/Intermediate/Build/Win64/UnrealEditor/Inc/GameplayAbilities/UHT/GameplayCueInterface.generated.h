// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueInterface.h"

#ifdef GAMEPLAYABILITIES_GameplayCueInterface_generated_h
#error "GameplayCueInterface.generated.h already included, missing '#pragma once' in GameplayCueInterface.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayCueParameters;

// ********** Begin Interface UGameplayCueInterface ************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execForwardGameplayCueToParent);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UGameplayCueInterface_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayCueInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayCueInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCueInterface(UGameplayCueInterface&&) = delete; \
	UGameplayCueInterface(const UGameplayCueInterface&) = delete; \
	virtual ~UGameplayCueInterface() = default;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameplayCueInterface(); \
	friend struct ::Z_Construct_UClass_UGameplayCueInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayCueInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCueInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayCueInterface_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCueInterface)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameplayCueInterface() {} \
public: \
	typedef UGameplayCueInterface UClassType; \
	typedef IGameplayCueInterface ThisClass; \
	GAMEPLAYABILITIES_API static void Execute_BlueprintCustomHandler(UObject* O, EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_27_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCueInterface;

// ********** End Interface UGameplayCueInterface **************************************************

// ********** Begin ScriptStruct FActiveGameplayCue ************************************************
struct Z_Construct_UScriptStruct_FActiveGameplayCue_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActiveGameplayCue_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


struct FActiveGameplayCue;
// ********** End ScriptStruct FActiveGameplayCue **************************************************

// ********** Begin ScriptStruct FActiveGameplayCueContainer ***************************************
struct Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FActiveGameplayCueContainer, GameplayCues, GAMEPLAYABILITIES_API );


struct FActiveGameplayCueContainer;
// ********** End ScriptStruct FActiveGameplayCueContainer *****************************************

// ********** Begin ScriptStruct FGameplayCueTag ***************************************************
struct Z_Construct_UScriptStruct_FGameplayCueTag_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_189_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayCueTag_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FGameplayCueTag;
// ********** End ScriptStruct FGameplayCueTag *****************************************************

// ********** Begin ScriptStruct FMinimalGameplayCueReplicationProxy *******************************
struct Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics;
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_209_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FMinimalGameplayCueReplicationProxy;
// ********** End ScriptStruct FMinimalGameplayCueReplicationProxy *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
