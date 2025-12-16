// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/Data/PCGRawBufferData.h"

#ifdef PCG_PCGRawBufferData_generated_h
#error "PCGRawBufferData.generated.h already included, missing '#pragma once' in PCGRawBufferData.h"
#endif
#define PCG_PCGRawBufferData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDataTypeInfoRawBuffer *****************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoRawBuffer_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Data_PCGRawBufferData_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoRawBuffer_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfo Super;


struct FPCGDataTypeInfoRawBuffer;
// ********** End ScriptStruct FPCGDataTypeInfoRawBuffer *******************************************

// ********** Begin Class UPCGRawBufferData ********************************************************
struct Z_Construct_UClass_UPCGRawBufferData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGRawBufferData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Data_PCGRawBufferData_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGRawBufferData(); \
	friend struct ::Z_Construct_UClass_UPCGRawBufferData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGRawBufferData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGRawBufferData, UPCGData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGRawBufferData_NoRegister) \
	DECLARE_SERIALIZER(UPCGRawBufferData)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Data_PCGRawBufferData_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGRawBufferData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGRawBufferData(UPCGRawBufferData&&) = delete; \
	UPCGRawBufferData(const UPCGRawBufferData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGRawBufferData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGRawBufferData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGRawBufferData) \
	PCG_API virtual ~UPCGRawBufferData();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Data_PCGRawBufferData_h_22_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Data_PCGRawBufferData_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Data_PCGRawBufferData_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Data_PCGRawBufferData_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGRawBufferData;

// ********** End Class UPCGRawBufferData **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Data_PCGRawBufferData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
