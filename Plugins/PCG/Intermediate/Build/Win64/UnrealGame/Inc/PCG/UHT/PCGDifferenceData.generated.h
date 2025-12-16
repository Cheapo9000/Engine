// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGDifferenceData.h"

#ifdef PCG_PCGDifferenceData_generated_h
#error "PCGDifferenceData.generated.h already included, missing '#pragma once' in PCGDifferenceData.h"
#endif
#define PCG_PCGDifferenceData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGSpatialData;
enum class EPCGDifferenceDensityFunction : uint8;

// ********** Begin Class UPCGDifferenceData *******************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDensityFunction); \
	DECLARE_FUNCTION(execK2_AddDifference); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_UPCGDifferenceData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDifferenceData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDifferenceData(); \
	friend struct ::Z_Construct_UClass_UPCGDifferenceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDifferenceData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDifferenceData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDifferenceData_NoRegister) \
	DECLARE_SERIALIZER(UPCGDifferenceData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDifferenceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDifferenceData(UPCGDifferenceData&&) = delete; \
	UPCGDifferenceData(const UPCGDifferenceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDifferenceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDifferenceData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDifferenceData) \
	PCG_API virtual ~UPCGDifferenceData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_31_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDifferenceData;

// ********** End Class UPCGDifferenceData *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h

// ********** Begin Enum EPCGDifferenceDensityFunction *********************************************
#define FOREACH_ENUM_EPCGDIFFERENCEDENSITYFUNCTION(op) \
	op(EPCGDifferenceDensityFunction::Minimum) \
	op(EPCGDifferenceDensityFunction::ClampedSubstraction) \
	op(EPCGDifferenceDensityFunction::Binary) 

enum class EPCGDifferenceDensityFunction : uint8;
template<> struct TIsUEnumClass<EPCGDifferenceDensityFunction> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGDifferenceDensityFunction>();
// ********** End Enum EPCGDifferenceDensityFunction ***********************************************

// ********** Begin Enum EPCGDifferenceMode ********************************************************
#define FOREACH_ENUM_EPCGDIFFERENCEMODE(op) \
	op(EPCGDifferenceMode::Inferred) \
	op(EPCGDifferenceMode::Continuous) \
	op(EPCGDifferenceMode::Discrete) 

enum class EPCGDifferenceMode : uint8;
template<> struct TIsUEnumClass<EPCGDifferenceMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGDifferenceMode>();
// ********** End Enum EPCGDifferenceMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
