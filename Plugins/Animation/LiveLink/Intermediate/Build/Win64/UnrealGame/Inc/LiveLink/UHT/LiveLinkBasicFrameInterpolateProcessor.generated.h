// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h"

#ifdef LIVELINK_LiveLinkBasicFrameInterpolateProcessor_generated_h
#error "LiveLinkBasicFrameInterpolateProcessor.generated.h already included, missing '#pragma once' in LiveLinkBasicFrameInterpolateProcessor.h"
#endif
#define LIVELINK_LiveLinkBasicFrameInterpolateProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkBasicFrameInterpolationProcessor ********************************
struct Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkBasicFrameInterpolationProcessor(); \
	friend struct ::Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkBasicFrameInterpolationProcessor, ULiveLinkFrameInterpolationProcessor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkBasicFrameInterpolationProcessor)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINK_API ULiveLinkBasicFrameInterpolationProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkBasicFrameInterpolationProcessor(ULiveLinkBasicFrameInterpolationProcessor&&) = delete; \
	ULiveLinkBasicFrameInterpolationProcessor(const ULiveLinkBasicFrameInterpolationProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkBasicFrameInterpolationProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkBasicFrameInterpolationProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkBasicFrameInterpolationProcessor) \
	LIVELINK_API virtual ~ULiveLinkBasicFrameInterpolationProcessor();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_14_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkBasicFrameInterpolationProcessor;

// ********** End Class ULiveLinkBasicFrameInterpolationProcessor **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
