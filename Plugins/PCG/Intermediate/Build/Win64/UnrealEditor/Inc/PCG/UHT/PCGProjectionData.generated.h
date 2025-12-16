// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGProjectionData.h"

#ifdef PCG_PCGProjectionData_generated_h
#error "PCGProjectionData.generated.h already included, missing '#pragma once' in PCGProjectionData.h"
#endif
#define PCG_PCGProjectionData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGProjectionData *******************************************************
struct Z_Construct_UClass_UPCGProjectionData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGProjectionData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGProjectionData(); \
	friend struct ::Z_Construct_UClass_UPCGProjectionData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGProjectionData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGProjectionData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGProjectionData_NoRegister) \
	DECLARE_SERIALIZER(UPCGProjectionData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGProjectionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGProjectionData(UPCGProjectionData&&) = delete; \
	UPCGProjectionData(const UPCGProjectionData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGProjectionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGProjectionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGProjectionData) \
	PCG_API virtual ~UPCGProjectionData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h_14_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGProjectionData;

// ********** End Class UPCGProjectionData *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
