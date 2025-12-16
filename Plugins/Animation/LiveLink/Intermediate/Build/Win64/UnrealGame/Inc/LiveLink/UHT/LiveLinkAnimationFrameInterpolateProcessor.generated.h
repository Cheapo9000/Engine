// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterpolationProcessor/LiveLinkAnimationFrameInterpolateProcessor.h"

#ifdef LIVELINK_LiveLinkAnimationFrameInterpolateProcessor_generated_h
#error "LiveLinkAnimationFrameInterpolateProcessor.generated.h already included, missing '#pragma once' in LiveLinkAnimationFrameInterpolateProcessor.h"
#endif
#define LIVELINK_LiveLinkAnimationFrameInterpolateProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkAnimationFrameInterpolationProcessor ****************************
struct Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkAnimationFrameInterpolationProcessor(); \
	friend struct ::Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkAnimationFrameInterpolationProcessor, ULiveLinkBasicFrameInterpolationProcessor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkAnimationFrameInterpolationProcessor)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINK_API ULiveLinkAnimationFrameInterpolationProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkAnimationFrameInterpolationProcessor(ULiveLinkAnimationFrameInterpolationProcessor&&) = delete; \
	ULiveLinkAnimationFrameInterpolationProcessor(const ULiveLinkAnimationFrameInterpolationProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkAnimationFrameInterpolationProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkAnimationFrameInterpolationProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkAnimationFrameInterpolationProcessor) \
	LIVELINK_API virtual ~ULiveLinkAnimationFrameInterpolationProcessor();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h_14_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkAnimationFrameInterpolationProcessor;

// ********** End Class ULiveLinkAnimationFrameInterpolationProcessor ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
