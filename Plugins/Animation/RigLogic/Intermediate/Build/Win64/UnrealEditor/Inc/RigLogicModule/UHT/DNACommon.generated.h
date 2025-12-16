// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DNACommon.h"

#ifdef RIGLOGICMODULE_DNACommon_generated_h
#error "DNACommon.generated.h already included, missing '#pragma once' in DNACommon.h"
#endif
#define RIGLOGICMODULE_DNACommon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCoordinateSystem *************************************************
struct Z_Construct_UScriptStruct_FCoordinateSystem_Statics;
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_153_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCoordinateSystem_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct();


struct FCoordinateSystem;
// ********** End ScriptStruct FCoordinateSystem ***************************************************

// ********** Begin ScriptStruct FMeshBlendShapeChannelMapping *************************************
struct Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics;
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_174_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct();


struct FMeshBlendShapeChannelMapping;
// ********** End ScriptStruct FMeshBlendShapeChannelMapping ***************************************

// ********** Begin ScriptStruct FTextureCoordinate ************************************************
struct Z_Construct_UScriptStruct_FTextureCoordinate_Statics;
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_193_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTextureCoordinate_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct();


struct FTextureCoordinate;
// ********** End ScriptStruct FTextureCoordinate **************************************************

// ********** Begin ScriptStruct FVertexLayout *****************************************************
struct Z_Construct_UScriptStruct_FVertexLayout_Statics;
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_212_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVertexLayout_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct();


struct FVertexLayout;
// ********** End ScriptStruct FVertexLayout *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h

// ********** Begin Enum EArchetype ****************************************************************
#define FOREACH_ENUM_EARCHETYPE(op) \
	op(EArchetype::Asian) \
	op(EArchetype::Black) \
	op(EArchetype::Caucasian) \
	op(EArchetype::Hispanic) \
	op(EArchetype::Alien) \
	op(EArchetype::Other) 

enum class EArchetype : uint8;
template<> struct TIsUEnumClass<EArchetype> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EArchetype>();
// ********** End Enum EArchetype ******************************************************************

// ********** Begin Enum EGender *******************************************************************
#define FOREACH_ENUM_EGENDER(op) \
	op(EGender::Male) \
	op(EGender::Female) \
	op(EGender::Other) 

enum class EGender : uint8;
template<> struct TIsUEnumClass<EGender> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGender>();
// ********** End Enum EGender *********************************************************************

// ********** Begin Enum ETranslationUnit **********************************************************
#define FOREACH_ENUM_ETRANSLATIONUNIT(op) \
	op(ETranslationUnit::CM) \
	op(ETranslationUnit::M) 

enum class ETranslationUnit : uint8;
template<> struct TIsUEnumClass<ETranslationUnit> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETranslationUnit>();
// ********** End Enum ETranslationUnit ************************************************************

// ********** Begin Enum ERotationUnit *************************************************************
#define FOREACH_ENUM_EROTATIONUNIT(op) \
	op(ERotationUnit::Degrees) \
	op(ERotationUnit::Radians) 

enum class ERotationUnit : uint8;
template<> struct TIsUEnumClass<ERotationUnit> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERotationUnit>();
// ********** End Enum ERotationUnit ***************************************************************

// ********** Begin Enum EDirection ****************************************************************
#define FOREACH_ENUM_EDIRECTION(op) \
	op(EDirection::Left) \
	op(EDirection::Right) \
	op(EDirection::Up) \
	op(EDirection::Down) \
	op(EDirection::Front) \
	op(EDirection::Back) 

enum class EDirection : uint8;
template<> struct TIsUEnumClass<EDirection> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDirection>();
// ********** End Enum EDirection ******************************************************************

// ********** Begin Enum ETranslationRepresentation ************************************************
#define FOREACH_ENUM_ETRANSLATIONREPRESENTATION(op) \
	op(ETranslationRepresentation::Vector) 

enum class ETranslationRepresentation : uint8;
template<> struct TIsUEnumClass<ETranslationRepresentation> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETranslationRepresentation>();
// ********** End Enum ETranslationRepresentation **************************************************

// ********** Begin Enum ERotationRepresentation ***************************************************
#define FOREACH_ENUM_EROTATIONREPRESENTATION(op) \
	op(ERotationRepresentation::EulerAngles) \
	op(ERotationRepresentation::Quaternion) 

enum class ERotationRepresentation : uint8;
template<> struct TIsUEnumClass<ERotationRepresentation> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERotationRepresentation>();
// ********** End Enum ERotationRepresentation *****************************************************

// ********** Begin Enum EScaleRepresentation ******************************************************
#define FOREACH_ENUM_ESCALEREPRESENTATION(op) \
	op(EScaleRepresentation::Vector) 

enum class EScaleRepresentation : uint8;
template<> struct TIsUEnumClass<EScaleRepresentation> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EScaleRepresentation>();
// ********** End Enum EScaleRepresentation ********************************************************

// ********** Begin Enum EAutomaticRadius **********************************************************
#define FOREACH_ENUM_EAUTOMATICRADIUS(op) \
	op(EAutomaticRadius::On) \
	op(EAutomaticRadius::Off) 

enum class EAutomaticRadius : uint8;
template<> struct TIsUEnumClass<EAutomaticRadius> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutomaticRadius>();
// ********** End Enum EAutomaticRadius ************************************************************

// ********** Begin Enum ETwistAxis ****************************************************************
#define FOREACH_ENUM_ETWISTAXIS(op) \
	op(ETwistAxis::X) \
	op(ETwistAxis::Y) \
	op(ETwistAxis::Z) 

enum class ETwistAxis : uint8;
template<> struct TIsUEnumClass<ETwistAxis> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwistAxis>();
// ********** End Enum ETwistAxis ******************************************************************

// ********** Begin Enum EDNADataLayer *************************************************************
#define FOREACH_ENUM_EDNADATALAYER(op) \
	op(EDNADataLayer::None) \
	op(EDNADataLayer::Descriptor) \
	op(EDNADataLayer::Definition) \
	op(EDNADataLayer::Behavior) \
	op(EDNADataLayer::Geometry) \
	op(EDNADataLayer::GeometryWithoutBlendShapes) \
	op(EDNADataLayer::MachineLearnedBehavior) \
	op(EDNADataLayer::RBFBehavior) \
	op(EDNADataLayer::All) 

enum class EDNADataLayer : uint8;
template<> struct TIsUEnumClass<EDNADataLayer> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDNADataLayer>();
// ********** End Enum EDNADataLayer ***************************************************************

// ********** Begin Enum EActivationFunction *******************************************************
#define FOREACH_ENUM_EACTIVATIONFUNCTION(op) \
	op(EActivationFunction::Linear) \
	op(EActivationFunction::ReLU) \
	op(EActivationFunction::LeakyReLU) \
	op(EActivationFunction::Tanh) \
	op(EActivationFunction::Sigmoid) 

enum class EActivationFunction : uint8;
template<> struct TIsUEnumClass<EActivationFunction> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EActivationFunction>();
// ********** End Enum EActivationFunction *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
