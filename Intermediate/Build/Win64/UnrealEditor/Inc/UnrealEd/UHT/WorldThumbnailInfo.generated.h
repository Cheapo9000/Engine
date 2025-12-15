// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/WorldThumbnailInfo.h"

#ifdef UNREALED_WorldThumbnailInfo_generated_h
#error "WorldThumbnailInfo.generated.h already included, missing '#pragma once' in WorldThumbnailInfo.h"
#endif
#define UNREALED_WorldThumbnailInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldThumbnailInfo ******************************************************
struct Z_Construct_UClass_UWorldThumbnailInfo_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldThumbnailInfo_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUWorldThumbnailInfo(); \
	friend struct ::Z_Construct_UClass_UWorldThumbnailInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldThumbnailInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldThumbnailInfo, USceneThumbnailInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldThumbnailInfo_NoRegister) \
	DECLARE_SERIALIZER(UWorldThumbnailInfo)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldThumbnailInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldThumbnailInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldThumbnailInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldThumbnailInfo); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldThumbnailInfo(UWorldThumbnailInfo&&) = delete; \
	UWorldThumbnailInfo(const UWorldThumbnailInfo&) = delete; \
	UNREALED_API virtual ~UWorldThumbnailInfo();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_29_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldThumbnailInfo;

// ********** End Class UWorldThumbnailInfo ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h

// ********** Begin Enum EOrthoThumbnailDirection **************************************************
#define FOREACH_ENUM_EORTHOTHUMBNAILDIRECTION(op) \
	op(EOrthoThumbnailDirection::Top) \
	op(EOrthoThumbnailDirection::Bottom) \
	op(EOrthoThumbnailDirection::Left) \
	op(EOrthoThumbnailDirection::Right) \
	op(EOrthoThumbnailDirection::Front) \
	op(EOrthoThumbnailDirection::Back) 

namespace EOrthoThumbnailDirection { enum Type : int; }
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EOrthoThumbnailDirection::Type>();
// ********** End Enum EOrthoThumbnailDirection ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
