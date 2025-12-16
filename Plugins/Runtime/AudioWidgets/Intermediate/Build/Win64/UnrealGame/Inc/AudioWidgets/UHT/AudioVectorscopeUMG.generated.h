// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioVectorscopeUMG.h"

#ifdef AUDIOWIDGETS_AudioVectorscopeUMG_generated_h
#error "AudioVectorscopeUMG.generated.h already included, missing '#pragma once' in AudioVectorscopeUMG.h"
#endif
#define AUDIOWIDGETS_AudioVectorscopeUMG_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FGetVectorscopeAudioSamples *******************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_30_DELEGATE \
static AUDIOWIDGETS_API TArray<float> FGetVectorscopeAudioSamples_DelegateWrapper(const FScriptDelegate& GetVectorscopeAudioSamples);


// ********** End Delegate FGetVectorscopeAudioSamples *********************************************

// ********** Begin Class UAudioVectorscope ********************************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execStopProcessing); \
	DECLARE_FUNCTION(execStartProcessing);


struct Z_Construct_UClass_UAudioVectorscope_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioVectorscope_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAudioVectorscope(); \
	friend struct ::Z_Construct_UClass_UAudioVectorscope_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioVectorscope_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioVectorscope, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioVectorscope_NoRegister) \
	DECLARE_SERIALIZER(UAudioVectorscope)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOWIDGETS_API UAudioVectorscope(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioVectorscope) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioVectorscope); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioVectorscope); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioVectorscope(UAudioVectorscope&&) = delete; \
	UAudioVectorscope(const UAudioVectorscope&) = delete; \
	AUDIOWIDGETS_API virtual ~UAudioVectorscope();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioVectorscope;

// ********** End Class UAudioVectorscope **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
