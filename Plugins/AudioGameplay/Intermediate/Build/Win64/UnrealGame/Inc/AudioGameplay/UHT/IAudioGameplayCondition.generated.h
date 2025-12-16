// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IAudioGameplayCondition.h"

#ifdef AUDIOGAMEPLAY_IAudioGameplayCondition_generated_h
#error "IAudioGameplayCondition.generated.h already included, missing '#pragma once' in IAudioGameplayCondition.h"
#endif
#define AUDIOGAMEPLAY_IAudioGameplayCondition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAudioGameplayCondition **********************************************
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConditionMet_Position); \
	DECLARE_FUNCTION(execConditionMet);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_22_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAudioGameplayCondition_Statics;
AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayCondition_NoRegister();

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAY_API UAudioGameplayCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioGameplayCondition(UAudioGameplayCondition&&) = delete; \
	UAudioGameplayCondition(const UAudioGameplayCondition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioGameplayCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayCondition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayCondition) \
	virtual ~UAudioGameplayCondition() = default;


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioGameplayCondition(); \
	friend struct ::Z_Construct_UClass_UAudioGameplayCondition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAY_API UClass* ::Z_Construct_UClass_UAudioGameplayCondition_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioGameplayCondition, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AudioGameplay"), Z_Construct_UClass_UAudioGameplayCondition_NoRegister) \
	DECLARE_SERIALIZER(UAudioGameplayCondition)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAudioGameplayCondition() {} \
public: \
	typedef UAudioGameplayCondition UClassType; \
	typedef IAudioGameplayCondition ThisClass; \
	AUDIOGAMEPLAY_API static bool Execute_ConditionMet(const UObject* O); \
	AUDIOGAMEPLAY_API static bool Execute_ConditionMet_Position(const UObject* O, FVector const& Position); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_19_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioGameplayCondition;

// ********** End Interface UAudioGameplayCondition ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
