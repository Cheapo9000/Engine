// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGUnionData.h"

#ifdef PCG_PCGUnionData_generated_h
#error "PCGUnionData.generated.h already included, missing '#pragma once' in PCGUnionData.h"
#endif
#define PCG_PCGUnionData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGSpatialData;

// ********** Begin Class UPCGUnionData ************************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddData); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_UPCGUnionData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGUnionData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGUnionData(); \
	friend struct ::Z_Construct_UClass_UPCGUnionData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGUnionData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGUnionData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGUnionData_NoRegister) \
	DECLARE_SERIALIZER(UPCGUnionData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGUnionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGUnionData(UPCGUnionData&&) = delete; \
	UPCGUnionData(const UPCGUnionData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGUnionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGUnionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGUnionData) \
	PCG_API virtual ~UPCGUnionData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_27_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGUnionData;

// ********** End Class UPCGUnionData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h

// ********** Begin Enum EPCGUnionType *************************************************************
#define FOREACH_ENUM_EPCGUNIONTYPE(op) \
	op(EPCGUnionType::LeftToRightPriority) \
	op(EPCGUnionType::RightToLeftPriority) \
	op(EPCGUnionType::KeepAll) 

enum class EPCGUnionType : uint8;
template<> struct TIsUEnumClass<EPCGUnionType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGUnionType>();
// ********** End Enum EPCGUnionType ***************************************************************

// ********** Begin Enum EPCGUnionDensityFunction **************************************************
#define FOREACH_ENUM_EPCGUNIONDENSITYFUNCTION(op) \
	op(EPCGUnionDensityFunction::Maximum) \
	op(EPCGUnionDensityFunction::ClampedAddition) \
	op(EPCGUnionDensityFunction::Binary) 

enum class EPCGUnionDensityFunction : uint8;
template<> struct TIsUEnumClass<EPCGUnionDensityFunction> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGUnionDensityFunction>();
// ********** End Enum EPCGUnionDensityFunction ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
