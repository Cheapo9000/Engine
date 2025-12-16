// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpatialAlgo/PCGOctreeQueries.h"

#ifdef PCG_PCGOctreeQueries_generated_h
#error "PCGOctreeQueries.generated.h already included, missing '#pragma once' in PCGOctreeQueries.h"
#endif
#define PCG_PCGOctreeQueries_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGPointData;
struct FPCGPoint;

// ********** Begin Class UPCGOctreeQueries ********************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFarthestPointFromOtherPoint); \
	DECLARE_FUNCTION(execGetFarthestPoint); \
	DECLARE_FUNCTION(execGetClosestPointFromOtherPoint); \
	DECLARE_FUNCTION(execGetClosestPoint); \
	DECLARE_FUNCTION(execGetPointsInsideSphere); \
	DECLARE_FUNCTION(execGetPointsInsideBounds);


struct Z_Construct_UClass_UPCGOctreeQueries_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGOctreeQueries_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGOctreeQueries(); \
	friend struct ::Z_Construct_UClass_UPCGOctreeQueries_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGOctreeQueries_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGOctreeQueries, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGOctreeQueries_NoRegister) \
	DECLARE_SERIALIZER(UPCGOctreeQueries)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGOctreeQueries(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGOctreeQueries(UPCGOctreeQueries&&) = delete; \
	UPCGOctreeQueries(const UPCGOctreeQueries&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGOctreeQueries); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGOctreeQueries); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGOctreeQueries) \
	PCG_API virtual ~UPCGOctreeQueries();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGOctreeQueries;

// ********** End Class UPCGOctreeQueries **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
