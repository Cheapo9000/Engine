// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkRetargetAsset.h"

#ifdef LIVELINKANIMATIONCORE_LiveLinkRetargetAsset_generated_h
#error "LiveLinkRetargetAsset.generated.h already included, missing '#pragma once' in LiveLinkRetargetAsset.h"
#endif
#define LIVELINKANIMATIONCORE_LiveLinkRetargetAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkRetargetAsset ***************************************************
struct Z_Construct_UClass_ULiveLinkRetargetAsset_Statics;
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();

#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkRetargetAsset(); \
	friend struct ::Z_Construct_UClass_ULiveLinkRetargetAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKANIMATIONCORE_API UClass* ::Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkRetargetAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkAnimationCore"), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkRetargetAsset)


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKANIMATIONCORE_API ULiveLinkRetargetAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkRetargetAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKANIMATIONCORE_API, ULiveLinkRetargetAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkRetargetAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkRetargetAsset(ULiveLinkRetargetAsset&&) = delete; \
	ULiveLinkRetargetAsset(const ULiveLinkRetargetAsset&) = delete; \
	LIVELINKANIMATIONCORE_API virtual ~ULiveLinkRetargetAsset();


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h_23_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h_26_INCLASS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkRetargetAsset;

// ********** End Class ULiveLinkRetargetAsset *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
