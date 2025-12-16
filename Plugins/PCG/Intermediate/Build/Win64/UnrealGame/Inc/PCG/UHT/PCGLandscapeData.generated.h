// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGLandscapeData.h"

#ifdef PCG_PCGLandscapeData_generated_h
#error "PCGLandscapeData.generated.h already included, missing '#pragma once' in PCGLandscapeData.h"
#endif
#define PCG_PCGLandscapeData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGLandscapeDataProps ********************************************
struct Z_Construct_UScriptStruct_FPCGLandscapeDataProps_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGLandscapeDataProps_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGLandscapeDataProps;
// ********** End ScriptStruct FPCGLandscapeDataProps **********************************************

// ********** Begin ScriptStruct FPCGDataTypeInfoLandscape *****************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscape_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscape_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoSurface Super;


struct FPCGDataTypeInfoLandscape;
// ********** End ScriptStruct FPCGDataTypeInfoLandscape *******************************************

// ********** Begin Class UPCGLandscapeData ********************************************************
struct Z_Construct_UClass_UPCGLandscapeData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGLandscapeData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLandscapeData(); \
	friend struct ::Z_Construct_UClass_UPCGLandscapeData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGLandscapeData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGLandscapeData, UPCGSurfaceData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGLandscapeData_NoRegister) \
	DECLARE_SERIALIZER(UPCGLandscapeData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGLandscapeData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGLandscapeData(UPCGLandscapeData&&) = delete; \
	UPCGLandscapeData(const UPCGLandscapeData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGLandscapeData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLandscapeData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGLandscapeData) \
	PCG_API virtual ~UPCGLandscapeData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_67_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGLandscapeData;

// ********** End Class UPCGLandscapeData **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
