// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAudioMotorSim.h"

#ifdef AUDIOMOTORSIM_IAudioMotorSim_generated_h
#error "IAudioMotorSim.generated.h already included, missing '#pragma once' in IAudioMotorSim.h"
#endif
#define AUDIOMOTORSIM_IAudioMotorSim_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioMotorSimInputContext;
struct FAudioMotorSimRuntimeContext;
struct FInstancedStruct;

// ********** Begin ScriptStruct FAudioMotorSimDebugDataBase ***************************************
struct Z_Construct_UScriptStruct_FAudioMotorSimDebugDataBase_Statics;
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioMotorSimDebugDataBase_Statics; \
	AUDIOMOTORSIM_API static class UScriptStruct* StaticStruct();


struct FAudioMotorSimDebugDataBase;
// ********** End ScriptStruct FAudioMotorSimDebugDataBase *****************************************

// ********** Begin Interface UAudioMotorSim *******************************************************
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execConfigMotorSim); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execReset);


struct Z_Construct_UClass_UAudioMotorSim_Statics;
AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSim_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMOTORSIM_API UAudioMotorSim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMotorSim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMOTORSIM_API, UAudioMotorSim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMotorSim); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioMotorSim(UAudioMotorSim&&) = delete; \
	UAudioMotorSim(const UAudioMotorSim&) = delete; \
	virtual ~UAudioMotorSim() = default;


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioMotorSim(); \
	friend struct ::Z_Construct_UClass_UAudioMotorSim_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMOTORSIM_API UClass* ::Z_Construct_UClass_UAudioMotorSim_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioMotorSim, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AudioMotorSim"), Z_Construct_UClass_UAudioMotorSim_NoRegister) \
	DECLARE_SERIALIZER(UAudioMotorSim)


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_INCLASS_IINTERFACE \
protected: \
	virtual ~IAudioMotorSim() {} \
public: \
	typedef UAudioMotorSim UClassType; \
	typedef IAudioMotorSim ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioMotorSim;

// ********** End Interface UAudioMotorSim *********************************************************

// ********** Begin Class UAudioMotorSimComponent **************************************************
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_55_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAudioMotorSimComponent_Statics;
AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMotorSimComponent(); \
	friend struct ::Z_Construct_UClass_UAudioMotorSimComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMOTORSIM_API UClass* ::Z_Construct_UClass_UAudioMotorSimComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioMotorSimComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMotorSim"), Z_Construct_UClass_UAudioMotorSimComponent_NoRegister) \
	DECLARE_SERIALIZER(UAudioMotorSimComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioMotorSimComponent*>(this); }


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioMotorSimComponent(UAudioMotorSimComponent&&) = delete; \
	UAudioMotorSimComponent(const UAudioMotorSimComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMOTORSIM_API, UAudioMotorSimComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMotorSimComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMotorSimComponent) \
	AUDIOMOTORSIM_API virtual ~UAudioMotorSimComponent();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_52_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_55_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioMotorSimComponent;

// ********** End Class UAudioMotorSimComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
