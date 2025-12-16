// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGPolygon2DInteriorData.h"

#ifdef PCG_PCGPolygon2DInteriorData_generated_h
#error "PCGPolygon2DInteriorData.generated.h already included, missing '#pragma once' in PCGPolygon2DInteriorData.h"
#endif
#define PCG_PCGPolygon2DInteriorData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGPolygon2DInteriorSurfaceData *****************************************
struct Z_Construct_UClass_UPCGPolygon2DInteriorSurfaceData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPolygon2DInteriorSurfaceData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DInteriorData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPolygon2DInteriorSurfaceData(); \
	friend struct ::Z_Construct_UClass_UPCGPolygon2DInteriorSurfaceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPolygon2DInteriorSurfaceData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPolygon2DInteriorSurfaceData, UPCGSurfaceData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPolygon2DInteriorSurfaceData_NoRegister) \
	DECLARE_SERIALIZER(UPCGPolygon2DInteriorSurfaceData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DInteriorData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGPolygon2DInteriorSurfaceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPolygon2DInteriorSurfaceData(UPCGPolygon2DInteriorSurfaceData&&) = delete; \
	UPCGPolygon2DInteriorSurfaceData(const UPCGPolygon2DInteriorSurfaceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPolygon2DInteriorSurfaceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPolygon2DInteriorSurfaceData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPolygon2DInteriorSurfaceData) \
	PCG_API virtual ~UPCGPolygon2DInteriorSurfaceData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DInteriorData_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DInteriorData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DInteriorData_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DInteriorData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPolygon2DInteriorSurfaceData;

// ********** End Class UPCGPolygon2DInteriorSurfaceData *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DInteriorData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
