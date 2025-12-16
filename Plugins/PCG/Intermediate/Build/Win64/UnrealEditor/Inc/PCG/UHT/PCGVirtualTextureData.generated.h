// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGVirtualTextureData.h"

#ifdef PCG_PCGVirtualTextureData_generated_h
#error "PCGVirtualTextureData.generated.h already included, missing '#pragma once' in PCGVirtualTextureData.h"
#endif
#define PCG_PCGVirtualTextureData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDataTypeInfoVirtualTexture ************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoVirtualTexture_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoVirtualTexture_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoSurface Super;


struct FPCGDataTypeInfoVirtualTexture;
// ********** End ScriptStruct FPCGDataTypeInfoVirtualTexture **************************************

// ********** Begin Class UPCGVirtualTextureData ***************************************************
struct Z_Construct_UClass_UPCGVirtualTextureData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGVirtualTextureData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGVirtualTextureData(); \
	friend struct ::Z_Construct_UClass_UPCGVirtualTextureData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGVirtualTextureData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGVirtualTextureData, UPCGSurfaceData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGVirtualTextureData_NoRegister) \
	DECLARE_SERIALIZER(UPCGVirtualTextureData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGVirtualTextureData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGVirtualTextureData(UPCGVirtualTextureData&&) = delete; \
	UPCGVirtualTextureData(const UPCGVirtualTextureData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGVirtualTextureData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGVirtualTextureData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGVirtualTextureData) \
	NO_API virtual ~UPCGVirtualTextureData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h_20_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGVirtualTextureData;

// ********** End Class UPCGVirtualTextureData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGVirtualTextureData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
