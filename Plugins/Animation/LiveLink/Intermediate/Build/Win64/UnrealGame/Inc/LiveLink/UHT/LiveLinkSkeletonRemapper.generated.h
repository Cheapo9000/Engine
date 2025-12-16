// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Remapper/LiveLinkSkeletonRemapper.h"

#ifdef LIVELINK_LiveLinkSkeletonRemapper_generated_h
#error "LiveLinkSkeletonRemapper.generated.h already included, missing '#pragma once' in LiveLinkSkeletonRemapper.h"
#endif
#define LIVELINK_LiveLinkSkeletonRemapper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkSkeletonRemapper ************************************************
struct Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkSkeletonRemapper_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSkeletonRemapper(); \
	friend struct ::Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkSkeletonRemapper_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkSkeletonRemapper, ULiveLinkSubjectRemapper, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkSkeletonRemapper_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkSkeletonRemapper)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINK_API ULiveLinkSkeletonRemapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkSkeletonRemapper(ULiveLinkSkeletonRemapper&&) = delete; \
	ULiveLinkSkeletonRemapper(const ULiveLinkSkeletonRemapper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkSkeletonRemapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSkeletonRemapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkSkeletonRemapper) \
	LIVELINK_API virtual ~ULiveLinkSkeletonRemapper();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_65_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_69_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkSkeletonRemapper;

// ********** End Class ULiveLinkSkeletonRemapper **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
