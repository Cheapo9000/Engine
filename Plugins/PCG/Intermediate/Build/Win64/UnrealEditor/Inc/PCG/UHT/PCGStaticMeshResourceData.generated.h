// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGStaticMeshResourceData.h"

#ifdef PCG_PCGStaticMeshResourceData_generated_h
#error "PCGStaticMeshResourceData.generated.h already included, missing '#pragma once' in PCGStaticMeshResourceData.h"
#endif
#define PCG_PCGStaticMeshResourceData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDataTypeInfoStaticMeshResource ********************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoStaticMeshResource_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoStaticMeshResource_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoResource Super;


struct FPCGDataTypeInfoStaticMeshResource;
// ********** End ScriptStruct FPCGDataTypeInfoStaticMeshResource **********************************

// ********** Begin Class UPCGStaticMeshResourceData ***********************************************
struct Z_Construct_UClass_UPCGStaticMeshResourceData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGStaticMeshResourceData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGStaticMeshResourceData(); \
	friend struct ::Z_Construct_UClass_UPCGStaticMeshResourceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGStaticMeshResourceData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGStaticMeshResourceData, UPCGResourceData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGStaticMeshResourceData_NoRegister) \
	DECLARE_SERIALIZER(UPCGStaticMeshResourceData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGStaticMeshResourceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGStaticMeshResourceData(UPCGStaticMeshResourceData&&) = delete; \
	UPCGStaticMeshResourceData(const UPCGStaticMeshResourceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGStaticMeshResourceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGStaticMeshResourceData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGStaticMeshResourceData) \
	PCG_API virtual ~UPCGStaticMeshResourceData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h_26_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGStaticMeshResourceData;

// ********** End Class UPCGStaticMeshResourceData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGStaticMeshResourceData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
