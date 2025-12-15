// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAudioModulation.h"

#ifdef AUDIOEXTENSIONS_IAudioModulation_generated_h
#error "IAudioModulation.generated.h already included, missing '#pragma once' in IAudioModulation.h"
#endif
#define AUDIOEXTENSIONS_IAudioModulation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundModulatorBase ******************************************************
struct Z_Construct_UClass_USoundModulatorBase_Statics;
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_224_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulatorBase(); \
	friend struct ::Z_Construct_UClass_USoundModulatorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEXTENSIONS_API UClass* ::Z_Construct_UClass_USoundModulatorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), Z_Construct_UClass_USoundModulatorBase_NoRegister) \
	DECLARE_SERIALIZER(USoundModulatorBase)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_224_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEXTENSIONS_API USoundModulatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulatorBase(USoundModulatorBase&&) = delete; \
	USoundModulatorBase(const USoundModulatorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEXTENSIONS_API, USoundModulatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulatorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulatorBase) \
	AUDIOEXTENSIONS_API virtual ~USoundModulatorBase();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_221_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_224_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_224_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_224_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulatorBase;

// ********** End Class USoundModulatorBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
