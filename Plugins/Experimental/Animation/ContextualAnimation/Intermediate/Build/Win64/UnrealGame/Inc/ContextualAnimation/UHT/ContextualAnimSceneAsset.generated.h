// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimSceneAsset.h"

#ifdef CONTEXTUALANIMATION_ContextualAnimSceneAsset_generated_h
#error "ContextualAnimSceneAsset.generated.h already included, missing '#pragma once' in ContextualAnimSceneAsset.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimSceneAsset_generated_h

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

// ********** Begin ScriptStruct FContextualAnimIgnoreChannelsParam ********************************
struct Z_Construct_UScriptStruct_FContextualAnimIgnoreChannelsParam_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimIgnoreChannelsParam_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


struct FContextualAnimIgnoreChannelsParam;
// ********** End ScriptStruct FContextualAnimIgnoreChannelsParam **********************************

// ********** Begin ScriptStruct FContextualAnimAttachmentParams ***********************************
struct Z_Construct_UScriptStruct_FContextualAnimAttachmentParams_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimAttachmentParams_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


struct FContextualAnimAttachmentParams;
// ********** End ScriptStruct FContextualAnimAttachmentParams *************************************

// ********** Begin Class UContextualAnimRolesAsset ************************************************
struct Z_Construct_UClass_UContextualAnimRolesAsset_Statics;
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimRolesAsset_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimRolesAsset(); \
	friend struct ::Z_Construct_UClass_UContextualAnimRolesAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATION_API UClass* ::Z_Construct_UClass_UContextualAnimRolesAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimRolesAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), Z_Construct_UClass_UContextualAnimRolesAsset_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimRolesAsset)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimRolesAsset(UContextualAnimRolesAsset&&) = delete; \
	UContextualAnimRolesAsset(const UContextualAnimRolesAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTEXTUALANIMATION_API, UContextualAnimRolesAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimRolesAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimRolesAsset) \
	CONTEXTUALANIMATION_API virtual ~UContextualAnimRolesAsset();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_49_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimRolesAsset;

// ********** End Class UContextualAnimRolesAsset **************************************************

// ********** Begin ScriptStruct FContextualAnimSet ************************************************
struct Z_Construct_UScriptStruct_FContextualAnimSet_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimSet_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


struct FContextualAnimSet;
// ********** End ScriptStruct FContextualAnimSet **************************************************

// ********** Begin ScriptStruct FContextualAnimSceneSection ***************************************
struct Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


struct FContextualAnimSceneSection;
// ********** End ScriptStruct FContextualAnimSceneSection *****************************************

// ********** Begin ScriptStruct FContextualAnimPoint **********************************************
struct Z_Construct_UScriptStruct_FContextualAnimPoint_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimPoint_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


struct FContextualAnimPoint;
// ********** End ScriptStruct FContextualAnimPoint ************************************************

// ********** Begin ScriptStruct FContextualAnimActorPreviewData ***********************************
struct Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_199_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


struct FContextualAnimActorPreviewData;
// ********** End ScriptStruct FContextualAnimActorPreviewData *************************************

// ********** Begin Class UContextualAnimSceneAsset ************************************************
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_223_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuery); \
	DECLARE_FUNCTION(execBP_GetStartAndEndTimeForWarpSection); \
	DECLARE_FUNCTION(execBP_GetIKTargetTransformForRoleAtTime); \
	DECLARE_FUNCTION(execBP_GetAlignmentTransformForRoleRelativeToWarpPoint); \
	DECLARE_FUNCTION(execBP_FindAnimSetIndexByAnimation); \
	DECLARE_FUNCTION(execBP_FindAnimationForRole); \
	DECLARE_FUNCTION(execGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria); \
	DECLARE_FUNCTION(execGetAlignmentPointsForSecondaryRole); \
	DECLARE_FUNCTION(execGetRoles);


struct Z_Construct_UClass_UContextualAnimSceneAsset_Statics;
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_223_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSceneAsset(); \
	friend struct ::Z_Construct_UClass_UContextualAnimSceneAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATION_API UClass* ::Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimSceneAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimSceneAsset)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_223_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimSceneAsset(UContextualAnimSceneAsset&&) = delete; \
	UContextualAnimSceneAsset(const UContextualAnimSceneAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTEXTUALANIMATION_API, UContextualAnimSceneAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSceneAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSceneAsset) \
	CONTEXTUALANIMATION_API virtual ~UContextualAnimSceneAsset();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_220_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_223_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_223_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_223_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_223_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimSceneAsset;

// ********** End Class UContextualAnimSceneAsset **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h

// ********** Begin Enum EContextualAnimCollisionBehavior ******************************************
#define FOREACH_ENUM_ECONTEXTUALANIMCOLLISIONBEHAVIOR(op) \
	op(EContextualAnimCollisionBehavior::None) \
	op(EContextualAnimCollisionBehavior::IgnoreActorWhenMoving) \
	op(EContextualAnimCollisionBehavior::IgnoreChannels) 

enum class EContextualAnimCollisionBehavior : uint8;
template<> struct TIsUEnumClass<EContextualAnimCollisionBehavior> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EContextualAnimCollisionBehavior>();
// ********** End Enum EContextualAnimCollisionBehavior ********************************************

// ********** Begin Enum EContextualAnimPointType **************************************************
#define FOREACH_ENUM_ECONTEXTUALANIMPOINTTYPE(op) \
	op(EContextualAnimPointType::FirstFrame) \
	op(EContextualAnimPointType::SyncFrame) \
	op(EContextualAnimPointType::LastFrame) 

enum class EContextualAnimPointType : uint8;
template<> struct TIsUEnumClass<EContextualAnimPointType> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EContextualAnimPointType>();
// ********** End Enum EContextualAnimPointType ****************************************************

// ********** Begin Enum EContextualAnimCriterionToConsider ****************************************
#define FOREACH_ENUM_ECONTEXTUALANIMCRITERIONTOCONSIDER(op) \
	op(EContextualAnimCriterionToConsider::All) \
	op(EContextualAnimCriterionToConsider::Spatial) \
	op(EContextualAnimCriterionToConsider::Other) 

enum class EContextualAnimCriterionToConsider : uint8;
template<> struct TIsUEnumClass<EContextualAnimCriterionToConsider> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EContextualAnimCriterionToConsider>();
// ********** End Enum EContextualAnimCriterionToConsider ******************************************

// ********** Begin Enum EContextualAnimActorPreviewType *******************************************
#define FOREACH_ENUM_ECONTEXTUALANIMACTORPREVIEWTYPE(op) \
	op(EContextualAnimActorPreviewType::SkeletalMesh) \
	op(EContextualAnimActorPreviewType::StaticMesh) \
	op(EContextualAnimActorPreviewType::Actor) \
	op(EContextualAnimActorPreviewType::None) 

enum class EContextualAnimActorPreviewType : uint8;
template<> struct TIsUEnumClass<EContextualAnimActorPreviewType> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EContextualAnimActorPreviewType>();
// ********** End Enum EContextualAnimActorPreviewType *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
