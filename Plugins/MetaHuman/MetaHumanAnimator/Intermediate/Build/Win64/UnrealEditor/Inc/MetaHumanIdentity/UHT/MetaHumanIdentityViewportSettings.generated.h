// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanIdentityViewportSettings.h"

#ifdef METAHUMANIDENTITY_MetaHumanIdentityViewportSettings_generated_h
#error "MetaHumanIdentityViewportSettings.generated.h already included, missing '#pragma once' in MetaHumanIdentityViewportSettings.h"
#endif
#define METAHUMANIDENTITY_MetaHumanIdentityViewportSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EABImageViewMode : int32;
enum class EIdentityPoseType : uint8;
struct FFrameTime;

// ********** Begin ScriptStruct FMetaHumanIdentityABViewportState *********************************
struct Z_Construct_UScriptStruct_FMetaHumanIdentityABViewportState_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityViewportSettings_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanIdentityABViewportState_Statics; \
	METAHUMANIDENTITY_API static class UScriptStruct* StaticStruct();


struct FMetaHumanIdentityABViewportState;
// ********** End ScriptStruct FMetaHumanIdentityABViewportState ***********************************

// ********** Begin ScriptStruct FMetaHumanIdentityPoseState ***************************************
struct Z_Construct_UScriptStruct_FMetaHumanIdentityPoseState_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityViewportSettings_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanIdentityPoseState_Statics; \
	METAHUMANIDENTITY_API static class UScriptStruct* StaticStruct();


struct FMetaHumanIdentityPoseState;
// ********** End ScriptStruct FMetaHumanIdentityPoseState *****************************************

// ********** Begin Class UMetaHumanIdentityViewportSettings ***************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityViewportSettings_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFrameTimeForPose); \
	DECLARE_FUNCTION(execSetFrameTimeForPose); \
	DECLARE_FUNCTION(execGetSelectedPromotedFrame); \
	DECLARE_FUNCTION(execSetSelectedPromotedFrame); \
	DECLARE_FUNCTION(execIsTemplateMeshVisible); \
	DECLARE_FUNCTION(execToggleTemplateMeshVisibility); \
	DECLARE_FUNCTION(execIsCurrentPoseVisible); \
	DECLARE_FUNCTION(execToggleCurrentPoseVisibility);


struct Z_Construct_UClass_UMetaHumanIdentityViewportSettings_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UMetaHumanIdentityViewportSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityViewportSettings_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanIdentityViewportSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanIdentityViewportSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UMetaHumanIdentityViewportSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanIdentityViewportSettings, UMetaHumanViewportSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UMetaHumanIdentityViewportSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanIdentityViewportSettings)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityViewportSettings_h_65_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanIdentityViewportSettings(UMetaHumanIdentityViewportSettings&&) = delete; \
	UMetaHumanIdentityViewportSettings(const UMetaHumanIdentityViewportSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UMetaHumanIdentityViewportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanIdentityViewportSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanIdentityViewportSettings) \
	METAHUMANIDENTITY_API virtual ~UMetaHumanIdentityViewportSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityViewportSettings_h_61_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityViewportSettings_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityViewportSettings_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityViewportSettings_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityViewportSettings_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanIdentityViewportSettings;

// ********** End Class UMetaHumanIdentityViewportSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentityViewportSettings_h

// ********** Begin Enum EIdentityTreeNodeIdentifier ***********************************************
#define FOREACH_ENUM_EIDENTITYTREENODEIDENTIFIER(op) \
	op(EIdentityTreeNodeIdentifier::None) \
	op(EIdentityTreeNodeIdentifier::IdentityRoot) \
	op(EIdentityTreeNodeIdentifier::TemplateMesh) \
	op(EIdentityTreeNodeIdentifier::SkeletalMesh) \
	op(EIdentityTreeNodeIdentifier::FaceNode) \
	op(EIdentityTreeNodeIdentifier::BodyNode) \
	op(EIdentityTreeNodeIdentifier::FacePoseList) \
	op(EIdentityTreeNodeIdentifier::FaceNeutralPose) \
	op(EIdentityTreeNodeIdentifier::FaceTeethPose) 

enum class EIdentityTreeNodeIdentifier;
template<> struct TIsUEnumClass<EIdentityTreeNodeIdentifier> { enum { Value = true }; };
template<> METAHUMANIDENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EIdentityTreeNodeIdentifier>();
// ********** End Enum EIdentityTreeNodeIdentifier *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
