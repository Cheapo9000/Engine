// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGSplineInteriorSurfaceData.h"

#ifdef PCG_PCGSplineInteriorSurfaceData_generated_h
#error "PCGSplineInteriorSurfaceData.generated.h already included, missing '#pragma once' in PCGSplineInteriorSurfaceData.h"
#endif
#define PCG_PCGSplineInteriorSurfaceData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSplineInteriorSurfaceData ********************************************
struct Z_Construct_UClass_UPCGSplineInteriorSurfaceData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSplineInteriorSurfaceData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineInteriorSurfaceData_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSplineInteriorSurfaceData(); \
	friend struct ::Z_Construct_UClass_UPCGSplineInteriorSurfaceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSplineInteriorSurfaceData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSplineInteriorSurfaceData, UPCGSurfaceData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSplineInteriorSurfaceData_NoRegister) \
	DECLARE_SERIALIZER(UPCGSplineInteriorSurfaceData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineInteriorSurfaceData_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSplineInteriorSurfaceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSplineInteriorSurfaceData(UPCGSplineInteriorSurfaceData&&) = delete; \
	UPCGSplineInteriorSurfaceData(const UPCGSplineInteriorSurfaceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSplineInteriorSurfaceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSplineInteriorSurfaceData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSplineInteriorSurfaceData) \
	PCG_API virtual ~UPCGSplineInteriorSurfaceData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineInteriorSurfaceData_h_17_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineInteriorSurfaceData_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineInteriorSurfaceData_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineInteriorSurfaceData_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSplineInteriorSurfaceData;

// ********** End Class UPCGSplineInteriorSurfaceData **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGSplineInteriorSurfaceData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
