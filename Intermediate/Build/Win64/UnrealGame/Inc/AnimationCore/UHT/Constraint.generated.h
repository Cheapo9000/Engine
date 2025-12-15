// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Constraint.h"

#ifdef ANIMATIONCORE_Constraint_generated_h
#error "Constraint.generated.h already included, missing '#pragma once' in Constraint.h"
#endif
#define ANIMATIONCORE_Constraint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFilterOptionPerAxis **********************************************
struct Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics;
#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


struct FFilterOptionPerAxis;
// ********** End ScriptStruct FFilterOptionPerAxis ************************************************

// ********** Begin ScriptStruct FTransformFilter **************************************************
struct Z_Construct_UScriptStruct_FTransformFilter_Statics;
#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformFilter_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


struct FTransformFilter;
// ********** End ScriptStruct FTransformFilter ****************************************************

// ********** Begin ScriptStruct FConstraintDescription ********************************************
struct Z_Construct_UScriptStruct_FConstraintDescription_Statics;
#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_184_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintDescription_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


struct FConstraintDescription;
// ********** End ScriptStruct FConstraintDescription **********************************************

// ********** Begin ScriptStruct FConstraintOffset *************************************************
struct Z_Construct_UScriptStruct_FConstraintOffset_Statics;
#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_239_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintOffset_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


struct FConstraintOffset;
// ********** End ScriptStruct FConstraintOffset ***************************************************

// ********** Begin ScriptStruct FTransformConstraint **********************************************
struct Z_Construct_UScriptStruct_FTransformConstraint_Statics;
#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_287_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformConstraint_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


struct FTransformConstraint;
// ********** End ScriptStruct FTransformConstraint ************************************************

// ********** Begin ScriptStruct FConstraintDescriptionEx ******************************************
struct Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics;
#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_347_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


struct FConstraintDescriptionEx;
// ********** End ScriptStruct FConstraintDescriptionEx ********************************************

// ********** Begin ScriptStruct FTransformConstraintDescription ***********************************
struct Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics;
#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_422_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConstraintDescriptionEx Super;


struct FTransformConstraintDescription;
// ********** End ScriptStruct FTransformConstraintDescription *************************************

// ********** Begin ScriptStruct FAimConstraintDescription *****************************************
struct Z_Construct_UScriptStruct_FAimConstraintDescription_Statics;
#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_467_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAimConstraintDescription_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConstraintDescriptionEx Super;


struct FAimConstraintDescription;
// ********** End ScriptStruct FAimConstraintDescription *******************************************

// ********** Begin ScriptStruct FConstraintDescriptor *********************************************
struct Z_Construct_UScriptStruct_FConstraintDescriptor_Statics;
#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_512_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintDescriptor_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


struct FConstraintDescriptor;
// ********** End ScriptStruct FConstraintDescriptor ***********************************************

// ********** Begin ScriptStruct FConstraintData ***************************************************
struct Z_Construct_UScriptStruct_FConstraintData_Statics;
#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_689_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintData_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


struct FConstraintData;
// ********** End ScriptStruct FConstraintData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h

// ********** Begin Enum EConstraintType ***********************************************************
#define FOREACH_ENUM_ECONSTRAINTTYPE(op) \
	op(EConstraintType::Transform) \
	op(EConstraintType::Aim) 

enum class EConstraintType : uint8;
template<> struct TIsUEnumClass<EConstraintType> { enum { Value = true }; };
template<> ANIMATIONCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConstraintType>();
// ********** End Enum EConstraintType *************************************************************

// ********** Begin Enum ETransformConstraintType **************************************************
#define FOREACH_ENUM_ETRANSFORMCONSTRAINTTYPE(op) \
	op(ETransformConstraintType::Translation) \
	op(ETransformConstraintType::Rotation) \
	op(ETransformConstraintType::Scale) \
	op(ETransformConstraintType::Parent) \
	op(ETransformConstraintType::LookAt) 

enum class ETransformConstraintType : uint8;
template<> struct TIsUEnumClass<ETransformConstraintType> { enum { Value = true }; };
template<> ANIMATIONCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETransformConstraintType>();
// ********** End Enum ETransformConstraintType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
