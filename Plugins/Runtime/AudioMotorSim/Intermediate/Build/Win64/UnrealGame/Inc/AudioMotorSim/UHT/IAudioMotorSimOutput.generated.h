// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAudioMotorSimOutput.h"

#ifdef AUDIOMOTORSIM_IAudioMotorSimOutput_generated_h
#error "IAudioMotorSimOutput.generated.h already included, missing '#pragma once' in IAudioMotorSimOutput.h"
#endif
#define AUDIOMOTORSIM_IAudioMotorSimOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAudioMotorSimOutput *************************************************
struct Z_Construct_UClass_UAudioMotorSimOutput_Statics;
AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimOutput_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMOTORSIM_API UAudioMotorSimOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMotorSimOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMOTORSIM_API, UAudioMotorSimOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMotorSimOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioMotorSimOutput(UAudioMotorSimOutput&&) = delete; \
	UAudioMotorSimOutput(const UAudioMotorSimOutput&) = delete; \
	virtual ~UAudioMotorSimOutput() = default;


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioMotorSimOutput(); \
	friend struct ::Z_Construct_UClass_UAudioMotorSimOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMOTORSIM_API UClass* ::Z_Construct_UClass_UAudioMotorSimOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioMotorSimOutput, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AudioMotorSim"), Z_Construct_UClass_UAudioMotorSimOutput_NoRegister) \
	DECLARE_SERIALIZER(UAudioMotorSimOutput)


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IAudioMotorSimOutput() {} \
public: \
	typedef UAudioMotorSimOutput UClassType; \
	typedef IAudioMotorSimOutput ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioMotorSimOutput;

// ********** End Interface UAudioMotorSimOutput ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
