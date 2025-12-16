// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkSequencerSettings.h"

#ifdef LIVELINKSEQUENCER_LiveLinkSequencerSettings_generated_h
#error "LiveLinkSequencerSettings.generated.h already included, missing '#pragma once' in LiveLinkSequencerSettings.h"
#endif
#define LIVELINKSEQUENCER_LiveLinkSequencerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkSequencerSettings ***********************************************
struct Z_Construct_UClass_ULiveLinkSequencerSettings_Statics;
LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_ULiveLinkSequencerSettings_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSequencerSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkSequencerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKSEQUENCER_API UClass* ::Z_Construct_UClass_ULiveLinkSequencerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkSequencerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkSequencer"), Z_Construct_UClass_ULiveLinkSequencerSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkSequencerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKSEQUENCER_API ULiveLinkSequencerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkSequencerSettings(ULiveLinkSequencerSettings&&) = delete; \
	ULiveLinkSequencerSettings(const ULiveLinkSequencerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKSEQUENCER_API, ULiveLinkSequencerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSequencerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkSequencerSettings) \
	LIVELINKSEQUENCER_API virtual ~ULiveLinkSequencerSettings();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h_20_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkSequencerSettings;

// ********** End Class ULiveLinkSequencerSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
