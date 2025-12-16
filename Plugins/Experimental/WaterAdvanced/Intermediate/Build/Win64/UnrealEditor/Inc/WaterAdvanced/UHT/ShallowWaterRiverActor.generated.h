// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShallowWaterRiverActor.h"

#ifdef WATERADVANCED_ShallowWaterRiverActor_generated_h
#error "ShallowWaterRiverActor.generated.h already included, missing '#pragma once' in ShallowWaterRiverActor.h"
#endif
#define WATERADVANCED_ShallowWaterRiverActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2DArray;

// ********** Begin Class UShallowWaterRiverComponent **********************************************
#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_40_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetPaused);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_40_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execOnWaterInfoTextureArrayCreated);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_40_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UShallowWaterRiverComponent_Statics;
WATERADVANCED_API UClass* Z_Construct_UClass_UShallowWaterRiverComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUShallowWaterRiverComponent(); \
	friend struct ::Z_Construct_UClass_UShallowWaterRiverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATERADVANCED_API UClass* ::Z_Construct_UClass_UShallowWaterRiverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UShallowWaterRiverComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterAdvanced"), Z_Construct_UClass_UShallowWaterRiverComponent_NoRegister) \
	DECLARE_SERIALIZER(UShallowWaterRiverComponent)


#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATERADVANCED_API UShallowWaterRiverComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShallowWaterRiverComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATERADVANCED_API, UShallowWaterRiverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShallowWaterRiverComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShallowWaterRiverComponent(UShallowWaterRiverComponent&&) = delete; \
	UShallowWaterRiverComponent(const UShallowWaterRiverComponent&) = delete; \
	WATERADVANCED_API virtual ~UShallowWaterRiverComponent();


#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_37_PROLOG
#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_40_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_40_RPC_WRAPPERS_EOD \
	FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_40_INCLASS \
	FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShallowWaterRiverComponent;

// ********** End Class UShallowWaterRiverComponent ************************************************

// ********** Begin Class AShallowWaterRiver *******************************************************
struct Z_Construct_UClass_AShallowWaterRiver_Statics;
WATERADVANCED_API UClass* Z_Construct_UClass_AShallowWaterRiver_NoRegister();

#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_238_INCLASS \
private: \
	static void StaticRegisterNativesAShallowWaterRiver(); \
	friend struct ::Z_Construct_UClass_AShallowWaterRiver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATERADVANCED_API UClass* ::Z_Construct_UClass_AShallowWaterRiver_NoRegister(); \
public: \
	DECLARE_CLASS2(AShallowWaterRiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterAdvanced"), Z_Construct_UClass_AShallowWaterRiver_NoRegister) \
	DECLARE_SERIALIZER(AShallowWaterRiver)


#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_238_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATERADVANCED_API AShallowWaterRiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShallowWaterRiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATERADVANCED_API, AShallowWaterRiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShallowWaterRiver); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShallowWaterRiver(AShallowWaterRiver&&) = delete; \
	AShallowWaterRiver(const AShallowWaterRiver&) = delete; \
	WATERADVANCED_API virtual ~AShallowWaterRiver();


#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_235_PROLOG
#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_238_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_238_INCLASS \
	FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h_238_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShallowWaterRiver;

// ********** End Class AShallowWaterRiver *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterRiverActor_h

// ********** Begin Enum EShallowWaterRenderState **************************************************
#define FOREACH_ENUM_ESHALLOWWATERRENDERSTATE(op) \
	op(WaterComponent) \
	op(WaterComponentWithBakedSim) \
	op(LiveSim) \
	op(BakedSim) \
	op(DebugRenderBottomContour) \
	op(DebugRenderFoam) 

enum EShallowWaterRenderState : int;
template<> WATERADVANCED_NON_ATTRIBUTED_API UEnum* StaticEnum<EShallowWaterRenderState>();
// ********** End Enum EShallowWaterRenderState ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
