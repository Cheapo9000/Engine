// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/PCGPinPropertiesGPU.h"

#ifdef PCG_PCGPinPropertiesGPU_generated_h
#error "PCGPinPropertiesGPU.generated.h already included, missing '#pragma once' in PCGPinPropertiesGPU.h"
#endif
#define PCG_PCGPinPropertiesGPU_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGPinPropertiesGPUStruct ****************************************
struct Z_Construct_UScriptStruct_FPCGPinPropertiesGPUStruct_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGPinPropertiesGPU_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPinPropertiesGPUStruct_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGPinPropertiesGPUStruct;
// ********** End ScriptStruct FPCGPinPropertiesGPUStruct ******************************************

// ********** Begin ScriptStruct FPCGPinPropertiesGPU **********************************************
struct Z_Construct_UScriptStruct_FPCGPinPropertiesGPU_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGPinPropertiesGPU_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPinPropertiesGPU_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGPinProperties Super;


struct FPCGPinPropertiesGPU;
// ********** End ScriptStruct FPCGPinPropertiesGPU ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGPinPropertiesGPU_h

// ********** Begin Enum EPCGPinInitMode ***********************************************************
#define FOREACH_ENUM_EPCGPININITMODE(op) \
	op(EPCGPinInitMode::FromInputPins) \
	op(EPCGPinInitMode::Custom) 

enum class EPCGPinInitMode : uint8;
template<> struct TIsUEnumClass<EPCGPinInitMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPinInitMode>();
// ********** End Enum EPCGPinInitMode *************************************************************

// ********** Begin Enum EPCGDataCountMode *********************************************************
#define FOREACH_ENUM_EPCGDATACOUNTMODE(op) \
	op(EPCGDataCountMode::FromInputData) \
	op(EPCGDataCountMode::Fixed) 

enum class EPCGDataCountMode : uint8;
template<> struct TIsUEnumClass<EPCGDataCountMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGDataCountMode>();
// ********** End Enum EPCGDataCountMode ***********************************************************

// ********** Begin Enum EPCGElementCountMode ******************************************************
#define FOREACH_ENUM_EPCGELEMENTCOUNTMODE(op) \
	op(EPCGElementCountMode::FromInputData) \
	op(EPCGElementCountMode::Fixed) 

enum class EPCGElementCountMode : uint8;
template<> struct TIsUEnumClass<EPCGElementCountMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGElementCountMode>();
// ********** End Enum EPCGElementCountMode ********************************************************

// ********** Begin Enum EPCGDataMultiplicity ******************************************************
#define FOREACH_ENUM_EPCGDATAMULTIPLICITY(op) \
	op(EPCGDataMultiplicity::Pairwise) \
	op(EPCGDataMultiplicity::CartesianProduct) 

enum class EPCGDataMultiplicity : uint8;
template<> struct TIsUEnumClass<EPCGDataMultiplicity> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGDataMultiplicity>();
// ********** End Enum EPCGDataMultiplicity ********************************************************

// ********** Begin Enum EPCGElementMultiplicity ***************************************************
#define FOREACH_ENUM_EPCGELEMENTMULTIPLICITY(op) \
	op(EPCGElementMultiplicity::Product) \
	op(EPCGElementMultiplicity::Sum) 

enum class EPCGElementMultiplicity : uint8;
template<> struct TIsUEnumClass<EPCGElementMultiplicity> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGElementMultiplicity>();
// ********** End Enum EPCGElementMultiplicity *****************************************************

// ********** Begin Enum EPCGAttributeInheritanceMode **********************************************
#define FOREACH_ENUM_EPCGATTRIBUTEINHERITANCEMODE(op) \
	op(EPCGAttributeInheritanceMode::None) \
	op(EPCGAttributeInheritanceMode::CopyAttributeSetup) 

enum class EPCGAttributeInheritanceMode : uint8;
template<> struct TIsUEnumClass<EPCGAttributeInheritanceMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAttributeInheritanceMode>();
// ********** End Enum EPCGAttributeInheritanceMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
