// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/ChaosMoverSimulationTypes.h"

#ifdef CHAOSMOVER_ChaosMoverSimulationTypes_generated_h
#error "ChaosMoverSimulationTypes.generated.h already included, missing '#pragma once' in ChaosMoverSimulationTypes.h"
#endif
#define CHAOSMOVER_ChaosMoverSimulationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosMoverCharacterSimState **************************************
struct Z_Construct_UScriptStruct_FChaosMoverCharacterSimState_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosMoverCharacterSimState_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FChaosMoverCharacterSimState;
// ********** End ScriptStruct FChaosMoverCharacterSimState ****************************************

// ********** Begin ScriptStruct FChaosMoverGroundSimState *****************************************
struct Z_Construct_UScriptStruct_FChaosMoverGroundSimState_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosMoverGroundSimState_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FChaosMoverGroundSimState;
// ********** End ScriptStruct FChaosMoverGroundSimState *******************************************

// ********** Begin ScriptStruct FChaosMovementBasis ***********************************************
struct Z_Construct_UScriptStruct_FChaosMovementBasis_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosMovementBasis_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FChaosMovementBasis;
// ********** End ScriptStruct FChaosMovementBasis *************************************************

// ********** Begin ScriptStruct FChaosMoverSimulationDefaultInputs ********************************
struct Z_Construct_UScriptStruct_FChaosMoverSimulationDefaultInputs_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_131_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosMoverSimulationDefaultInputs_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FChaosMoverSimulationDefaultInputs;
// ********** End ScriptStruct FChaosMoverSimulationDefaultInputs **********************************

// ********** Begin ScriptStruct FChaosMoverTimeStepDebugData **************************************
struct Z_Construct_UScriptStruct_FChaosMoverTimeStepDebugData_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_189_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosMoverTimeStepDebugData_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FChaosMoverTimeStepDebugData;
// ********** End ScriptStruct FChaosMoverTimeStepDebugData ****************************************

// ********** Begin Interface UChaosCharacterMovementModeInterface *********************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearAccelerationOverride); \
	DECLARE_FUNCTION(execOverrideAcceleration); \
	DECLARE_FUNCTION(execGetAcceleration); \
	DECLARE_FUNCTION(execClearMaxSpeedOverride); \
	DECLARE_FUNCTION(execOverrideMaxSpeed); \
	DECLARE_FUNCTION(execGetMaxSpeed); \
	DECLARE_FUNCTION(execShouldCharacterRemainUpright); \
	DECLARE_FUNCTION(execGetMaxWalkSlopeCosine); \
	DECLARE_FUNCTION(execGetGroundQueryRadius); \
	DECLARE_FUNCTION(execGetTargetHeight);


struct Z_Construct_UClass_UChaosCharacterMovementModeInterface_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosCharacterMovementModeInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_207_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMOVER_API UChaosCharacterMovementModeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosCharacterMovementModeInterface(UChaosCharacterMovementModeInterface&&) = delete; \
	UChaosCharacterMovementModeInterface(const UChaosCharacterMovementModeInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosCharacterMovementModeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosCharacterMovementModeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosCharacterMovementModeInterface) \
	virtual ~UChaosCharacterMovementModeInterface() = default;


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_207_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosCharacterMovementModeInterface(); \
	friend struct ::Z_Construct_UClass_UChaosCharacterMovementModeInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosCharacterMovementModeInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosCharacterMovementModeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosCharacterMovementModeInterface_NoRegister) \
	DECLARE_SERIALIZER(UChaosCharacterMovementModeInterface)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_207_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_207_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_207_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_207_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosCharacterMovementModeInterface() {} \
public: \
	typedef UChaosCharacterMovementModeInterface UClassType; \
	typedef IChaosCharacterMovementModeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_204_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_212_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_207_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosCharacterMovementModeInterface;

// ********** End Interface UChaosCharacterMovementModeInterface ***********************************

// ********** Begin Interface UChaosCharacterConstraintMovementModeInterface ***********************
struct Z_Construct_UClass_UChaosCharacterConstraintMovementModeInterface_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosCharacterConstraintMovementModeInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_250_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMOVER_API UChaosCharacterConstraintMovementModeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosCharacterConstraintMovementModeInterface(UChaosCharacterConstraintMovementModeInterface&&) = delete; \
	UChaosCharacterConstraintMovementModeInterface(const UChaosCharacterConstraintMovementModeInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosCharacterConstraintMovementModeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosCharacterConstraintMovementModeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosCharacterConstraintMovementModeInterface) \
	virtual ~UChaosCharacterConstraintMovementModeInterface() = default;


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_250_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosCharacterConstraintMovementModeInterface(); \
	friend struct ::Z_Construct_UClass_UChaosCharacterConstraintMovementModeInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosCharacterConstraintMovementModeInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosCharacterConstraintMovementModeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosCharacterConstraintMovementModeInterface_NoRegister) \
	DECLARE_SERIALIZER(UChaosCharacterConstraintMovementModeInterface)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_250_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_250_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_250_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_250_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosCharacterConstraintMovementModeInterface() {} \
public: \
	typedef UChaosCharacterConstraintMovementModeInterface UClassType; \
	typedef IChaosCharacterConstraintMovementModeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_247_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_255_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_250_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosCharacterConstraintMovementModeInterface;

// ********** End Interface UChaosCharacterConstraintMovementModeInterface *************************

// ********** Begin ScriptStruct FStanceModifiedEventData ******************************************
struct Z_Construct_UScriptStruct_FStanceModifiedEventData_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_279_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStanceModifiedEventData_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverSimulationEventData Super;


struct FStanceModifiedEventData;
// ********** End ScriptStruct FStanceModifiedEventData ********************************************

// ********** Begin ScriptStruct FStanceModifierModeChangedEventData *******************************
struct Z_Construct_UScriptStruct_FStanceModifierModeChangedEventData_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_301_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStanceModifierModeChangedEventData_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverSimulationEventData Super;


struct FStanceModifierModeChangedEventData;
// ********** End ScriptStruct FStanceModifierModeChangedEventData *********************************

// ********** Begin ScriptStruct FChaosScheduledInstantMovementEffect ******************************
struct Z_Construct_UScriptStruct_FChaosScheduledInstantMovementEffect_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_324_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosScheduledInstantMovementEffect_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct();


struct FChaosScheduledInstantMovementEffect;
// ********** End ScriptStruct FChaosScheduledInstantMovementEffect ********************************

// ********** Begin ScriptStruct FChaosNetInstantMovementEffect ************************************
struct Z_Construct_UScriptStruct_FChaosNetInstantMovementEffect_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_344_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosNetInstantMovementEffect_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct();


struct FChaosNetInstantMovementEffect;
// ********** End ScriptStruct FChaosNetInstantMovementEffect **************************************

// ********** Begin ScriptStruct FChaosNetInstantMovementEffectsQueue ******************************
struct Z_Construct_UScriptStruct_FChaosNetInstantMovementEffectsQueue_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h_380_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosNetInstantMovementEffectsQueue_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FChaosNetInstantMovementEffectsQueue;
// ********** End ScriptStruct FChaosNetInstantMovementEffectsQueue ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulationTypes_h

// ********** Begin Enum EChaosMoverVelocityEffectMode *********************************************
#define FOREACH_ENUM_ECHAOSMOVERVELOCITYEFFECTMODE(op) \
	op(EChaosMoverVelocityEffectMode::Impulse) \
	op(EChaosMoverVelocityEffectMode::AdditiveVelocity) \
	op(EChaosMoverVelocityEffectMode::OverrideVelocity) 

enum class EChaosMoverVelocityEffectMode : uint8;
template<> struct TIsUEnumClass<EChaosMoverVelocityEffectMode> { enum { Value = true }; };
template<> CHAOSMOVER_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosMoverVelocityEffectMode>();
// ********** End Enum EChaosMoverVelocityEffectMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
