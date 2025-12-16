// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGIntersectionData.h"

#ifdef PCG_PCGIntersectionData_generated_h
#error "PCGIntersectionData.generated.h already included, missing '#pragma once' in PCGIntersectionData.h"
#endif
#define PCG_PCGIntersectionData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGSpatialData;

// ********** Begin Class UPCGIntersectionData *****************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_UPCGIntersectionData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGIntersectionData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGIntersectionData(); \
	friend struct ::Z_Construct_UClass_UPCGIntersectionData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGIntersectionData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGIntersectionData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGIntersectionData_NoRegister) \
	DECLARE_SERIALIZER(UPCGIntersectionData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGIntersectionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGIntersectionData(UPCGIntersectionData&&) = delete; \
	UPCGIntersectionData(const UPCGIntersectionData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGIntersectionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGIntersectionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGIntersectionData) \
	PCG_API virtual ~UPCGIntersectionData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_21_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGIntersectionData;

// ********** End Class UPCGIntersectionData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h

// ********** Begin Enum EPCGIntersectionDensityFunction *******************************************
#define FOREACH_ENUM_EPCGINTERSECTIONDENSITYFUNCTION(op) \
	op(EPCGIntersectionDensityFunction::Multiply) \
	op(EPCGIntersectionDensityFunction::Minimum) 

enum class EPCGIntersectionDensityFunction : uint8;
template<> struct TIsUEnumClass<EPCGIntersectionDensityFunction> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGIntersectionDensityFunction>();
// ********** End Enum EPCGIntersectionDensityFunction *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
