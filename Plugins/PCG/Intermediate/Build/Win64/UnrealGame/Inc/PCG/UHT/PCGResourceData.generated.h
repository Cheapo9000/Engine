// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGResourceData.h"

#ifdef PCG_PCGResourceData_generated_h
#error "PCGResourceData.generated.h already included, missing '#pragma once' in PCGResourceData.h"
#endif
#define PCG_PCGResourceData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDataTypeInfoResource ******************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoResource_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoResource_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfo Super;


struct FPCGDataTypeInfoResource;
// ********** End ScriptStruct FPCGDataTypeInfoResource ********************************************

// ********** Begin Class UPCGResourceData *********************************************************
struct Z_Construct_UClass_UPCGResourceData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGResourceData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGResourceData(); \
	friend struct ::Z_Construct_UClass_UPCGResourceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGResourceData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGResourceData, UPCGData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGResourceData_NoRegister) \
	DECLARE_SERIALIZER(UPCGResourceData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGResourceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGResourceData(UPCGResourceData&&) = delete; \
	UPCGResourceData(const UPCGResourceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGResourceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGResourceData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGResourceData) \
	PCG_API virtual ~UPCGResourceData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h_26_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGResourceData;

// ********** End Class UPCGResourceData ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGResourceData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
