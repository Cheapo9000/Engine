// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMotorModelComponent.h"

#ifdef AUDIOMOTORSIM_AudioMotorModelComponent_generated_h
#error "AudioMotorModelComponent.generated.h already included, missing '#pragma once' in AudioMotorModelComponent.h"
#endif
#define AUDIOMOTORSIM_AudioMotorModelComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAudioMotorSim;
class IAudioMotorSimOutput;
struct FAudioMotorSimInputContext;
struct FAudioMotorSimRuntimeContext;
struct FInstancedStruct;

// ********** Begin ScriptStruct FMotorSimEntry ****************************************************
struct Z_Construct_UScriptStruct_FMotorSimEntry_Statics;
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMotorSimEntry_Statics; \
	AUDIOMOTORSIM_API static class UScriptStruct* StaticStruct();


struct FMotorSimEntry;
// ********** End ScriptStruct FMotorSimEntry ******************************************************

// ********** Begin Class UAudioMotorModelComponent ************************************************
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCachedInputData); \
	DECLARE_FUNCTION(execGetRuntimeInfo); \
	DECLARE_FUNCTION(execGetGear); \
	DECLARE_FUNCTION(execGetRpm); \
	DECLARE_FUNCTION(execConfigureMotorSimComponents); \
	DECLARE_FUNCTION(execRemoveAllMotorSimComponents); \
	DECLARE_FUNCTION(execRemoveMotorSimComponent); \
	DECLARE_FUNCTION(execAddMotorSimComponent); \
	DECLARE_FUNCTION(execRemoveMotorAudioComponent); \
	DECLARE_FUNCTION(execAddMotorAudioComponent); \
	DECLARE_FUNCTION(execStopOutput); \
	DECLARE_FUNCTION(execStartOutput); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execUpdate);


struct Z_Construct_UClass_UAudioMotorModelComponent_Statics;
AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorModelComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMotorModelComponent(); \
	friend struct ::Z_Construct_UClass_UAudioMotorModelComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMOTORSIM_API UClass* ::Z_Construct_UClass_UAudioMotorModelComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioMotorModelComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMotorSim"), Z_Construct_UClass_UAudioMotorModelComponent_NoRegister) \
	DECLARE_SERIALIZER(UAudioMotorModelComponent)


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMOTORSIM_API UAudioMotorModelComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioMotorModelComponent(UAudioMotorModelComponent&&) = delete; \
	UAudioMotorModelComponent(const UAudioMotorModelComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMOTORSIM_API, UAudioMotorModelComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMotorModelComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMotorModelComponent) \
	AUDIOMOTORSIM_API virtual ~UAudioMotorModelComponent();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioMotorModelComponent;

// ********** End Class UAudioMotorModelComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
