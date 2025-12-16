// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationSharingSetup.h"

#ifdef ANIMATIONSHARING_AnimationSharingSetup_generated_h
#error "AnimationSharingSetup.generated.h already included, missing '#pragma once' in AnimationSharingSetup.h"
#endif
#define ANIMATIONSHARING_AnimationSharingSetup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationSharingSetup ***************************************************
struct Z_Construct_UClass_UAnimationSharingSetup_Statics;
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingSetup_NoRegister();

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationSharingSetup(); \
	friend struct ::Z_Construct_UClass_UAnimationSharingSetup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONSHARING_API UClass* ::Z_Construct_UClass_UAnimationSharingSetup_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationSharingSetup, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationSharing"), Z_Construct_UClass_UAnimationSharingSetup_NoRegister) \
	DECLARE_SERIALIZER(UAnimationSharingSetup)


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONSHARING_API UAnimationSharingSetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingSetup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONSHARING_API, UAnimationSharingSetup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingSetup); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationSharingSetup(UAnimationSharingSetup&&) = delete; \
	UAnimationSharingSetup(const UAnimationSharingSetup&) = delete; \
	ANIMATIONSHARING_API virtual ~UAnimationSharingSetup();


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h_12_PROLOG
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h_15_INCLASS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationSharingSetup;

// ********** End Class UAnimationSharingSetup *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
