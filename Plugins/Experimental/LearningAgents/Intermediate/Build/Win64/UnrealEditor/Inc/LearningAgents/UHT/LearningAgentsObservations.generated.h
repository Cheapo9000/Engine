// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsObservations.h"

#ifdef LEARNINGAGENTS_LearningAgentsObservations_generated_h
#error "LearningAgentsObservations.generated.h already included, missing '#pragma once' in LearningAgentsObservations.h"
#endif
#define LEARNINGAGENTS_LearningAgentsObservations_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEnum;
class ULearningAgentsManagerListener;
class ULearningAgentsObservationObject;
class ULearningAgentsObservationSchema;
class USplineComponent;
enum class ELearningAgentsActivationFunction : uint8;
enum class ELearningAgentsEitherObservation : uint8;
enum class ELearningAgentsOptionalObservation : uint8;
struct FConv1dObservationParams;
struct FConv2dObservationParams;
struct FLearningAgentsObservationObjectElement;
struct FLearningAgentsObservationSchemaElement;
struct FLinearColor;

// ********** Begin ScriptStruct FLearningAgentsObservationSchemaElement ***************************
struct Z_Construct_UScriptStruct_FLearningAgentsObservationSchemaElement_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsObservationSchemaElement_Statics; \
	LEARNINGAGENTS_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsObservationSchemaElement;
// ********** End ScriptStruct FLearningAgentsObservationSchemaElement *****************************

// ********** Begin ScriptStruct FLearningAgentsObservationObjectElement ***************************
struct Z_Construct_UScriptStruct_FLearningAgentsObservationObjectElement_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsObservationObjectElement_Statics; \
	LEARNINGAGENTS_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsObservationObjectElement;
// ********** End ScriptStruct FLearningAgentsObservationObjectElement *****************************

// ********** Begin Class ULearningAgentsObservationSchema *****************************************
struct Z_Construct_UClass_ULearningAgentsObservationSchema_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsObservationSchema_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsObservationSchema(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsObservationSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsObservationSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsObservationSchema, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsObservationSchema_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsObservationSchema)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTS_API ULearningAgentsObservationSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsObservationSchema(ULearningAgentsObservationSchema&&) = delete; \
	ULearningAgentsObservationSchema(const ULearningAgentsObservationSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTS_API, ULearningAgentsObservationSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsObservationSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsObservationSchema) \
	LEARNINGAGENTS_API virtual ~ULearningAgentsObservationSchema();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_76_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsObservationSchema;

// ********** End Class ULearningAgentsObservationSchema *******************************************

// ********** Begin Class ULearningAgentsObservationObject *****************************************
struct Z_Construct_UClass_ULearningAgentsObservationObject_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsObservationObject_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsObservationObject(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsObservationObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsObservationObject_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsObservationObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsObservationObject_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsObservationObject)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTS_API ULearningAgentsObservationObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsObservationObject(ULearningAgentsObservationObject&&) = delete; \
	ULearningAgentsObservationObject(const ULearningAgentsObservationObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTS_API, ULearningAgentsObservationObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsObservationObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsObservationObject) \
	LEARNINGAGENTS_API virtual ~ULearningAgentsObservationObject();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_91_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsObservationObject;

// ********** End Class ULearningAgentsObservationObject *******************************************

// ********** Begin ScriptStruct FConv1dObservationParams ******************************************
struct Z_Construct_UScriptStruct_FConv1dObservationParams_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConv1dObservationParams_Statics; \
	LEARNINGAGENTS_API static class UScriptStruct* StaticStruct();


struct FConv1dObservationParams;
// ********** End ScriptStruct FConv1dObservationParams ********************************************

// ********** Begin ScriptStruct FConv2dObservationParams ******************************************
struct Z_Construct_UScriptStruct_FConv2dObservationParams_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_184_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConv2dObservationParams_Statics; \
	LEARNINGAGENTS_API static class UScriptStruct* StaticStruct();


struct FConv2dObservationParams;
// ********** End ScriptStruct FConv2dObservationParams ********************************************

// ********** Begin Class ULearningAgentsObservations **********************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetConv2dObservation); \
	DECLARE_FUNCTION(execGetConv1dObservation); \
	DECLARE_FUNCTION(execGetProportionAlongRayObservation); \
	DECLARE_FUNCTION(execGetDirectionAlongSplineObservation); \
	DECLARE_FUNCTION(execGetProportionAlongSplineObservation); \
	DECLARE_FUNCTION(execGetLocationAlongSplineObservation); \
	DECLARE_FUNCTION(execGetDirectionObservation); \
	DECLARE_FUNCTION(execGetVelocityObservation); \
	DECLARE_FUNCTION(execGetAngleObservationRadians); \
	DECLARE_FUNCTION(execGetAngleObservation); \
	DECLARE_FUNCTION(execGetTransformObservation); \
	DECLARE_FUNCTION(execGetScaleObservation); \
	DECLARE_FUNCTION(execGetRotationObservationAsQuat); \
	DECLARE_FUNCTION(execGetRotationObservation); \
	DECLARE_FUNCTION(execGetLocationObservation); \
	DECLARE_FUNCTION(execGetFloatObservation); \
	DECLARE_FUNCTION(execGetBoolObservation); \
	DECLARE_FUNCTION(execGetEncodingObservation); \
	DECLARE_FUNCTION(execGetEitherObservation); \
	DECLARE_FUNCTION(execGetOptionalObservation); \
	DECLARE_FUNCTION(execGetBitmaskObservation); \
	DECLARE_FUNCTION(execGetEnumObservation); \
	DECLARE_FUNCTION(execGetMapObservationToArrays); \
	DECLARE_FUNCTION(execGetMapObservation); \
	DECLARE_FUNCTION(execGetMapObservationNum); \
	DECLARE_FUNCTION(execGetArrayObservation); \
	DECLARE_FUNCTION(execGetArrayObservationNum); \
	DECLARE_FUNCTION(execGetPairObservation); \
	DECLARE_FUNCTION(execGetSetObservationToArray); \
	DECLARE_FUNCTION(execGetSetObservation); \
	DECLARE_FUNCTION(execGetSetObservationNum); \
	DECLARE_FUNCTION(execGetStaticArrayObservation); \
	DECLARE_FUNCTION(execGetStaticArrayObservationNum); \
	DECLARE_FUNCTION(execGetInclusiveUnionObservationToArrays); \
	DECLARE_FUNCTION(execGetInclusiveUnionObservation); \
	DECLARE_FUNCTION(execGetInclusiveUnionObservationNum); \
	DECLARE_FUNCTION(execGetExclusiveUnionObservation); \
	DECLARE_FUNCTION(execGetStructObservationToArrays); \
	DECLARE_FUNCTION(execGetStructObservationElement); \
	DECLARE_FUNCTION(execGetStructObservation); \
	DECLARE_FUNCTION(execGetStructObservationNum); \
	DECLARE_FUNCTION(execGetCountObservation); \
	DECLARE_FUNCTION(execGetNamedInclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execGetNamedInclusiveDiscreteObservationNum); \
	DECLARE_FUNCTION(execGetNamedExclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execGetInclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execGetInclusiveDiscreteObservationNum); \
	DECLARE_FUNCTION(execGetExclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execGetContinuousObservation); \
	DECLARE_FUNCTION(execGetContinuousObservationNum); \
	DECLARE_FUNCTION(execGetNullObservation); \
	DECLARE_FUNCTION(execMakeLidarObservation); \
	DECLARE_FUNCTION(execMakeProportionAlongRayObservation); \
	DECLARE_FUNCTION(execMakeDirectionAlongSplineObservation); \
	DECLARE_FUNCTION(execMakeProportionAlongSplineObservation); \
	DECLARE_FUNCTION(execMakeLocationAlongSplineObservation); \
	DECLARE_FUNCTION(execMakeDirectionObservation); \
	DECLARE_FUNCTION(execMakeVelocityObservation); \
	DECLARE_FUNCTION(execMakeAngleObservationRadians); \
	DECLARE_FUNCTION(execMakeAngleObservation); \
	DECLARE_FUNCTION(execMakeTransformObservation); \
	DECLARE_FUNCTION(execMakeScaleObservation); \
	DECLARE_FUNCTION(execMakeRotationObservationFromQuat); \
	DECLARE_FUNCTION(execMakeRotationObservation); \
	DECLARE_FUNCTION(execMakeLocationObservation); \
	DECLARE_FUNCTION(execMakeFloatObservation); \
	DECLARE_FUNCTION(execMakeConv2dObservation); \
	DECLARE_FUNCTION(execMakeConv1dObservation); \
	DECLARE_FUNCTION(execMakeBoolObservation); \
	DECLARE_FUNCTION(execMakeEncodingObservation); \
	DECLARE_FUNCTION(execMakeEitherBObservation); \
	DECLARE_FUNCTION(execMakeEitherAObservation); \
	DECLARE_FUNCTION(execMakeEitherObservation); \
	DECLARE_FUNCTION(execMakeOptionalValidObservation); \
	DECLARE_FUNCTION(execMakeOptionalNullObservation); \
	DECLARE_FUNCTION(execMakeOptionalObservation); \
	DECLARE_FUNCTION(execMakeBitmaskObservation); \
	DECLARE_FUNCTION(execMakeEnumObservation); \
	DECLARE_FUNCTION(execMakeMapObservationFromArrays); \
	DECLARE_FUNCTION(execMakeMapObservation); \
	DECLARE_FUNCTION(execMakeArrayObservation); \
	DECLARE_FUNCTION(execMakePairObservation); \
	DECLARE_FUNCTION(execMakeSetObservationFromArray); \
	DECLARE_FUNCTION(execMakeSetObservation); \
	DECLARE_FUNCTION(execMakeStaticArrayObservation); \
	DECLARE_FUNCTION(execMakeInclusiveUnionObservationFromArrays); \
	DECLARE_FUNCTION(execMakeInclusiveUnionObservation); \
	DECLARE_FUNCTION(execMakeExclusiveUnionObservation); \
	DECLARE_FUNCTION(execMakeStructObservationFromArrays); \
	DECLARE_FUNCTION(execMakeStructObservation); \
	DECLARE_FUNCTION(execMakeCountObservation); \
	DECLARE_FUNCTION(execMakeNamedInclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execMakeNamedExclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execMakeInclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execMakeExclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execMakeContinuousObservation); \
	DECLARE_FUNCTION(execMakeNullObservation); \
	DECLARE_FUNCTION(execSpecifyLidarObservation); \
	DECLARE_FUNCTION(execSpecifyProportionAlongRayObservation); \
	DECLARE_FUNCTION(execSpecifyDirectionAlongSplineObservation); \
	DECLARE_FUNCTION(execSpecifyProportionAlongSplineObservation); \
	DECLARE_FUNCTION(execSpecifyLocationAlongSplineObservation); \
	DECLARE_FUNCTION(execSpecifyDirectionObservation); \
	DECLARE_FUNCTION(execSpecifyVelocityObservation); \
	DECLARE_FUNCTION(execSpecifyAngleObservation); \
	DECLARE_FUNCTION(execSpecifyTransformObservation); \
	DECLARE_FUNCTION(execSpecifyScaleObservation); \
	DECLARE_FUNCTION(execSpecifyRotationObservation); \
	DECLARE_FUNCTION(execSpecifyLocationObservation); \
	DECLARE_FUNCTION(execSpecifyFloatObservation); \
	DECLARE_FUNCTION(execSpecifyConv2dObservation); \
	DECLARE_FUNCTION(execSpecifyConv1dObservation); \
	DECLARE_FUNCTION(execSpecifyBoolObservation); \
	DECLARE_FUNCTION(execSpecifyEncodingObservation); \
	DECLARE_FUNCTION(execSpecifyEitherObservation); \
	DECLARE_FUNCTION(execSpecifyOptionalObservation); \
	DECLARE_FUNCTION(execSpecifyBitmaskObservation); \
	DECLARE_FUNCTION(execSpecifyEnumObservation); \
	DECLARE_FUNCTION(execSpecifyMapObservation); \
	DECLARE_FUNCTION(execSpecifyArrayObservation); \
	DECLARE_FUNCTION(execSpecifyPairObservation); \
	DECLARE_FUNCTION(execSpecifySetObservation); \
	DECLARE_FUNCTION(execSpecifyStaticArrayObservation); \
	DECLARE_FUNCTION(execSpecifyInclusiveUnionObservationFromArrays); \
	DECLARE_FUNCTION(execSpecifyInclusiveUnionObservation); \
	DECLARE_FUNCTION(execSpecifyExclusiveUnionObservationFromArrays); \
	DECLARE_FUNCTION(execSpecifyExclusiveUnionObservation); \
	DECLARE_FUNCTION(execSpecifyStructObservationFromArrays); \
	DECLARE_FUNCTION(execSpecifyStructObservation); \
	DECLARE_FUNCTION(execSpecifyCountObservation); \
	DECLARE_FUNCTION(execSpecifyNamedInclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execSpecifyNamedExclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execSpecifyInclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execSpecifyExclusiveDiscreteObservation); \
	DECLARE_FUNCTION(execSpecifyContinuousObservation); \
	DECLARE_FUNCTION(execSpecifyNullObservation); \
	DECLARE_FUNCTION(execLogObservation); \
	DECLARE_FUNCTION(execValidateObservationObjectMatchesSchema); \
	DECLARE_FUNCTION(execFindEnumByName); \
	DECLARE_FUNCTION(execProjectTransformOntoGroundPlane);


struct Z_Construct_UClass_ULearningAgentsObservations_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsObservations_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsObservations(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsObservations_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsObservations_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsObservations, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsObservations_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsObservations)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTS_API ULearningAgentsObservations(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsObservations(ULearningAgentsObservations&&) = delete; \
	ULearningAgentsObservations(const ULearningAgentsObservations&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTS_API, ULearningAgentsObservations); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsObservations); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsObservations) \
	LEARNINGAGENTS_API virtual ~ULearningAgentsObservations();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_241_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_244_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h_244_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsObservations;

// ********** End Class ULearningAgentsObservations ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsObservations_h

// ********** Begin Enum ELearningAgentsEitherObservation ******************************************
#define FOREACH_ENUM_ELEARNINGAGENTSEITHEROBSERVATION(op) \
	op(ELearningAgentsEitherObservation::A) \
	op(ELearningAgentsEitherObservation::B) 

enum class ELearningAgentsEitherObservation : uint8;
template<> struct TIsUEnumClass<ELearningAgentsEitherObservation> { enum { Value = true }; };
template<> LEARNINGAGENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ELearningAgentsEitherObservation>();
// ********** End Enum ELearningAgentsEitherObservation ********************************************

// ********** Begin Enum ELearningAgentsOptionalObservation ****************************************
#define FOREACH_ENUM_ELEARNINGAGENTSOPTIONALOBSERVATION(op) \
	op(ELearningAgentsOptionalObservation::Null) \
	op(ELearningAgentsOptionalObservation::Valid) 

enum class ELearningAgentsOptionalObservation : uint8;
template<> struct TIsUEnumClass<ELearningAgentsOptionalObservation> { enum { Value = true }; };
template<> LEARNINGAGENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ELearningAgentsOptionalObservation>();
// ********** End Enum ELearningAgentsOptionalObservation ******************************************

// ********** Begin Enum ELearningAgentsPaddingMode ************************************************
#define FOREACH_ENUM_ELEARNINGAGENTSPADDINGMODE(op) \
	op(ELearningAgentsPaddingMode::Zeros) \
	op(ELearningAgentsPaddingMode::Circular) 

enum class ELearningAgentsPaddingMode : uint8;
template<> struct TIsUEnumClass<ELearningAgentsPaddingMode> { enum { Value = true }; };
template<> LEARNINGAGENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ELearningAgentsPaddingMode>();
// ********** End Enum ELearningAgentsPaddingMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
