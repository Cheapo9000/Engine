// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThrottleStateMotorSimComponent.h"

#ifdef AUDIOMOTORSIMSTANDARDCOMPONENTS_ThrottleStateMotorSimComponent_generated_h
#error "ThrottleStateMotorSimComponent.generated.h already included, missing '#pragma once' in ThrottleStateMotorSimComponent.h"
#endif
#define AUDIOMOTORSIMSTANDARDCOMPONENTS_ThrottleStateMotorSimComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnEngineBlowoff ******************************************************
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_7_DELEGATE \
AUDIOMOTORSIMSTANDARDCOMPONENTS_API void FOnEngineBlowoff_DelegateWrapper(const FMulticastScriptDelegate& OnEngineBlowoff, float BlowoffStrength);


// ********** End Delegate FOnEngineBlowoff ********************************************************

// ********** Begin Delegate FOnThrottleChanged ****************************************************
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_8_DELEGATE \
AUDIOMOTORSIMSTANDARDCOMPONENTS_API void FOnThrottleChanged_DelegateWrapper(const FMulticastScriptDelegate& OnThrottleChanged);


// ********** End Delegate FOnThrottleChanged ******************************************************

// ********** Begin Class UThrottleStateMotorSimComponent ******************************************
struct Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics;
AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UThrottleStateMotorSimComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThrottleStateMotorSimComponent(); \
	friend struct ::Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* ::Z_Construct_UClass_UThrottleStateMotorSimComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UThrottleStateMotorSimComponent, UAudioMotorSimComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMotorSimStandardComponents"), Z_Construct_UClass_UThrottleStateMotorSimComponent_NoRegister) \
	DECLARE_SERIALIZER(UThrottleStateMotorSimComponent)


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThrottleStateMotorSimComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UThrottleStateMotorSimComponent(UThrottleStateMotorSimComponent&&) = delete; \
	UThrottleStateMotorSimComponent(const UThrottleStateMotorSimComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThrottleStateMotorSimComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrottleStateMotorSimComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThrottleStateMotorSimComponent) \
	NO_API virtual ~UThrottleStateMotorSimComponent();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UThrottleStateMotorSimComponent;

// ********** End Class UThrottleStateMotorSimComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
