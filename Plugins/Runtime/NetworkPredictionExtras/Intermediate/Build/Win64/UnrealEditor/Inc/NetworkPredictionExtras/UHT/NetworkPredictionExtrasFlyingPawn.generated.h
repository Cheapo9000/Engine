// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionExtrasFlyingPawn.h"

#ifdef NETWORKPREDICTIONEXTRAS_NetworkPredictionExtrasFlyingPawn_generated_h
#error "NetworkPredictionExtrasFlyingPawn.generated.h already included, missing '#pragma once' in NetworkPredictionExtrasFlyingPawn.h"
#endif
#define NETWORKPREDICTIONEXTRAS_NetworkPredictionExtrasFlyingPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMockFlyingAbilityComponent;

// ********** Begin Class ANetworkPredictionExtrasFlyingPawn ***************************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddMaxMoveSpeed); \
	DECLARE_FUNCTION(execSetMaxMoveSpeed); \
	DECLARE_FUNCTION(execGetMaxMoveSpeed); \
	DECLARE_FUNCTION(execPrintDebug);


struct Z_Construct_UClass_ANetworkPredictionExtrasFlyingPawn_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasFlyingPawn_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkPredictionExtrasFlyingPawn(); \
	friend struct ::Z_Construct_UClass_ANetworkPredictionExtrasFlyingPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_ANetworkPredictionExtrasFlyingPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ANetworkPredictionExtrasFlyingPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_ANetworkPredictionExtrasFlyingPawn_NoRegister) \
	DECLARE_SERIALIZER(ANetworkPredictionExtrasFlyingPawn)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_49_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANetworkPredictionExtrasFlyingPawn(ANetworkPredictionExtrasFlyingPawn&&) = delete; \
	ANetworkPredictionExtrasFlyingPawn(const ANetworkPredictionExtrasFlyingPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkPredictionExtrasFlyingPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkPredictionExtrasFlyingPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkPredictionExtrasFlyingPawn) \
	NO_API virtual ~ANetworkPredictionExtrasFlyingPawn();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_46_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANetworkPredictionExtrasFlyingPawn;

// ********** End Class ANetworkPredictionExtrasFlyingPawn *****************************************

// ********** Begin Class ANetworkPredictionExtrasFlyingPawn_MockAbility ***************************
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMockFlyingAbilityComponent);


struct Z_Construct_UClass_ANetworkPredictionExtrasFlyingPawn_MockAbility_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasFlyingPawn_MockAbility_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkPredictionExtrasFlyingPawn_MockAbility(); \
	friend struct ::Z_Construct_UClass_ANetworkPredictionExtrasFlyingPawn_MockAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_ANetworkPredictionExtrasFlyingPawn_MockAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(ANetworkPredictionExtrasFlyingPawn_MockAbility, ANetworkPredictionExtrasFlyingPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_ANetworkPredictionExtrasFlyingPawn_MockAbility_NoRegister) \
	DECLARE_SERIALIZER(ANetworkPredictionExtrasFlyingPawn_MockAbility)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_120_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANetworkPredictionExtrasFlyingPawn_MockAbility(ANetworkPredictionExtrasFlyingPawn_MockAbility&&) = delete; \
	ANetworkPredictionExtrasFlyingPawn_MockAbility(const ANetworkPredictionExtrasFlyingPawn_MockAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkPredictionExtrasFlyingPawn_MockAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkPredictionExtrasFlyingPawn_MockAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkPredictionExtrasFlyingPawn_MockAbility) \
	NO_API virtual ~ANetworkPredictionExtrasFlyingPawn_MockAbility();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_117_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_120_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANetworkPredictionExtrasFlyingPawn_MockAbility;

// ********** End Class ANetworkPredictionExtrasFlyingPawn_MockAbility *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasFlyingPawn_h

// ********** Begin Enum ENetworkPredictionExtrasFlyingInputPreset *********************************
#define FOREACH_ENUM_ENETWORKPREDICTIONEXTRASFLYINGINPUTPRESET(op) \
	op(ENetworkPredictionExtrasFlyingInputPreset::None) \
	op(ENetworkPredictionExtrasFlyingInputPreset::Forward) 

enum class ENetworkPredictionExtrasFlyingInputPreset : uint8;
template<> struct TIsUEnumClass<ENetworkPredictionExtrasFlyingInputPreset> { enum { Value = true }; };
template<> NETWORKPREDICTIONEXTRAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ENetworkPredictionExtrasFlyingInputPreset>();
// ********** End Enum ENetworkPredictionExtrasFlyingInputPreset ***********************************

// ********** Begin Enum ENetworkPredictionExtrasMockAbilityInputPreset ****************************
#define FOREACH_ENUM_ENETWORKPREDICTIONEXTRASMOCKABILITYINPUTPRESET(op) \
	op(ENetworkPredictionExtrasMockAbilityInputPreset::None) \
	op(ENetworkPredictionExtrasMockAbilityInputPreset::Sprint) \
	op(ENetworkPredictionExtrasMockAbilityInputPreset::Dash) \
	op(ENetworkPredictionExtrasMockAbilityInputPreset::Blink) 

enum class ENetworkPredictionExtrasMockAbilityInputPreset : uint8;
template<> struct TIsUEnumClass<ENetworkPredictionExtrasMockAbilityInputPreset> { enum { Value = true }; };
template<> NETWORKPREDICTIONEXTRAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ENetworkPredictionExtrasMockAbilityInputPreset>();
// ********** End Enum ENetworkPredictionExtrasMockAbilityInputPreset ******************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
