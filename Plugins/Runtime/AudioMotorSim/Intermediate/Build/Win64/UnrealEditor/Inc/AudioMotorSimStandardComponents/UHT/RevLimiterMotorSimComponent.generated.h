// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RevLimiterMotorSimComponent.h"

#ifdef AUDIOMOTORSIMSTANDARDCOMPONENTS_RevLimiterMotorSimComponent_generated_h
#error "RevLimiterMotorSimComponent.generated.h already included, missing '#pragma once' in RevLimiterMotorSimComponent.h"
#endif
#define AUDIOMOTORSIMSTANDARDCOMPONENTS_RevLimiterMotorSimComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnRevLimiterHit ******************************************************
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_8_DELEGATE \
AUDIOMOTORSIMSTANDARDCOMPONENTS_API void FOnRevLimiterHit_DelegateWrapper(const FMulticastScriptDelegate& OnRevLimiterHit);


// ********** End Delegate FOnRevLimiterHit ********************************************************

// ********** Begin Delegate FOnRevLimiterStateChanged *********************************************
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_10_DELEGATE \
AUDIOMOTORSIMSTANDARDCOMPONENTS_API void FOnRevLimiterStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRevLimiterStateChanged, bool bNewState);


// ********** End Delegate FOnRevLimiterStateChanged ***********************************************

// ********** Begin Class URevLimiterMotorSimComponent *********************************************
struct Z_Construct_UClass_URevLimiterMotorSimComponent_Statics;
AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_URevLimiterMotorSimComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevLimiterMotorSimComponent(); \
	friend struct ::Z_Construct_UClass_URevLimiterMotorSimComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* ::Z_Construct_UClass_URevLimiterMotorSimComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URevLimiterMotorSimComponent, UAudioMotorSimComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMotorSimStandardComponents"), Z_Construct_UClass_URevLimiterMotorSimComponent_NoRegister) \
	DECLARE_SERIALIZER(URevLimiterMotorSimComponent)


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URevLimiterMotorSimComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URevLimiterMotorSimComponent(URevLimiterMotorSimComponent&&) = delete; \
	URevLimiterMotorSimComponent(const URevLimiterMotorSimComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URevLimiterMotorSimComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevLimiterMotorSimComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URevLimiterMotorSimComponent) \
	NO_API virtual ~URevLimiterMotorSimComponent();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URevLimiterMotorSimComponent;

// ********** End Class URevLimiterMotorSimComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
