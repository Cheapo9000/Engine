// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EnvQueryTypes.h"

#ifdef AIMODULE_EnvQueryTypes_generated_h
#error "EnvQueryTypes.generated.h already included, missing '#pragma once' in EnvQueryTypes.h"
#endif
#define AIMODULE_EnvQueryTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEnvNamedValue ****************************************************
struct Z_Construct_UScriptStruct_FEnvNamedValue_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_287_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnvNamedValue_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FEnvNamedValue;
// ********** End ScriptStruct FEnvNamedValue ******************************************************

// ********** Begin ScriptStruct FEnvDirection *****************************************************
struct Z_Construct_UScriptStruct_FEnvDirection_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_306_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnvDirection_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FEnvDirection;
// ********** End ScriptStruct FEnvDirection *******************************************************

// ********** Begin ScriptStruct FEnvTraceData *****************************************************
struct Z_Construct_UScriptStruct_FEnvTraceData_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_330_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnvTraceData_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FEnvTraceData;
// ********** End ScriptStruct FEnvTraceData *******************************************************

// ********** Begin ScriptStruct FEnvOverlapData ***************************************************
struct Z_Construct_UScriptStruct_FEnvOverlapData_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_430_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnvOverlapData_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FEnvOverlapData;
// ********** End ScriptStruct FEnvOverlapData *****************************************************

// ********** Begin ScriptStruct FEnvQueryResult ***************************************************
struct Z_Construct_UScriptStruct_FEnvQueryResult_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_521_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnvQueryResult_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FEnvQueryResult;
// ********** End ScriptStruct FEnvQueryResult *****************************************************

// ********** Begin ScriptStruct FEnvQueryContextData **********************************************
struct Z_Construct_UScriptStruct_FEnvQueryContextData_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_643_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnvQueryContextData_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FEnvQueryContextData;
// ********** End ScriptStruct FEnvQueryContextData ************************************************

// ********** Begin ScriptStruct FEnvQueryOptionInstance *******************************************
struct Z_Construct_UScriptStruct_FEnvQueryOptionInstance_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_665_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnvQueryOptionInstance_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FEnvQueryOptionInstance;
// ********** End ScriptStruct FEnvQueryOptionInstance *********************************************

// ********** Begin Class UEnvQueryTypes ***********************************************************
struct Z_Construct_UClass_UEnvQueryTypes_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTypes_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_766_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryTypes(); \
	friend struct ::Z_Construct_UClass_UEnvQueryTypes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQueryTypes_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQueryTypes_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryTypes)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_766_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryTypes(UEnvQueryTypes&&) = delete; \
	UEnvQueryTypes(const UEnvQueryTypes&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTypes); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTypes) \
	AIMODULE_API virtual ~UEnvQueryTypes();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_763_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_766_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_766_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_766_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryTypes;

// ********** End Class UEnvQueryTypes *************************************************************

// ********** Begin ScriptStruct FEnvQueryInstanceContextCacheItem *********************************
struct Z_Construct_UScriptStruct_FEnvQueryInstanceContextCacheItem_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_782_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnvQueryInstanceContextCacheItem_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FEnvQueryInstanceContextCacheItem;
// ********** End ScriptStruct FEnvQueryInstanceContextCacheItem ***********************************

// ********** Begin ScriptStruct FEnvQueryInstance *************************************************
struct Z_Construct_UScriptStruct_FEnvQueryInstance_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_794_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnvQueryInstance_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FEnvQueryResult Super;


struct FEnvQueryInstance;
// ********** End ScriptStruct FEnvQueryInstance ***************************************************

// ********** Begin ScriptStruct FAIDynamicParam ***************************************************
struct Z_Construct_UScriptStruct_FAIDynamicParam_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_1338_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIDynamicParam_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FAIDynamicParam;
// ********** End ScriptStruct FAIDynamicParam *****************************************************

// ********** Begin ScriptStruct FEQSParametrizedQueryExecutionRequest *****************************
struct Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_1372_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FEQSParametrizedQueryExecutionRequest;
// ********** End ScriptStruct FEQSParametrizedQueryExecutionRequest *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h

// ********** Begin Enum EEnvTestPurpose ***********************************************************
#define FOREACH_ENUM_EENVTESTPURPOSE(op) \
	op(EEnvTestPurpose::Filter) \
	op(EEnvTestPurpose::Score) \
	op(EEnvTestPurpose::FilterAndScore) 

namespace EEnvTestPurpose { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvTestPurpose::Type>();
// ********** End Enum EEnvTestPurpose *************************************************************

// ********** Begin Enum EEnvTestFilterType ********************************************************
#define FOREACH_ENUM_EENVTESTFILTERTYPE(op) \
	op(EEnvTestFilterType::Minimum) \
	op(EEnvTestFilterType::Maximum) \
	op(EEnvTestFilterType::Range) \
	op(EEnvTestFilterType::Match) 

namespace EEnvTestFilterType { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvTestFilterType::Type>();
// ********** End Enum EEnvTestFilterType **********************************************************

// ********** Begin Enum EEnvTestScoreEquation *****************************************************
#define FOREACH_ENUM_EENVTESTSCOREEQUATION(op) \
	op(EEnvTestScoreEquation::Linear) \
	op(EEnvTestScoreEquation::Square) \
	op(EEnvTestScoreEquation::InverseLinear) \
	op(EEnvTestScoreEquation::SquareRoot) \
	op(EEnvTestScoreEquation::Constant) 

namespace EEnvTestScoreEquation { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvTestScoreEquation::Type>();
// ********** End Enum EEnvTestScoreEquation *******************************************************

// ********** Begin Enum EEnvTestWeight ************************************************************
#define FOREACH_ENUM_EENVTESTWEIGHT(op) \
	op(EEnvTestWeight::None) \
	op(EEnvTestWeight::Square) \
	op(EEnvTestWeight::Inverse) \
	op(EEnvTestWeight::Unused) \
	op(EEnvTestWeight::Constant) \
	op(EEnvTestWeight::Skip) 

namespace EEnvTestWeight { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvTestWeight::Type>();
// ********** End Enum EEnvTestWeight **************************************************************

// ********** Begin Enum EEnvTestCost **************************************************************
#define FOREACH_ENUM_EENVTESTCOST(op) \
	op(EEnvTestCost::Low) \
	op(EEnvTestCost::Medium) \
	op(EEnvTestCost::High) 

namespace EEnvTestCost { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvTestCost::Type>();
// ********** End Enum EEnvTestCost ****************************************************************

// ********** Begin Enum EEnvTestFilterOperator ****************************************************
#define FOREACH_ENUM_EENVTESTFILTEROPERATOR(op) \
	op(EEnvTestFilterOperator::AllPass) \
	op(EEnvTestFilterOperator::AnyPass) 

namespace EEnvTestFilterOperator { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvTestFilterOperator::Type>();
// ********** End Enum EEnvTestFilterOperator ******************************************************

// ********** Begin Enum EEnvTestScoreOperator *****************************************************
#define FOREACH_ENUM_EENVTESTSCOREOPERATOR(op) \
	op(EEnvTestScoreOperator::AverageScore) \
	op(EEnvTestScoreOperator::MinScore) \
	op(EEnvTestScoreOperator::MaxScore) \
	op(EEnvTestScoreOperator::Multiply) 

namespace EEnvTestScoreOperator { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvTestScoreOperator::Type>();
// ********** End Enum EEnvTestScoreOperator *******************************************************

// ********** Begin Enum EEnvQueryStatus ***********************************************************
#define FOREACH_ENUM_EENVQUERYSTATUS(op) \
	op(EEnvQueryStatus::Processing) \
	op(EEnvQueryStatus::Success) \
	op(EEnvQueryStatus::Failed) \
	op(EEnvQueryStatus::Aborted) \
	op(EEnvQueryStatus::OwnerLost) \
	op(EEnvQueryStatus::MissingParam) 

namespace EEnvQueryStatus { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvQueryStatus::Type>();
// ********** End Enum EEnvQueryStatus *************************************************************

// ********** Begin Enum EEnvQueryRunMode **********************************************************
#define FOREACH_ENUM_EENVQUERYRUNMODE(op) \
	op(EEnvQueryRunMode::SingleResult) \
	op(EEnvQueryRunMode::RandomBest5Pct) \
	op(EEnvQueryRunMode::RandomBest25Pct) \
	op(EEnvQueryRunMode::AllMatching) 

namespace EEnvQueryRunMode { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvQueryRunMode::Type>();
// ********** End Enum EEnvQueryRunMode ************************************************************

// ********** Begin Enum EEnvQueryResultNormalizationOption ****************************************
#define FOREACH_ENUM_EENVQUERYRESULTNORMALIZATIONOPTION(op) \
	op(EEnvQueryResultNormalizationOption::Default) \
	op(EEnvQueryResultNormalizationOption::Normalized) \
	op(EEnvQueryResultNormalizationOption::Unaltered) 

enum class EEnvQueryResultNormalizationOption : uint8;
template<> struct TIsUEnumClass<EEnvQueryResultNormalizationOption> { enum { Value = true }; };
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvQueryResultNormalizationOption>();
// ********** End Enum EEnvQueryResultNormalizationOption ******************************************

// ********** Begin Enum EEnvQueryParam ************************************************************
#define FOREACH_ENUM_EENVQUERYPARAM(op) \
	op(EEnvQueryParam::Float) \
	op(EEnvQueryParam::Int) \
	op(EEnvQueryParam::Bool) 

namespace EEnvQueryParam { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvQueryParam::Type>();
// ********** End Enum EEnvQueryParam **************************************************************

// ********** Begin Enum EAIParamType **************************************************************
#define FOREACH_ENUM_EAIPARAMTYPE(op) \
	op(EAIParamType::Float) \
	op(EAIParamType::Int) \
	op(EAIParamType::Bool) 

enum class EAIParamType : uint8;
template<> struct TIsUEnumClass<EAIParamType> { enum { Value = true }; };
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAIParamType>();
// ********** End Enum EAIParamType ****************************************************************

// ********** Begin Enum EEnvQueryTrace ************************************************************
#define FOREACH_ENUM_EENVQUERYTRACE(op) \
	op(EEnvQueryTrace::None) \
	op(EEnvQueryTrace::Navigation) \
	op(EEnvQueryTrace::GeometryByChannel) \
	op(EEnvQueryTrace::GeometryByProfile) \
	op(EEnvQueryTrace::NavigationOverLedges) 

namespace EEnvQueryTrace { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvQueryTrace::Type>();
// ********** End Enum EEnvQueryTrace **************************************************************

// ********** Begin Enum EEnvTraceShape ************************************************************
#define FOREACH_ENUM_EENVTRACESHAPE(op) \
	op(EEnvTraceShape::Line) \
	op(EEnvTraceShape::Box) \
	op(EEnvTraceShape::Sphere) \
	op(EEnvTraceShape::Capsule) 

namespace EEnvTraceShape { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvTraceShape::Type>();
// ********** End Enum EEnvTraceShape **************************************************************

// ********** Begin Enum EEnvOverlapShape **********************************************************
#define FOREACH_ENUM_EENVOVERLAPSHAPE(op) \
	op(EEnvOverlapShape::Box) \
	op(EEnvOverlapShape::Sphere) \
	op(EEnvOverlapShape::Capsule) 

namespace EEnvOverlapShape { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvOverlapShape::Type>();
// ********** End Enum EEnvOverlapShape ************************************************************

// ********** Begin Enum EEnvDirection *************************************************************
#define FOREACH_ENUM_EENVDIRECTION(op) \
	op(EEnvDirection::TwoPoints) \
	op(EEnvDirection::Rotation) 

namespace EEnvDirection { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvDirection::Type>();
// ********** End Enum EEnvDirection ***************************************************************

// ********** Begin Enum EEnvQueryTestClamping *****************************************************
#define FOREACH_ENUM_EENVQUERYTESTCLAMPING(op) \
	op(EEnvQueryTestClamping::None) \
	op(EEnvQueryTestClamping::SpecifiedValue) \
	op(EEnvQueryTestClamping::FilterThreshold) 

namespace EEnvQueryTestClamping { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvQueryTestClamping::Type>();
// ********** End Enum EEnvQueryTestClamping *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
