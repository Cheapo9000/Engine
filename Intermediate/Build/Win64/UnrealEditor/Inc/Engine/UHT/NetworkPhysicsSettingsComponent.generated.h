// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/NetworkPhysicsSettingsComponent.h"

#ifdef ENGINE_NetworkPhysicsSettingsComponent_generated_h
#error "NetworkPhysicsSettingsComponent.generated.h already included, missing '#pragma once' in NetworkPhysicsSettingsComponent.h"
#endif
#define ENGINE_NetworkPhysicsSettingsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class EComponentPhysicsStateChange : uint8;

// ********** Begin ScriptStruct FNetworkPhysicsSettings *******************************************
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkPhysicsSettings;
// ********** End ScriptStruct FNetworkPhysicsSettings *********************************************

// ********** Begin ScriptStruct FNetworkPhysicsSettingsDefaultReplication *************************
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkPhysicsSettingsDefaultReplication;
// ********** End ScriptStruct FNetworkPhysicsSettingsDefaultReplication ***************************

// ********** Begin ScriptStruct FNetworkPhysicsSettingsPredictiveInterpolation ********************
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_155_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkPhysicsSettingsPredictiveInterpolation;
// ********** End ScriptStruct FNetworkPhysicsSettingsPredictiveInterpolation **********************

// ********** Begin ScriptStruct FNetworkPhysicsSettingsResimulationErrorCorrection ****************
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_307_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulationErrorCorrection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkPhysicsSettingsResimulationErrorCorrection;
// ********** End ScriptStruct FNetworkPhysicsSettingsResimulationErrorCorrection ******************

// ********** Begin ScriptStruct FNetworkPhysicsSettingsResimulation *******************************
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_375_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkPhysicsSettingsResimulation;
// ********** End ScriptStruct FNetworkPhysicsSettingsResimulation *********************************

// ********** Begin ScriptStruct FNetworkPhysicsSettingsNetworkPhysicsComponent ********************
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_493_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkPhysicsSettingsNetworkPhysicsComponent;
// ********** End ScriptStruct FNetworkPhysicsSettingsNetworkPhysicsComponent **********************

// ********** Begin ScriptStruct FNetworkPhysicsSettingsData ***************************************
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_649_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsSettingsData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkPhysicsSettingsData;
// ********** End ScriptStruct FNetworkPhysicsSettingsData *****************************************

// ********** Begin Class UNetworkPhysicsSettingsDataAsset *****************************************
struct Z_Construct_UClass_UNetworkPhysicsSettingsDataAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsSettingsDataAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_677_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkPhysicsSettingsDataAsset(); \
	friend struct ::Z_Construct_UClass_UNetworkPhysicsSettingsDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkPhysicsSettingsDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkPhysicsSettingsDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkPhysicsSettingsDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UNetworkPhysicsSettingsDataAsset)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_677_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkPhysicsSettingsDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkPhysicsSettingsDataAsset(UNetworkPhysicsSettingsDataAsset&&) = delete; \
	UNetworkPhysicsSettingsDataAsset(const UNetworkPhysicsSettingsDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkPhysicsSettingsDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPhysicsSettingsDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkPhysicsSettingsDataAsset) \
	NO_API virtual ~UNetworkPhysicsSettingsDataAsset();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_674_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_677_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_677_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_677_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkPhysicsSettingsDataAsset;

// ********** End Class UNetworkPhysicsSettingsDataAsset *******************************************

// ********** Begin Class UNetworkPhysicsSettingsComponent *****************************************
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_730_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnComponentPhysicsStateChanged);


struct Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsSettingsComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_730_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkPhysicsSettingsComponent(); \
	friend struct ::Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkPhysicsSettingsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkPhysicsSettingsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkPhysicsSettingsComponent_NoRegister) \
	DECLARE_SERIALIZER(UNetworkPhysicsSettingsComponent)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_730_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkPhysicsSettingsComponent(UNetworkPhysicsSettingsComponent&&) = delete; \
	UNetworkPhysicsSettingsComponent(const UNetworkPhysicsSettingsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkPhysicsSettingsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPhysicsSettingsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkPhysicsSettingsComponent)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_727_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_730_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_730_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_730_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_730_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkPhysicsSettingsComponent;

// ********** End Class UNetworkPhysicsSettingsComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
