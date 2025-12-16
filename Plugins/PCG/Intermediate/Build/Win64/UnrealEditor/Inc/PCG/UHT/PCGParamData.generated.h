// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGParamData.h"

#ifdef PCG_PCGParamData_generated_h
#error "PCGParamData.generated.h already included, missing '#pragma once' in PCGParamData.h"
#endif
#define PCG_PCGParamData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGParamData;

// ********** Begin ScriptStruct FPCGDataTypeInfoParam *********************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoParam_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoParam_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfo Super;


struct FPCGDataTypeInfoParam;
// ********** End ScriptStruct FPCGDataTypeInfoParam ***********************************************

// ********** Begin Class UPCGParamData ************************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_FilterParamsByKey); \
	DECLARE_FUNCTION(execK2_FilterParamsByName); \
	DECLARE_FUNCTION(execFindOrAddMetadataKey); \
	DECLARE_FUNCTION(execFindMetadataKey);


struct Z_Construct_UClass_UPCGParamData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGParamData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGParamData(); \
	friend struct ::Z_Construct_UClass_UPCGParamData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGParamData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGParamData, UPCGData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGParamData_NoRegister) \
	DECLARE_SERIALIZER(UPCGParamData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGParamData(UPCGParamData&&) = delete; \
	UPCGParamData(const UPCGParamData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGParamData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGParamData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGParamData) \
	PCG_API virtual ~UPCGParamData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h_37_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGParamData;

// ********** End Class UPCGParamData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
