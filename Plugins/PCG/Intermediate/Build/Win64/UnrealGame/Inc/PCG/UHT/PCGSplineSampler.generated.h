// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSplineSampler.h"

#ifdef PCG_PCGSplineSampler_generated_h
#error "PCGSplineSampler.generated.h already included, missing '#pragma once' in PCGSplineSampler.h"
#endif
#define PCG_PCGSplineSampler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGSplineSamplerParams *******************************************
struct Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSplineSamplerParams_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSplineSamplerParams;
// ********** End ScriptStruct FPCGSplineSamplerParams *********************************************

// ********** Begin Class UPCGSplineSamplerSettings ************************************************
struct Z_Construct_UClass_UPCGSplineSamplerSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSplineSamplerSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSplineSamplerSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSplineSamplerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSplineSamplerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSplineSamplerSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSplineSamplerSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSplineSamplerSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_263_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSplineSamplerSettings(UPCGSplineSamplerSettings&&) = delete; \
	UPCGSplineSamplerSettings(const UPCGSplineSamplerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSplineSamplerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSplineSamplerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGSplineSamplerSettings) \
	PCG_API virtual ~UPCGSplineSamplerSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_260_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_263_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSplineSamplerSettings;

// ********** End Class UPCGSplineSamplerSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineSampler_h

// ********** Begin Enum EPCGSplineSamplingMode ****************************************************
#define FOREACH_ENUM_EPCGSPLINESAMPLINGMODE(op) \
	op(EPCGSplineSamplingMode::Subdivision) \
	op(EPCGSplineSamplingMode::Distance) \
	op(EPCGSplineSamplingMode::NumberOfSamples) 

enum class EPCGSplineSamplingMode : uint8;
template<> struct TIsUEnumClass<EPCGSplineSamplingMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplineSamplingMode>();
// ********** End Enum EPCGSplineSamplingMode ******************************************************

// ********** Begin Enum EPCGSplineSamplingDimension ***********************************************
#define FOREACH_ENUM_EPCGSPLINESAMPLINGDIMENSION(op) \
	op(EPCGSplineSamplingDimension::OnSpline) \
	op(EPCGSplineSamplingDimension::OnHorizontal) \
	op(EPCGSplineSamplingDimension::OnVertical) \
	op(EPCGSplineSamplingDimension::OnVolume) \
	op(EPCGSplineSamplingDimension::OnInterior) 

enum class EPCGSplineSamplingDimension : uint8;
template<> struct TIsUEnumClass<EPCGSplineSamplingDimension> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplineSamplingDimension>();
// ********** End Enum EPCGSplineSamplingDimension *************************************************

// ********** Begin Enum EPCGSplineSamplingFill ****************************************************
#define FOREACH_ENUM_EPCGSPLINESAMPLINGFILL(op) \
	op(EPCGSplineSamplingFill::Fill) \
	op(EPCGSplineSamplingFill::EdgesOnly) 

enum class EPCGSplineSamplingFill : uint8;
template<> struct TIsUEnumClass<EPCGSplineSamplingFill> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplineSamplingFill>();
// ********** End Enum EPCGSplineSamplingFill ******************************************************

// ********** Begin Enum EPCGSplineSamplingInteriorOrientation *************************************
#define FOREACH_ENUM_EPCGSPLINESAMPLINGINTERIORORIENTATION(op) \
	op(EPCGSplineSamplingInteriorOrientation::Uniform) \
	op(EPCGSplineSamplingInteriorOrientation::FollowCurvature) 

enum class EPCGSplineSamplingInteriorOrientation : uint8;
template<> struct TIsUEnumClass<EPCGSplineSamplingInteriorOrientation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplineSamplingInteriorOrientation>();
// ********** End Enum EPCGSplineSamplingInteriorOrientation ***************************************

// ********** Begin Enum EPCGSplineSamplingSeedingMode *********************************************
#define FOREACH_ENUM_EPCGSPLINESAMPLINGSEEDINGMODE(op) \
	op(EPCGSplineSamplingSeedingMode::SeedFromPosition) \
	op(EPCGSplineSamplingSeedingMode::SeedFromIndex) 

enum class EPCGSplineSamplingSeedingMode : uint8;
template<> struct TIsUEnumClass<EPCGSplineSamplingSeedingMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplineSamplingSeedingMode>();
// ********** End Enum EPCGSplineSamplingSeedingMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
