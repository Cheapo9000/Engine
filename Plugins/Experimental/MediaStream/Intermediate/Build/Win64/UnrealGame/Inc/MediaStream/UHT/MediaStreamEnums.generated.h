// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaStreamEnums.h"

#ifdef MEDIASTREAM_MediaStreamEnums_generated_h
#error "MediaStreamEnums.generated.h already included, missing '#pragma once' in MediaStreamEnums.h"
#endif
#define MEDIASTREAM_MediaStreamEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamEnums_h

// ********** Begin Enum EMediaStreamPlaybackState *************************************************
#define FOREACH_ENUM_EMEDIASTREAMPLAYBACKSTATE(op) \
	op(EMediaStreamPlaybackState::Play) \
	op(EMediaStreamPlaybackState::Pause) 

enum class EMediaStreamPlaybackState : uint8;
template<> struct TIsUEnumClass<EMediaStreamPlaybackState> { enum { Value = true }; };
template<> MEDIASTREAM_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaStreamPlaybackState>();
// ********** End Enum EMediaStreamPlaybackState ***************************************************

// ********** Begin Enum EMediaStreamPlaybackDirection *********************************************
#define FOREACH_ENUM_EMEDIASTREAMPLAYBACKDIRECTION(op) \
	op(EMediaStreamPlaybackDirection::Forward) \
	op(EMediaStreamPlaybackDirection::Backward) 

enum class EMediaStreamPlaybackDirection : uint8;
template<> struct TIsUEnumClass<EMediaStreamPlaybackDirection> { enum { Value = true }; };
template<> MEDIASTREAM_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaStreamPlaybackDirection>();
// ********** End Enum EMediaStreamPlaybackDirection ***********************************************

// ********** Begin Enum EMediaStreamPlaybackSeek **************************************************
#define FOREACH_ENUM_EMEDIASTREAMPLAYBACKSEEK(op) \
	op(EMediaStreamPlaybackSeek::Previous) \
	op(EMediaStreamPlaybackSeek::Start) \
	op(EMediaStreamPlaybackSeek::End) \
	op(EMediaStreamPlaybackSeek::Next) 

enum class EMediaStreamPlaybackSeek : uint8;
template<> struct TIsUEnumClass<EMediaStreamPlaybackSeek> { enum { Value = true }; };
template<> MEDIASTREAM_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaStreamPlaybackSeek>();
// ********** End Enum EMediaStreamPlaybackSeek ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
