// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/VoiceChannel.h"

#ifdef ENGINE_VoiceChannel_generated_h
#error "VoiceChannel.generated.h already included, missing '#pragma once' in VoiceChannel.h"
#endif
#define ENGINE_VoiceChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVoiceChannel ************************************************************
struct Z_Construct_UClass_UVoiceChannel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVoiceChannel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceChannel(); \
	friend struct ::Z_Construct_UClass_UVoiceChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVoiceChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoiceChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVoiceChannel_NoRegister) \
	DECLARE_SERIALIZER(UVoiceChannel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVoiceChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChannel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoiceChannel(UVoiceChannel&&) = delete; \
	UVoiceChannel(const UVoiceChannel&) = delete; \
	ENGINE_API virtual ~UVoiceChannel();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoiceChannel;

// ********** End Class UVoiceChannel **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
