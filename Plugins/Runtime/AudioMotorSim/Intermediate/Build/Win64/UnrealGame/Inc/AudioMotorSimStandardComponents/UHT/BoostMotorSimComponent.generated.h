// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoostMotorSimComponent.h"

#ifdef AUDIOMOTORSIMSTANDARDCOMPONENTS_BoostMotorSimComponent_generated_h
#error "BoostMotorSimComponent.generated.h already included, missing '#pragma once' in BoostMotorSimComponent.h"
#endif
#define AUDIOMOTORSIMSTANDARDCOMPONENTS_BoostMotorSimComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBoostMotorSimComponent **************************************************
struct Z_Construct_UClass_UBoostMotorSimComponent_Statics;
AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UBoostMotorSimComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoostMotorSimComponent(); \
	friend struct ::Z_Construct_UClass_UBoostMotorSimComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* ::Z_Construct_UClass_UBoostMotorSimComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoostMotorSimComponent, UAudioMotorSimComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMotorSimStandardComponents"), Z_Construct_UClass_UBoostMotorSimComponent_NoRegister) \
	DECLARE_SERIALIZER(UBoostMotorSimComponent)


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoostMotorSimComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoostMotorSimComponent(UBoostMotorSimComponent&&) = delete; \
	UBoostMotorSimComponent(const UBoostMotorSimComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoostMotorSimComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoostMotorSimComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoostMotorSimComponent) \
	NO_API virtual ~UBoostMotorSimComponent();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoostMotorSimComponent;

// ********** End Class UBoostMotorSimComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
