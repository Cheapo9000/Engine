// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyIslandActor.h"

#ifdef WATER_WaterBodyIslandActor_generated_h
#error "WaterBodyIslandActor.generated.h already included, missing '#pragma once' in WaterBodyIslandActor.h"
#endif
#define WATER_WaterBodyIslandActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWaterSplineComponent;

// ********** Begin Class AWaterBodyIsland *********************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_47_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetWaterSpline);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_47_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWaterBodyIsland, WATER_API)


struct Z_Construct_UClass_AWaterBodyIsland_Statics;
WATER_API UClass* Z_Construct_UClass_AWaterBodyIsland_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_47_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBodyIsland(); \
	friend struct ::Z_Construct_UClass_AWaterBodyIsland_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_AWaterBodyIsland_NoRegister(); \
public: \
	DECLARE_CLASS2(AWaterBodyIsland, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_AWaterBodyIsland_NoRegister) \
	DECLARE_SERIALIZER(AWaterBodyIsland) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_47_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AWaterBodyIsland*>(this); }


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API AWaterBodyIsland(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBodyIsland) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, AWaterBodyIsland); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBodyIsland); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWaterBodyIsland(AWaterBodyIsland&&) = delete; \
	AWaterBodyIsland(const AWaterBodyIsland&) = delete; \
	WATER_API virtual ~AWaterBodyIsland();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_47_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_47_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWaterBodyIsland;

// ********** End Class AWaterBodyIsland ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
