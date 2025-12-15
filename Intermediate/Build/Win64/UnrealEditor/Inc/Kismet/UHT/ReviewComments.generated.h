// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReviewComments.h"

#ifdef KISMET_ReviewComments_generated_h
#error "ReviewComments.generated.h already included, missing '#pragma once' in ReviewComments.h"
#endif
#define KISMET_ReviewComments_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Public_ReviewComments_h

// ********** Begin Enum EReviewCommentTaskState ***************************************************
#define FOREACH_ENUM_EREVIEWCOMMENTTASKSTATE(op) \
	op(EReviewCommentTaskState::Comment) \
	op(EReviewCommentTaskState::Open) \
	op(EReviewCommentTaskState::Addressed) \
	op(EReviewCommentTaskState::Verified) 

enum class EReviewCommentTaskState : uint8;
template<> struct TIsUEnumClass<EReviewCommentTaskState> { enum { Value = true }; };
template<> KISMET_NON_ATTRIBUTED_API UEnum* StaticEnum<EReviewCommentTaskState>();
// ********** End Enum EReviewCommentTaskState *****************************************************

// ********** Begin Enum EReviewTopicType **********************************************************
#define FOREACH_ENUM_EREVIEWTOPICTYPE(op) \
	op(EReviewTopicType::Review) \
	op(EReviewTopicType::Change) \
	op(EReviewTopicType::Unrecognised) 

enum class EReviewTopicType : uint8;
template<> struct TIsUEnumClass<EReviewTopicType> { enum { Value = true }; };
template<> KISMET_NON_ATTRIBUTED_API UEnum* StaticEnum<EReviewTopicType>();
// ********** End Enum EReviewTopicType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
