// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimSceneAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
enum class EContextualAnimCriterionToConsider : uint8;
enum class EContextualAnimPointType : uint8;
struct FContextualAnimPoint;
struct FContextualAnimQueryParams;
struct FContextualAnimQueryResult;
struct FContextualAnimSceneBindingContext;
#ifdef CONTEXTUALANIMATION_ContextualAnimSceneAsset_generated_h
#error "ContextualAnimSceneAsset.generated.h already included, missing '#pragma once' in ContextualAnimSceneAsset.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimSceneAsset_generated_h

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimIgnoreChannelsParam_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimIgnoreChannelsParam>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimAttachmentParams_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimAttachmentParams>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimRolesAsset(); \
	friend struct Z_Construct_UClass_UContextualAnimRolesAsset_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimRolesAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimRolesAsset)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContextualAnimRolesAsset(UContextualAnimRolesAsset&&); \
	UContextualAnimRolesAsset(const UContextualAnimRolesAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimRolesAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimRolesAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimRolesAsset) \
	NO_API virtual ~UContextualAnimRolesAsset();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_47_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimRolesAsset>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimSet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimSet>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimSceneSection>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimPoint_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimPoint>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimActorPreviewData>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuery); \
	DECLARE_FUNCTION(execBP_GetStartAndEndTimeForWarpSection); \
	DECLARE_FUNCTION(execBP_GetIKTargetTransformForRoleAtTime); \
	DECLARE_FUNCTION(execBP_GetAlignmentTransformForRoleRelativeToWarpPoint); \
	DECLARE_FUNCTION(execBP_FindAnimSetIndexByAnimation); \
	DECLARE_FUNCTION(execBP_FindAnimationForRole); \
	DECLARE_FUNCTION(execGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria); \
	DECLARE_FUNCTION(execGetAlignmentPointsForSecondaryRole); \
	DECLARE_FUNCTION(execGetRoles);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_217_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSceneAsset(); \
	friend struct Z_Construct_UClass_UContextualAnimSceneAsset_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimSceneAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimSceneAsset)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_217_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContextualAnimSceneAsset(UContextualAnimSceneAsset&&); \
	UContextualAnimSceneAsset(const UContextualAnimSceneAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimSceneAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSceneAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSceneAsset) \
	NO_API virtual ~UContextualAnimSceneAsset();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_214_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_217_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_217_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_217_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimSceneAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h


#define FOREACH_ENUM_ECONTEXTUALANIMCOLLISIONBEHAVIOR(op) \
	op(EContextualAnimCollisionBehavior::None) \
	op(EContextualAnimCollisionBehavior::IgnoreActorWhenMoving) \
	op(EContextualAnimCollisionBehavior::IgnoreChannels) 

enum class EContextualAnimCollisionBehavior : uint8;
template<> struct TIsUEnumClass<EContextualAnimCollisionBehavior> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimCollisionBehavior>();

#define FOREACH_ENUM_ECONTEXTUALANIMPOINTTYPE(op) \
	op(EContextualAnimPointType::FirstFrame) \
	op(EContextualAnimPointType::SyncFrame) \
	op(EContextualAnimPointType::LastFrame) 

enum class EContextualAnimPointType : uint8;
template<> struct TIsUEnumClass<EContextualAnimPointType> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimPointType>();

#define FOREACH_ENUM_ECONTEXTUALANIMCRITERIONTOCONSIDER(op) \
	op(EContextualAnimCriterionToConsider::All) \
	op(EContextualAnimCriterionToConsider::Spatial) \
	op(EContextualAnimCriterionToConsider::Other) 

enum class EContextualAnimCriterionToConsider : uint8;
template<> struct TIsUEnumClass<EContextualAnimCriterionToConsider> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimCriterionToConsider>();

#define FOREACH_ENUM_ECONTEXTUALANIMACTORPREVIEWTYPE(op) \
	op(EContextualAnimActorPreviewType::SkeletalMesh) \
	op(EContextualAnimActorPreviewType::StaticMesh) \
	op(EContextualAnimActorPreviewType::Actor) \
	op(EContextualAnimActorPreviewType::None) 

enum class EContextualAnimActorPreviewType : uint8;
template<> struct TIsUEnumClass<EContextualAnimActorPreviewType> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimActorPreviewType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
