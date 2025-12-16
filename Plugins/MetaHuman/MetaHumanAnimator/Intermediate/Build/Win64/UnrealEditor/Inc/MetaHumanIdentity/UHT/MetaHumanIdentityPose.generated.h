// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanIdentityPose.h"

#ifdef METAHUMANIDENTITY_MetaHumanIdentityPose_generated_h
#error "MetaHumanIdentityPose.generated.h already included, missing '#pragma once' in MetaHumanIdentityPose.h"
#endif
#define METAHUMANIDENTITY_MetaHumanIdentityPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCaptureData;
class UMetaHumanIdentityPromotedFrame;

// ********** Begin Class UMetaHumanIdentityPose ***************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityPose_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadDefaultTracker); \
	DECLARE_FUNCTION(execRemovePromotedFrame); \
	DECLARE_FUNCTION(execAddNewPromotedFrame); \
	DECLARE_FUNCTION(execIsCaptureDataValid); \
	DECLARE_FUNCTION(execGetCaptureData); \
	DECLARE_FUNCTION(execSetCaptureData);


struct Z_Construct_UClass_UMetaHumanIdentityPose_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UMetaHumanIdentityPose_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityPose_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanIdentityPose(); \
	friend struct ::Z_Construct_UClass_UMetaHumanIdentityPose_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UMetaHumanIdentityPose_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanIdentityPose, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UMetaHumanIdentityPose_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanIdentityPose)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityPose_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanIdentityPose(UMetaHumanIdentityPose&&) = delete; \
	UMetaHumanIdentityPose(const UMetaHumanIdentityPose&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UMetaHumanIdentityPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanIdentityPose); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanIdentityPose) \
	METAHUMANIDENTITY_API virtual ~UMetaHumanIdentityPose();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityPose_h_37_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityPose_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityPose_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityPose_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityPose_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanIdentityPose;

// ********** End Class UMetaHumanIdentityPose *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityPose_h

// ********** Begin Enum EIdentityPoseType *********************************************************
#define FOREACH_ENUM_EIDENTITYPOSETYPE(op) \
	op(EIdentityPoseType::Invalid) \
	op(EIdentityPoseType::Neutral) \
	op(EIdentityPoseType::Teeth) \
	op(EIdentityPoseType::Custom) \
	op(EIdentityPoseType::Count) 

enum class EIdentityPoseType : uint8;
template<> struct TIsUEnumClass<EIdentityPoseType> { enum { Value = true }; };
template<> METAHUMANIDENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EIdentityPoseType>();
// ********** End Enum EIdentityPoseType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
