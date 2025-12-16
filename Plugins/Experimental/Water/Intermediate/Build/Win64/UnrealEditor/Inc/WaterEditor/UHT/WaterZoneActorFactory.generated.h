// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterZoneActorFactory.h"

#ifdef WATEREDITOR_WaterZoneActorFactory_generated_h
#error "WaterZoneActorFactory.generated.h already included, missing '#pragma once' in WaterZoneActorFactory.h"
#endif
#define WATEREDITOR_WaterZoneActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterZoneActorFactory ***************************************************
struct Z_Construct_UClass_UWaterZoneActorFactory_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterZoneActorFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUWaterZoneActorFactory(); \
	friend struct ::Z_Construct_UClass_UWaterZoneActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterZoneActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterZoneActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterZoneActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UWaterZoneActorFactory)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATEREDITOR_API UWaterZoneActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterZoneActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATEREDITOR_API, UWaterZoneActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterZoneActorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterZoneActorFactory(UWaterZoneActorFactory&&) = delete; \
	UWaterZoneActorFactory(const UWaterZoneActorFactory&) = delete; \
	WATEREDITOR_API virtual ~UWaterZoneActorFactory();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h_7_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h_10_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterZoneActorFactory;

// ********** End Class UWaterZoneActorFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
