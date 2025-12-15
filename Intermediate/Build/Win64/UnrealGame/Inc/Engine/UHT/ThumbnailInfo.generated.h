// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorFramework/ThumbnailInfo.h"

#ifdef ENGINE_ThumbnailInfo_generated_h
#error "ThumbnailInfo.generated.h already included, missing '#pragma once' in ThumbnailInfo.h"
#endif
#define ENGINE_ThumbnailInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UThumbnailInfo ***********************************************************
struct Z_Construct_UClass_UThumbnailInfo_Statics;
ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUThumbnailInfo(); \
	friend struct ::Z_Construct_UClass_UThumbnailInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UThumbnailInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UThumbnailInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UThumbnailInfo_NoRegister) \
	DECLARE_SERIALIZER(UThumbnailInfo)


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UThumbnailInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThumbnailInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UThumbnailInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThumbnailInfo); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UThumbnailInfo(UThumbnailInfo&&) = delete; \
	UThumbnailInfo(const UThumbnailInfo&) = delete; \
	ENGINE_API virtual ~UThumbnailInfo();


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UThumbnailInfo;

// ********** End Class UThumbnailInfo *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
