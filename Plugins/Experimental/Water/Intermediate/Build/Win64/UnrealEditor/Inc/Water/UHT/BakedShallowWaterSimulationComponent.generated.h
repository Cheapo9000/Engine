// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BakedShallowWaterSimulationComponent.h"

#ifdef WATER_BakedShallowWaterSimulationComponent_generated_h
#error "BakedShallowWaterSimulationComponent.generated.h already included, missing '#pragma once' in BakedShallowWaterSimulationComponent.h"
#endif
#define WATER_BakedShallowWaterSimulationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FShallowWaterSimulationGrid ***************************************
struct Z_Construct_UScriptStruct_FShallowWaterSimulationGrid_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BakedShallowWaterSimulationComponent_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FShallowWaterSimulationGrid_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


struct FShallowWaterSimulationGrid;
// ********** End ScriptStruct FShallowWaterSimulationGrid *****************************************

// ********** Begin Class UBakedShallowWaterSimulationComponent ************************************
struct Z_Construct_UClass_UBakedShallowWaterSimulationComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UBakedShallowWaterSimulationComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BakedShallowWaterSimulationComponent_h_124_INCLASS \
private: \
	static void StaticRegisterNativesUBakedShallowWaterSimulationComponent(); \
	friend struct ::Z_Construct_UClass_UBakedShallowWaterSimulationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UBakedShallowWaterSimulationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBakedShallowWaterSimulationComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UBakedShallowWaterSimulationComponent_NoRegister) \
	DECLARE_SERIALIZER(UBakedShallowWaterSimulationComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BakedShallowWaterSimulationComponent_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UBakedShallowWaterSimulationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBakedShallowWaterSimulationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UBakedShallowWaterSimulationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBakedShallowWaterSimulationComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBakedShallowWaterSimulationComponent(UBakedShallowWaterSimulationComponent&&) = delete; \
	UBakedShallowWaterSimulationComponent(const UBakedShallowWaterSimulationComponent&) = delete; \
	WATER_API virtual ~UBakedShallowWaterSimulationComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BakedShallowWaterSimulationComponent_h_121_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BakedShallowWaterSimulationComponent_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BakedShallowWaterSimulationComponent_h_124_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BakedShallowWaterSimulationComponent_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBakedShallowWaterSimulationComponent;

// ********** End Class UBakedShallowWaterSimulationComponent **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BakedShallowWaterSimulationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
