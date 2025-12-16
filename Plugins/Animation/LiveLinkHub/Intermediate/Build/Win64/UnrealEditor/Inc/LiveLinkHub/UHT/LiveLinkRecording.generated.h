// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recording/LiveLinkRecording.h"

#ifdef LIVELINKHUB_LiveLinkRecording_generated_h
#error "LiveLinkRecording.generated.h already included, missing '#pragma once' in LiveLinkRecording.h"
#endif
#define LIVELINKHUB_LiveLinkRecording_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkRecording *******************************************************
struct Z_Construct_UClass_ULiveLinkRecording_Statics;
LIVELINKHUB_API UClass* Z_Construct_UClass_ULiveLinkRecording_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkRecording_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkRecording(); \
	friend struct ::Z_Construct_UClass_ULiveLinkRecording_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKHUB_API UClass* ::Z_Construct_UClass_ULiveLinkRecording_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkRecording, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkHub"), Z_Construct_UClass_ULiveLinkRecording_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkRecording)


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkRecording_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkRecording(ULiveLinkRecording&&) = delete; \
	ULiveLinkRecording(const ULiveLinkRecording&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkRecording); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkRecording); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkRecording) \
	NO_API virtual ~ULiveLinkRecording();


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkRecording_h_12_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkRecording_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkRecording_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkRecording_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkRecording;

// ********** End Class ULiveLinkRecording *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkRecording_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
