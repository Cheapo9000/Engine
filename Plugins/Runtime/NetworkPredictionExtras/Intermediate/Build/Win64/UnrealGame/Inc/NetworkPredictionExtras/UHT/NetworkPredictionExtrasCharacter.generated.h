// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionExtrasCharacter.h"

#ifdef NETWORKPREDICTIONEXTRAS_NetworkPredictionExtrasCharacter_generated_h
#error "NetworkPredictionExtrasCharacter.generated.h already included, missing '#pragma once' in NetworkPredictionExtrasCharacter.h"
#endif
#define NETWORKPREDICTIONEXTRAS_NetworkPredictionExtrasCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMockCharacterAbilityComponent;

// ********** Begin Class ANetworkPredictionExtrasCharacter ****************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddMaxMoveSpeed); \
	DECLARE_FUNCTION(execSetMaxMoveSpeed); \
	DECLARE_FUNCTION(execGetMaxMoveSpeed); \
	DECLARE_FUNCTION(execPrintDebug);


struct Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasCharacter_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkPredictionExtrasCharacter(); \
	friend struct ::Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_ANetworkPredictionExtrasCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ANetworkPredictionExtrasCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_ANetworkPredictionExtrasCharacter_NoRegister) \
	DECLARE_SERIALIZER(ANetworkPredictionExtrasCharacter)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_49_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANetworkPredictionExtrasCharacter(ANetworkPredictionExtrasCharacter&&) = delete; \
	ANetworkPredictionExtrasCharacter(const ANetworkPredictionExtrasCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkPredictionExtrasCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkPredictionExtrasCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkPredictionExtrasCharacter) \
	NO_API virtual ~ANetworkPredictionExtrasCharacter();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_46_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANetworkPredictionExtrasCharacter;

// ********** End Class ANetworkPredictionExtrasCharacter ******************************************

// ********** Begin Class ANetworkPredictionExtrasCharacter_MockAbility ****************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMockCharacterAbilityComponent);


struct Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkPredictionExtrasCharacter_MockAbility(); \
	friend struct ::Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(ANetworkPredictionExtrasCharacter_MockAbility, ANetworkPredictionExtrasCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_NoRegister) \
	DECLARE_SERIALIZER(ANetworkPredictionExtrasCharacter_MockAbility)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_121_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANetworkPredictionExtrasCharacter_MockAbility(ANetworkPredictionExtrasCharacter_MockAbility&&) = delete; \
	ANetworkPredictionExtrasCharacter_MockAbility(const ANetworkPredictionExtrasCharacter_MockAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkPredictionExtrasCharacter_MockAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkPredictionExtrasCharacter_MockAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkPredictionExtrasCharacter_MockAbility) \
	NO_API virtual ~ANetworkPredictionExtrasCharacter_MockAbility();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_118_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_121_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANetworkPredictionExtrasCharacter_MockAbility;

// ********** End Class ANetworkPredictionExtrasCharacter_MockAbility ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h

// ********** Begin Enum ENetworkPredictionExtrasCharacterInputPreset ******************************
#define FOREACH_ENUM_ENETWORKPREDICTIONEXTRASCHARACTERINPUTPRESET(op) \
	op(ENetworkPredictionExtrasCharacterInputPreset::None) \
	op(ENetworkPredictionExtrasCharacterInputPreset::Forward) 

enum class ENetworkPredictionExtrasCharacterInputPreset : uint8;
template<> struct TIsUEnumClass<ENetworkPredictionExtrasCharacterInputPreset> { enum { Value = true }; };
template<> NETWORKPREDICTIONEXTRAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ENetworkPredictionExtrasCharacterInputPreset>();
// ********** End Enum ENetworkPredictionExtrasCharacterInputPreset ********************************

// ********** Begin Enum ENetworkPredictionExtrasMockCharacterAbilityInputPreset *******************
#define FOREACH_ENUM_ENETWORKPREDICTIONEXTRASMOCKCHARACTERABILITYINPUTPRESET(op) \
	op(ENetworkPredictionExtrasMockCharacterAbilityInputPreset::None) \
	op(ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Sprint) \
	op(ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Dash) \
	op(ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Blink) \
	op(ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Jump) 

enum class ENetworkPredictionExtrasMockCharacterAbilityInputPreset : uint8;
template<> struct TIsUEnumClass<ENetworkPredictionExtrasMockCharacterAbilityInputPreset> { enum { Value = true }; };
template<> NETWORKPREDICTIONEXTRAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ENetworkPredictionExtrasMockCharacterAbilityInputPreset>();
// ********** End Enum ENetworkPredictionExtrasMockCharacterAbilityInputPreset *********************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
