// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGPathfindingElement.h"

#ifdef PCG_PCGPathfindingElement_generated_h
#error "PCGPathfindingElement.generated.h already included, missing '#pragma once' in PCGPathfindingElement.h"
#endif
#define PCG_PCGPathfindingElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGPathfindingSettings **************************************************
struct Z_Construct_UClass_UPCGPathfindingSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPathfindingSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPathfindingElement_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPathfindingSettings(); \
	friend struct ::Z_Construct_UClass_UPCGPathfindingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPathfindingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPathfindingSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPathfindingSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGPathfindingSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPathfindingElement_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPathfindingSettings(UPCGPathfindingSettings&&) = delete; \
	UPCGPathfindingSettings(const UPCGPathfindingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPathfindingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPathfindingSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGPathfindingSettings) \
	PCG_API virtual ~UPCGPathfindingSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPathfindingElement_h_41_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPathfindingElement_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPathfindingElement_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPathfindingElement_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPathfindingSettings;

// ********** End Class UPCGPathfindingSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPathfindingElement_h

// ********** Begin Enum EPCGPathfindingSplineMode *************************************************
#define FOREACH_ENUM_EPCGPATHFINDINGSPLINEMODE(op) \
	op(EPCGPathfindingSplineMode::Curve) \
	op(EPCGPathfindingSplineMode::Linear) 

enum class EPCGPathfindingSplineMode : uint8;
template<> struct TIsUEnumClass<EPCGPathfindingSplineMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPathfindingSplineMode>();
// ********** End Enum EPCGPathfindingSplineMode ***************************************************

// ********** Begin Enum EPCGPathfindingCostFunctionMode *******************************************
#define FOREACH_ENUM_EPCGPATHFINDINGCOSTFUNCTIONMODE(op) \
	op(EPCGPathfindingCostFunctionMode::Distance) \
	op(EPCGPathfindingCostFunctionMode::FitnessScore) \
	op(EPCGPathfindingCostFunctionMode::CostMultiplier) 

enum class EPCGPathfindingCostFunctionMode : uint8;
template<> struct TIsUEnumClass<EPCGPathfindingCostFunctionMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPathfindingCostFunctionMode>();
// ********** End Enum EPCGPathfindingCostFunctionMode *********************************************

// ********** Begin Enum EPCGPathfindingGoalMappingMode ********************************************
#define FOREACH_ENUM_EPCGPATHFINDINGGOALMAPPINGMODE(op) \
	op(EPCGPathfindingGoalMappingMode::EachStartToNearestGoal) \
	op(EPCGPathfindingGoalMappingMode::EachStartToEachGoal) \
	op(EPCGPathfindingGoalMappingMode::EachStartToPairwiseGoal) 

enum class EPCGPathfindingGoalMappingMode : uint8;
template<> struct TIsUEnumClass<EPCGPathfindingGoalMappingMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPathfindingGoalMappingMode>();
// ********** End Enum EPCGPathfindingGoalMappingMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
