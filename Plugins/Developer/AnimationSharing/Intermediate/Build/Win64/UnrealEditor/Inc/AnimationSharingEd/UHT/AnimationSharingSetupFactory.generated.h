// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationSharingSetupFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONSHARINGED_AnimationSharingSetupFactory_generated_h
#error "AnimationSharingSetupFactory.generated.h already included, missing '#pragma once' in AnimationSharingSetupFactory.h"
#endif
#define ANIMATIONSHARINGED_AnimationSharingSetupFactory_generated_h

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationSharingSetupFactory(); \
	friend struct Z_Construct_UClass_UAnimationSharingSetupFactory_Statics; \
public: \
	DECLARE_CLASS(UAnimationSharingSetupFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharingEd"), ANIMATIONSHARINGED_API) \
	DECLARE_SERIALIZER(UAnimationSharingSetupFactory)


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONSHARINGED_API UAnimationSharingSetupFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingSetupFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONSHARINGED_API, UAnimationSharingSetupFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingSetupFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationSharingSetupFactory(UAnimationSharingSetupFactory&&); \
	UAnimationSharingSetupFactory(const UAnimationSharingSetupFactory&); \
public: \
	ANIMATIONSHARINGED_API virtual ~UAnimationSharingSetupFactory();


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h_11_PROLOG
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h_14_INCLASS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONSHARINGED_API UClass* StaticClass<class UAnimationSharingSetupFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
