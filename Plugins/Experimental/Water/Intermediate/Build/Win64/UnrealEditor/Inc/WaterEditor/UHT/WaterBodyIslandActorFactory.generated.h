// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyIslandActorFactory.h"

#ifdef WATEREDITOR_WaterBodyIslandActorFactory_generated_h
#error "WaterBodyIslandActorFactory.generated.h already included, missing '#pragma once' in WaterBodyIslandActorFactory.h"
#endif
#define WATEREDITOR_WaterBodyIslandActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterBodyIslandActorFactory *********************************************
struct Z_Construct_UClass_UWaterBodyIslandActorFactory_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyIslandActorFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyIslandActorFactory(); \
	friend struct ::Z_Construct_UClass_UWaterBodyIslandActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterBodyIslandActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyIslandActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterBodyIslandActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyIslandActorFactory)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATEREDITOR_API UWaterBodyIslandActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyIslandActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATEREDITOR_API, UWaterBodyIslandActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyIslandActorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyIslandActorFactory(UWaterBodyIslandActorFactory&&) = delete; \
	UWaterBodyIslandActorFactory(const UWaterBodyIslandActorFactory&) = delete; \
	WATEREDITOR_API virtual ~UWaterBodyIslandActorFactory();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h_7_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h_10_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyIslandActorFactory;

// ********** End Class UWaterBodyIslandActorFactory ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
