// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGLandscapeSplineData.h"

#ifdef PCG_PCGLandscapeSplineData_generated_h
#error "PCGLandscapeSplineData.generated.h already included, missing '#pragma once' in PCGLandscapeSplineData.h"
#endif
#define PCG_PCGLandscapeSplineData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDataTypeInfoLandscapeSpline ***********************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscapeSpline_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscapeSpline_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoPolyline Super;


struct FPCGDataTypeInfoLandscapeSpline;
// ********** End ScriptStruct FPCGDataTypeInfoLandscapeSpline *************************************

// ********** Begin Class UPCGLandscapeSplineData **************************************************
struct Z_Construct_UClass_UPCGLandscapeSplineData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGLandscapeSplineData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLandscapeSplineData(); \
	friend struct ::Z_Construct_UClass_UPCGLandscapeSplineData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGLandscapeSplineData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGLandscapeSplineData, UPCGPolyLineData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGLandscapeSplineData_NoRegister) \
	DECLARE_SERIALIZER(UPCGLandscapeSplineData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGLandscapeSplineData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGLandscapeSplineData(UPCGLandscapeSplineData&&) = delete; \
	UPCGLandscapeSplineData(const UPCGLandscapeSplineData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGLandscapeSplineData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLandscapeSplineData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGLandscapeSplineData) \
	PCG_API virtual ~UPCGLandscapeSplineData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_23_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGLandscapeSplineData;

// ********** End Class UPCGLandscapeSplineData ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
