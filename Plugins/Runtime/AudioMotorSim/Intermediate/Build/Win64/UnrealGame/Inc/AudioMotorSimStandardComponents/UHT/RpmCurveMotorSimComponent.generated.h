// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RpmCurveMotorSimComponent.h"

#ifdef AUDIOMOTORSIMSTANDARDCOMPONENTS_RpmCurveMotorSimComponent_generated_h
#error "RpmCurveMotorSimComponent.generated.h already included, missing '#pragma once' in RpmCurveMotorSimComponent.h"
#endif
#define AUDIOMOTORSIMSTANDARDCOMPONENTS_RpmCurveMotorSimComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMotorSimGearCurve ************************************************
struct Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics;
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics; \
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FMotorSimGearCurve;
// ********** End ScriptStruct FMotorSimGearCurve **************************************************

// ********** Begin Delegate FOnGearChangedEvent ***************************************************
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_22_DELEGATE \
AUDIOMOTORSIMSTANDARDCOMPONENTS_API void FOnGearChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGearChangedEvent, int32 NewGear);


// ********** End Delegate FOnGearChangedEvent *****************************************************

// ********** Begin Class URpmCurveMotorSimComponent ***********************************************
struct Z_Construct_UClass_URpmCurveMotorSimComponent_Statics;
AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_URpmCurveMotorSimComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURpmCurveMotorSimComponent(); \
	friend struct ::Z_Construct_UClass_URpmCurveMotorSimComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* ::Z_Construct_UClass_URpmCurveMotorSimComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URpmCurveMotorSimComponent, UAudioMotorSimComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMotorSimStandardComponents"), Z_Construct_UClass_URpmCurveMotorSimComponent_NoRegister) \
	DECLARE_SERIALIZER(URpmCurveMotorSimComponent)


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URpmCurveMotorSimComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URpmCurveMotorSimComponent(URpmCurveMotorSimComponent&&) = delete; \
	URpmCurveMotorSimComponent(const URpmCurveMotorSimComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpmCurveMotorSimComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpmCurveMotorSimComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URpmCurveMotorSimComponent) \
	NO_API virtual ~URpmCurveMotorSimComponent();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URpmCurveMotorSimComponent;

// ********** End Class URpmCurveMotorSimComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
