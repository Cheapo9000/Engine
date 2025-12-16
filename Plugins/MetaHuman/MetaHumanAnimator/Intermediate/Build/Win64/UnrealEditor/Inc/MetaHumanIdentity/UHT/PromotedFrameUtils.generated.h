// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PromotedFrameUtils.h"

#ifdef METAHUMANIDENTITY_PromotedFrameUtils_generated_h
#error "PromotedFrameUtils.generated.h already included, missing '#pragma once' in PromotedFrameUtils.h"
#endif
#define METAHUMANIDENTITY_PromotedFrameUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFootageCaptureData;
class UMetaHumanIdentityFootageFrame;
class UMetaHumanIdentityPose;
enum class ETimecodeAlignment : int32;
struct FColor;

// ********** Begin Class UPromotedFrameUtils ******************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_PromotedFrameUtils_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetImagePathForFrame); \
	DECLARE_FUNCTION(execGetPromotedFrameAsPixelArrayFromDisk); \
	DECLARE_FUNCTION(execInitializeContourDataForFootageFrame);


struct Z_Construct_UClass_UPromotedFrameUtils_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UPromotedFrameUtils_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_PromotedFrameUtils_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPromotedFrameUtils(); \
	friend struct ::Z_Construct_UClass_UPromotedFrameUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UPromotedFrameUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UPromotedFrameUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UPromotedFrameUtils_NoRegister) \
	DECLARE_SERIALIZER(UPromotedFrameUtils)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_PromotedFrameUtils_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANIDENTITY_API UPromotedFrameUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPromotedFrameUtils(UPromotedFrameUtils&&) = delete; \
	UPromotedFrameUtils(const UPromotedFrameUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UPromotedFrameUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPromotedFrameUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPromotedFrameUtils) \
	METAHUMANIDENTITY_API virtual ~UPromotedFrameUtils();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_PromotedFrameUtils_h_21_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_PromotedFrameUtils_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_PromotedFrameUtils_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_PromotedFrameUtils_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_PromotedFrameUtils_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPromotedFrameUtils;

// ********** End Class UPromotedFrameUtils ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_PromotedFrameUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
