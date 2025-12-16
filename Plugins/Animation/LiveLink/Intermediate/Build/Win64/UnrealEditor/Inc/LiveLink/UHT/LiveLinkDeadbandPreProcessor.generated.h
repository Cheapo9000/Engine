// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PreProcessor/LiveLinkDeadbandPreProcessor.h"

#ifdef LIVELINK_LiveLinkDeadbandPreProcessor_generated_h
#error "LiveLinkDeadbandPreProcessor.generated.h already included, missing '#pragma once' in LiveLinkDeadbandPreProcessor.h"
#endif
#define LIVELINK_LiveLinkDeadbandPreProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkTransformDeadbandPreProcessor ***********************************
struct Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkTransformDeadbandPreProcessor(); \
	friend struct ::Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkTransformDeadbandPreProcessor, ULiveLinkFramePreProcessor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkTransformDeadbandPreProcessor)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINK_API ULiveLinkTransformDeadbandPreProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkTransformDeadbandPreProcessor(ULiveLinkTransformDeadbandPreProcessor&&) = delete; \
	ULiveLinkTransformDeadbandPreProcessor(const ULiveLinkTransformDeadbandPreProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkTransformDeadbandPreProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkTransformDeadbandPreProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkTransformDeadbandPreProcessor) \
	LIVELINK_API virtual ~ULiveLinkTransformDeadbandPreProcessor();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h_15_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkTransformDeadbandPreProcessor;

// ********** End Class ULiveLinkTransformDeadbandPreProcessor *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
