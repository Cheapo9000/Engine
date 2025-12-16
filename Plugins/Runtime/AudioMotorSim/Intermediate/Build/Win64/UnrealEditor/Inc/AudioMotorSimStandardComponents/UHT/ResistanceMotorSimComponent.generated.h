// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResistanceMotorSimComponent.h"

#ifdef AUDIOMOTORSIMSTANDARDCOMPONENTS_ResistanceMotorSimComponent_generated_h
#error "ResistanceMotorSimComponent.generated.h already included, missing '#pragma once' in ResistanceMotorSimComponent.h"
#endif
#define AUDIOMOTORSIMSTANDARDCOMPONENTS_ResistanceMotorSimComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UResistanceMotorSimComponent *********************************************
struct Z_Construct_UClass_UResistanceMotorSimComponent_Statics;
AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UResistanceMotorSimComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResistanceMotorSimComponent(); \
	friend struct ::Z_Construct_UClass_UResistanceMotorSimComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* ::Z_Construct_UClass_UResistanceMotorSimComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UResistanceMotorSimComponent, UAudioMotorSimComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMotorSimStandardComponents"), Z_Construct_UClass_UResistanceMotorSimComponent_NoRegister) \
	DECLARE_SERIALIZER(UResistanceMotorSimComponent)


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResistanceMotorSimComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UResistanceMotorSimComponent(UResistanceMotorSimComponent&&) = delete; \
	UResistanceMotorSimComponent(const UResistanceMotorSimComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResistanceMotorSimComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResistanceMotorSimComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResistanceMotorSimComponent) \
	NO_API virtual ~UResistanceMotorSimComponent();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UResistanceMotorSimComponent;

// ********** End Class UResistanceMotorSimComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
