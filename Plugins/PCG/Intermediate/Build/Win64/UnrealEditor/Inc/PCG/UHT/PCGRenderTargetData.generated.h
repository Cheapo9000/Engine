// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGRenderTargetData.h"

#ifdef PCG_PCGRenderTargetData_generated_h
#error "PCGRenderTargetData.generated.h already included, missing '#pragma once' in PCGRenderTargetData.h"
#endif
#define PCG_PCGRenderTargetData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;

// ********** Begin ScriptStruct FPCGDataTypeInfoRenderTarget2D ************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoRenderTarget2D_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoRenderTarget2D_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoBaseTexture2D Super;


struct FPCGDataTypeInfoRenderTarget2D;
// ********** End ScriptStruct FPCGDataTypeInfoRenderTarget2D **************************************

// ********** Begin Class UPCGRenderTargetData *****************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_UPCGRenderTargetData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGRenderTargetData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGRenderTargetData(); \
	friend struct ::Z_Construct_UClass_UPCGRenderTargetData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGRenderTargetData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGRenderTargetData, UPCGBaseTextureData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGRenderTargetData_NoRegister) \
	DECLARE_SERIALIZER(UPCGRenderTargetData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGRenderTargetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGRenderTargetData(UPCGRenderTargetData&&) = delete; \
	UPCGRenderTargetData(const UPCGRenderTargetData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGRenderTargetData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGRenderTargetData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGRenderTargetData) \
	PCG_API virtual ~UPCGRenderTargetData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_24_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGRenderTargetData;

// ********** End Class UPCGRenderTargetData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGRenderTargetData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
