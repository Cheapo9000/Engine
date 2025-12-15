// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioLinkSettingsAbstract.h"

#ifdef AUDIOLINKCORE_AudioLinkSettingsAbstract_generated_h
#error "AudioLinkSettingsAbstract.generated.h already included, missing '#pragma once' in AudioLinkSettingsAbstract.h"
#endif
#define AUDIOLINKCORE_AudioLinkSettingsAbstract_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioLinkSettingsAbstract ***********************************************
struct Z_Construct_UClass_UAudioLinkSettingsAbstract_Statics;
AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister();

#define FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioLinkSettingsAbstract(); \
	friend struct ::Z_Construct_UClass_UAudioLinkSettingsAbstract_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOLINKCORE_API UClass* ::Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioLinkSettingsAbstract, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioLinkCore"), Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister) \
	DECLARE_SERIALIZER(UAudioLinkSettingsAbstract)


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOLINKCORE_API UAudioLinkSettingsAbstract(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioLinkSettingsAbstract(UAudioLinkSettingsAbstract&&) = delete; \
	UAudioLinkSettingsAbstract(const UAudioLinkSettingsAbstract&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOLINKCORE_API, UAudioLinkSettingsAbstract); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioLinkSettingsAbstract); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioLinkSettingsAbstract) \
	AUDIOLINKCORE_API virtual ~UAudioLinkSettingsAbstract();


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h_30_PROLOG
#define FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioLinkSettingsAbstract;

// ********** End Class UAudioLinkSettingsAbstract *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
