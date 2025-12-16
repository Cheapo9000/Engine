// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EvaluationNotifies/AnimNotifyState_Alignment.h"

#ifdef EVALUATIONNOTIFIESRUNTIME_AnimNotifyState_Alignment_generated_h
#error "AnimNotifyState_Alignment.generated.h already included, missing '#pragma once' in AnimNotifyState_Alignment.h"
#endif
#define EVALUATIONNOTIFIESRUNTIME_AnimNotifyState_Alignment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAlignmentWarpCurve ***********************************************
struct Z_Construct_UScriptStruct_FAlignmentWarpCurve_Statics;
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAlignmentWarpCurve_Statics; \
	EVALUATIONNOTIFIESRUNTIME_API static class UScriptStruct* StaticStruct();


struct FAlignmentWarpCurve;
// ********** End ScriptStruct FAlignmentWarpCurve *************************************************

// ********** Begin ScriptStruct FAlignmentSteeringSettings ****************************************
struct Z_Construct_UScriptStruct_FAlignmentSteeringSettings_Statics;
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAlignmentSteeringSettings_Statics; \
	EVALUATIONNOTIFIESRUNTIME_API static class UScriptStruct* StaticStruct();


struct FAlignmentSteeringSettings;
// ********** End ScriptStruct FAlignmentSteeringSettings ******************************************

// ********** Begin Class UNotifyState_AlignmentBase ***********************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_82_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetAlignOffset);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_82_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UNotifyState_AlignmentBase_Statics;
EVALUATIONNOTIFIESRUNTIME_API UClass* Z_Construct_UClass_UNotifyState_AlignmentBase_NoRegister();

#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNotifyState_AlignmentBase(); \
	friend struct ::Z_Construct_UClass_UNotifyState_AlignmentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EVALUATIONNOTIFIESRUNTIME_API UClass* ::Z_Construct_UClass_UNotifyState_AlignmentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UNotifyState_AlignmentBase, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EvaluationNotifiesRuntime"), Z_Construct_UClass_UNotifyState_AlignmentBase_NoRegister) \
	DECLARE_SERIALIZER(UNotifyState_AlignmentBase)


#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EVALUATIONNOTIFIESRUNTIME_API UNotifyState_AlignmentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNotifyState_AlignmentBase(UNotifyState_AlignmentBase&&) = delete; \
	UNotifyState_AlignmentBase(const UNotifyState_AlignmentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EVALUATIONNOTIFIESRUNTIME_API, UNotifyState_AlignmentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotifyState_AlignmentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotifyState_AlignmentBase) \
	EVALUATIONNOTIFIESRUNTIME_API virtual ~UNotifyState_AlignmentBase();


#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_79_PROLOG
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_82_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNotifyState_AlignmentBase;

// ********** End Class UNotifyState_AlignmentBase *************************************************

// ********** Begin Class UNotifyState_Alignment ***************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_142_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetTransformName);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_142_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UNotifyState_Alignment_Statics;
EVALUATIONNOTIFIESRUNTIME_API UClass* Z_Construct_UClass_UNotifyState_Alignment_NoRegister();

#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNotifyState_Alignment(); \
	friend struct ::Z_Construct_UClass_UNotifyState_Alignment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EVALUATIONNOTIFIESRUNTIME_API UClass* ::Z_Construct_UClass_UNotifyState_Alignment_NoRegister(); \
public: \
	DECLARE_CLASS2(UNotifyState_Alignment, UNotifyState_AlignmentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EvaluationNotifiesRuntime"), Z_Construct_UClass_UNotifyState_Alignment_NoRegister) \
	DECLARE_SERIALIZER(UNotifyState_Alignment)


#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_142_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EVALUATIONNOTIFIESRUNTIME_API UNotifyState_Alignment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNotifyState_Alignment(UNotifyState_Alignment&&) = delete; \
	UNotifyState_Alignment(const UNotifyState_Alignment&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EVALUATIONNOTIFIESRUNTIME_API, UNotifyState_Alignment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotifyState_Alignment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotifyState_Alignment) \
	EVALUATIONNOTIFIESRUNTIME_API virtual ~UNotifyState_Alignment();


#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_139_PROLOG
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_142_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_142_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNotifyState_Alignment;

// ********** End Class UNotifyState_Alignment *****************************************************

// ********** Begin ScriptStruct FAlignmentNotifyInstance ******************************************
struct Z_Construct_UScriptStruct_FAlignmentNotifyInstance_Statics;
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_161_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAlignmentNotifyInstance_Statics; \
	EVALUATIONNOTIFIESRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FEvaluationNotifyInstance Super;


struct FAlignmentNotifyInstance;
// ********** End ScriptStruct FAlignmentNotifyInstance ********************************************

// ********** Begin Class UNotifyState_AlignToGround ***********************************************
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_187_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNotifyState_AlignToGround, NO_API)


struct Z_Construct_UClass_UNotifyState_AlignToGround_Statics;
EVALUATIONNOTIFIESRUNTIME_API UClass* Z_Construct_UClass_UNotifyState_AlignToGround_NoRegister();

#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNotifyState_AlignToGround(); \
	friend struct ::Z_Construct_UClass_UNotifyState_AlignToGround_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EVALUATIONNOTIFIESRUNTIME_API UClass* ::Z_Construct_UClass_UNotifyState_AlignToGround_NoRegister(); \
public: \
	DECLARE_CLASS2(UNotifyState_AlignToGround, UNotifyState_AlignmentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EvaluationNotifiesRuntime"), Z_Construct_UClass_UNotifyState_AlignToGround_NoRegister) \
	DECLARE_SERIALIZER(UNotifyState_AlignToGround) \
	FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_187_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_187_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNotifyState_AlignToGround(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNotifyState_AlignToGround(UNotifyState_AlignToGround&&) = delete; \
	UNotifyState_AlignToGround(const UNotifyState_AlignToGround&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNotifyState_AlignToGround); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotifyState_AlignToGround); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotifyState_AlignToGround) \
	NO_API virtual ~UNotifyState_AlignToGround();


#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_184_PROLOG
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_187_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNotifyState_AlignToGround;

// ********** End Class UNotifyState_AlignToGround *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Runtime_Public_EvaluationNotifies_AnimNotifyState_Alignment_h

// ********** Begin Enum EAlignmentWeightCurveType *************************************************
#define FOREACH_ENUM_EALIGNMENTWEIGHTCURVETYPE(op) \
	op(EAlignmentWeightCurveType::FromRootMotionTranslation) \
	op(EAlignmentWeightCurveType::FromRootMotionRotation) \
	op(EAlignmentWeightCurveType::Linear) \
	op(EAlignmentWeightCurveType::EaseIn) \
	op(EAlignmentWeightCurveType::EaseOut) \
	op(EAlignmentWeightCurveType::EaseInOut) \
	op(EAlignmentWeightCurveType::Instant) \
	op(EAlignmentWeightCurveType::DoNotWarp) 

enum class EAlignmentWeightCurveType;
template<> struct TIsUEnumClass<EAlignmentWeightCurveType> { enum { Value = true }; };
template<> EVALUATIONNOTIFIESRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EAlignmentWeightCurveType>();
// ********** End Enum EAlignmentWeightCurveType ***************************************************

// ********** Begin Enum EAlignmentUpdateMode ******************************************************
#define FOREACH_ENUM_EALIGNMENTUPDATEMODE(op) \
	op(EAlignmentUpdateMode::World) \
	op(EAlignmentUpdateMode::Relative) 

enum class EAlignmentUpdateMode;
template<> struct TIsUEnumClass<EAlignmentUpdateMode> { enum { Value = true }; };
template<> EVALUATIONNOTIFIESRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EAlignmentUpdateMode>();
// ********** End Enum EAlignmentUpdateMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
