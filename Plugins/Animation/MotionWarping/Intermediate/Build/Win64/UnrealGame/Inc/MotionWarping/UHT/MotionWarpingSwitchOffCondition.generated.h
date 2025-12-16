// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionWarpingSwitchOffCondition.h"

#ifdef MOTIONWARPING_MotionWarpingSwitchOffCondition_generated_h
#error "MotionWarpingSwitchOffCondition.generated.h already included, missing '#pragma once' in MotionWarpingSwitchOffCondition.h"
#endif
#define MOTIONWARPING_MotionWarpingSwitchOffCondition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UMotionWarpingSwitchOffAngleToTargetCondition;
class UMotionWarpingSwitchOffBlueprintableCondition;
class UMotionWarpingSwitchOffCompositeCondition;
class UMotionWarpingSwitchOffCondition;
class UMotionWarpingSwitchOffDistanceCondition;
enum class ESwitchOffConditionAngleOp : uint8;
enum class ESwitchOffConditionCompositeOp : uint8;
enum class ESwitchOffConditionDistanceOp : uint8;
enum class ESwitchOffConditionEffect : uint8;

// ********** Begin ScriptStruct FSwitchOffConditionData *******************************************
struct Z_Construct_UScriptStruct_FSwitchOffConditionData_Statics;
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSwitchOffConditionData_Statics; \
	MOTIONWARPING_API static class UScriptStruct* StaticStruct();


struct FSwitchOffConditionData;
// ********** End ScriptStruct FSwitchOffConditionData *********************************************

// ********** Begin Class UMotionWarpingSwitchOffCondition *****************************************
struct Z_Construct_UClass_UMotionWarpingSwitchOffCondition_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffCondition_NoRegister();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingSwitchOffCondition(); \
	friend struct ::Z_Construct_UClass_UMotionWarpingSwitchOffCondition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UMotionWarpingSwitchOffCondition_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionWarpingSwitchOffCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UMotionWarpingSwitchOffCondition_NoRegister) \
	DECLARE_SERIALIZER(UMotionWarpingSwitchOffCondition)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOTIONWARPING_API UMotionWarpingSwitchOffCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionWarpingSwitchOffCondition(UMotionWarpingSwitchOffCondition&&) = delete; \
	UMotionWarpingSwitchOffCondition(const UMotionWarpingSwitchOffCondition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, UMotionWarpingSwitchOffCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingSwitchOffCondition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingSwitchOffCondition) \
	MOTIONWARPING_API virtual ~UMotionWarpingSwitchOffCondition();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_59_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionWarpingSwitchOffCondition;

// ********** End Class UMotionWarpingSwitchOffCondition *******************************************

// ********** Begin Class UMotionWarpingSwitchOffDistanceCondition *********************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateSwitchOffDistanceCondition);


struct Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition_NoRegister();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingSwitchOffDistanceCondition(); \
	friend struct ::Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionWarpingSwitchOffDistanceCondition, UMotionWarpingSwitchOffCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition_NoRegister) \
	DECLARE_SERIALIZER(UMotionWarpingSwitchOffDistanceCondition)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_139_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingSwitchOffDistanceCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionWarpingSwitchOffDistanceCondition(UMotionWarpingSwitchOffDistanceCondition&&) = delete; \
	UMotionWarpingSwitchOffDistanceCondition(const UMotionWarpingSwitchOffDistanceCondition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingSwitchOffDistanceCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingSwitchOffDistanceCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingSwitchOffDistanceCondition) \
	NO_API virtual ~UMotionWarpingSwitchOffDistanceCondition();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_136_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_139_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_139_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionWarpingSwitchOffDistanceCondition;

// ********** End Class UMotionWarpingSwitchOffDistanceCondition ***********************************

// ********** Begin Class UMotionWarpingSwitchOffAngleToTargetCondition ****************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateSwitchOffAngleToTargetCondition);


struct Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition_NoRegister();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_193_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingSwitchOffAngleToTargetCondition(); \
	friend struct ::Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionWarpingSwitchOffAngleToTargetCondition, UMotionWarpingSwitchOffCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition_NoRegister) \
	DECLARE_SERIALIZER(UMotionWarpingSwitchOffAngleToTargetCondition)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_193_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingSwitchOffAngleToTargetCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionWarpingSwitchOffAngleToTargetCondition(UMotionWarpingSwitchOffAngleToTargetCondition&&) = delete; \
	UMotionWarpingSwitchOffAngleToTargetCondition(const UMotionWarpingSwitchOffAngleToTargetCondition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingSwitchOffAngleToTargetCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingSwitchOffAngleToTargetCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingSwitchOffAngleToTargetCondition) \
	NO_API virtual ~UMotionWarpingSwitchOffAngleToTargetCondition();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_190_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_193_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_193_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionWarpingSwitchOffAngleToTargetCondition;

// ********** End Class UMotionWarpingSwitchOffAngleToTargetCondition ******************************

// ********** Begin Class UMotionWarpingSwitchOffCompositeCondition ********************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateSwitchOffCompositeCondition);


struct Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition_NoRegister();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingSwitchOffCompositeCondition(); \
	friend struct ::Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionWarpingSwitchOffCompositeCondition, UMotionWarpingSwitchOffCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition_NoRegister) \
	DECLARE_SERIALIZER(UMotionWarpingSwitchOffCompositeCondition)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_246_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingSwitchOffCompositeCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionWarpingSwitchOffCompositeCondition(UMotionWarpingSwitchOffCompositeCondition&&) = delete; \
	UMotionWarpingSwitchOffCompositeCondition(const UMotionWarpingSwitchOffCompositeCondition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingSwitchOffCompositeCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingSwitchOffCompositeCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingSwitchOffCompositeCondition) \
	NO_API virtual ~UMotionWarpingSwitchOffCompositeCondition();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_243_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_246_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_246_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionWarpingSwitchOffCompositeCondition;

// ********** End Class UMotionWarpingSwitchOffCompositeCondition **********************************

// ********** Begin Class UMotionWarpingSwitchOffBlueprintableCondition ****************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_293_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString BP_ExtraDebugInfo_Implementation(const AActor* InOwnerActor, const AActor* InTargetActor, FVector InTargetLocation, bool bInUseWarpTargetAsTargetLocation) const; \
	virtual bool BP_Check_Implementation(const AActor* InOwnerActor, const AActor* InTargetActor, FVector InTargetLocation, bool bInUseWarpTargetAsTargetLocation) const; \
	DECLARE_FUNCTION(execBP_ExtraDebugInfo); \
	DECLARE_FUNCTION(execBP_Check); \
	DECLARE_FUNCTION(execCreateSwitchOffBlueprintableCondition);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_293_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition_NoRegister();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_293_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingSwitchOffBlueprintableCondition(); \
	friend struct ::Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionWarpingSwitchOffBlueprintableCondition, UMotionWarpingSwitchOffCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition_NoRegister) \
	DECLARE_SERIALIZER(UMotionWarpingSwitchOffBlueprintableCondition)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_293_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingSwitchOffBlueprintableCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionWarpingSwitchOffBlueprintableCondition(UMotionWarpingSwitchOffBlueprintableCondition&&) = delete; \
	UMotionWarpingSwitchOffBlueprintableCondition(const UMotionWarpingSwitchOffBlueprintableCondition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingSwitchOffBlueprintableCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingSwitchOffBlueprintableCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingSwitchOffBlueprintableCondition) \
	NO_API virtual ~UMotionWarpingSwitchOffBlueprintableCondition();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_290_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_293_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_293_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_293_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_293_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h_293_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionWarpingSwitchOffBlueprintableCondition;

// ********** End Class UMotionWarpingSwitchOffBlueprintableCondition ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h

// ********** Begin Enum ESwitchOffConditionEffect *************************************************
#define FOREACH_ENUM_ESWITCHOFFCONDITIONEFFECT(op) \
	op(ESwitchOffConditionEffect::CancelFollow) \
	op(ESwitchOffConditionEffect::CancelWarping) \
	op(ESwitchOffConditionEffect::PauseWarping) \
	op(ESwitchOffConditionEffect::PauseRootMotion) 

enum class ESwitchOffConditionEffect : uint8;
template<> struct TIsUEnumClass<ESwitchOffConditionEffect> { enum { Value = true }; };
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESwitchOffConditionEffect>();
// ********** End Enum ESwitchOffConditionEffect ***************************************************

// ********** Begin Enum ESwitchOffConditionDistanceOp *********************************************
#define FOREACH_ENUM_ESWITCHOFFCONDITIONDISTANCEOP(op) \
	op(ESwitchOffConditionDistanceOp::LessThan) \
	op(ESwitchOffConditionDistanceOp::GreaterThan) 

enum class ESwitchOffConditionDistanceOp : uint8;
template<> struct TIsUEnumClass<ESwitchOffConditionDistanceOp> { enum { Value = true }; };
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESwitchOffConditionDistanceOp>();
// ********** End Enum ESwitchOffConditionDistanceOp ***********************************************

// ********** Begin Enum ESwitchOffConditionDistanceAxesType ***************************************
#define FOREACH_ENUM_ESWITCHOFFCONDITIONDISTANCEAXESTYPE(op) \
	op(ESwitchOffConditionDistanceAxesType::AllAxes) \
	op(ESwitchOffConditionDistanceAxesType::IgnoreZAxis) \
	op(ESwitchOffConditionDistanceAxesType::OnlyZAxis) 

enum class ESwitchOffConditionDistanceAxesType : uint8;
template<> struct TIsUEnumClass<ESwitchOffConditionDistanceAxesType> { enum { Value = true }; };
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESwitchOffConditionDistanceAxesType>();
// ********** End Enum ESwitchOffConditionDistanceAxesType *****************************************

// ********** Begin Enum ESwitchOffConditionAngleOp ************************************************
#define FOREACH_ENUM_ESWITCHOFFCONDITIONANGLEOP(op) \
	op(ESwitchOffConditionAngleOp::LessThan) \
	op(ESwitchOffConditionAngleOp::GreaterThan) 

enum class ESwitchOffConditionAngleOp : uint8;
template<> struct TIsUEnumClass<ESwitchOffConditionAngleOp> { enum { Value = true }; };
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESwitchOffConditionAngleOp>();
// ********** End Enum ESwitchOffConditionAngleOp **************************************************

// ********** Begin Enum ESwitchOffConditionCompositeOp ********************************************
#define FOREACH_ENUM_ESWITCHOFFCONDITIONCOMPOSITEOP(op) \
	op(ESwitchOffConditionCompositeOp::Or) \
	op(ESwitchOffConditionCompositeOp::And) 

enum class ESwitchOffConditionCompositeOp : uint8;
template<> struct TIsUEnumClass<ESwitchOffConditionCompositeOp> { enum { Value = true }; };
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESwitchOffConditionCompositeOp>();
// ********** End Enum ESwitchOffConditionCompositeOp **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
