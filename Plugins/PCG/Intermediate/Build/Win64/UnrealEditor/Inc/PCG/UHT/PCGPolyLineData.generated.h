// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGPolyLineData.h"

#ifdef PCG_PCGPolyLineData_generated_h
#error "PCGPolyLineData.generated.h already included, missing '#pragma once' in PCGPolyLineData.h"
#endif
#define PCG_PCGPolyLineData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGMetadata;
struct FPCGPoint;

// ********** Begin ScriptStruct FPCGDataTypeInfoPolyline ******************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoPolyline_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoPolyline_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoConcrete Super;


struct FPCGDataTypeInfoPolyline;
// ********** End ScriptStruct FPCGDataTypeInfoPolyline ********************************************

// ********** Begin Class UPCGPolyLineData *********************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteMetadataToPoint); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execGetDistanceAtSegmentStart); \
	DECLARE_FUNCTION(execGetTangentsAtSegmentStart); \
	DECLARE_FUNCTION(execGetInputKeyAtAlpha); \
	DECLARE_FUNCTION(execGetInputKeyAtDistance); \
	DECLARE_FUNCTION(execGetAlphaAtDistance); \
	DECLARE_FUNCTION(execGetCurvatureAtDistance); \
	DECLARE_FUNCTION(execGetLocationAtDistance); \
	DECLARE_FUNCTION(execK2_GetTransformAtDistance); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execGetTransformAtAlpha); \
	DECLARE_FUNCTION(execGetLocationAtAlpha); \
	DECLARE_FUNCTION(execGetSegmentLength); \
	DECLARE_FUNCTION(execGetNumVertices); \
	DECLARE_FUNCTION(execGetNumSegments); \
	DECLARE_FUNCTION(execGetTransform);


struct Z_Construct_UClass_UPCGPolyLineData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPolyLineData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPolyLineData(); \
	friend struct ::Z_Construct_UClass_UPCGPolyLineData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPolyLineData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPolyLineData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPolyLineData_NoRegister) \
	DECLARE_SERIALIZER(UPCGPolyLineData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGPolyLineData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPolyLineData(UPCGPolyLineData&&) = delete; \
	UPCGPolyLineData(const UPCGPolyLineData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPolyLineData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPolyLineData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPolyLineData) \
	PCG_API virtual ~UPCGPolyLineData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPolyLineData;

// ********** End Class UPCGPolyLineData ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
