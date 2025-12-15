// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimationAsset.h"

#ifdef ENGINE_AnimationAsset_generated_h
#error "AnimationAsset.generated.h already included, missing '#pragma once' in AnimationAsset.h"
#endif
#define ENGINE_AnimationAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMetaData;
class UClass;
class USkeletalMesh;

// ********** Begin ScriptStruct FBlendSampleData **************************************************
struct Z_Construct_UScriptStruct_FBlendSampleData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_123_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendSampleData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlendSampleData;
// ********** End ScriptStruct FBlendSampleData ****************************************************

// ********** Begin ScriptStruct FBlendFilter ******************************************************
struct Z_Construct_UScriptStruct_FBlendFilter_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_210_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendFilter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlendFilter;
// ********** End ScriptStruct FBlendFilter ********************************************************

// ********** Begin ScriptStruct FMarkerSyncAnimPosition *******************************************
struct Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_362_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMarkerSyncAnimPosition;
// ********** End ScriptStruct FMarkerSyncAnimPosition *********************************************

// ********** Begin ScriptStruct FAnimTickRecord ***************************************************
struct Z_Construct_UScriptStruct_FAnimTickRecord_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_412_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimTickRecord_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimTickRecord;
// ********** End ScriptStruct FAnimTickRecord *****************************************************

// ********** Begin ScriptStruct FAnimGroupInstance ************************************************
struct Z_Construct_UScriptStruct_FAnimGroupInstance_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_643_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimGroupInstance_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimGroupInstance;
// ********** End ScriptStruct FAnimGroupInstance **************************************************

// ********** Begin ScriptStruct FRootMotionMovementParams *****************************************
struct Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_712_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRootMotionMovementParams;
// ********** End ScriptStruct FRootMotionMovementParams *******************************************

// ********** Begin ScriptStruct FAnimationGroupReference ******************************************
struct Z_Construct_UScriptStruct_FAnimationGroupReference_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_996_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationGroupReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimationGroupReference;
// ********** End ScriptStruct FAnimationGroupReference ********************************************

// ********** Begin Class UAnimationAsset **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindMetaDataByClass); \
	DECLARE_FUNCTION(execGetPlayLength);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetPreviewSkeletalMesh);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationAsset, ENGINE_API)


struct Z_Construct_UClass_UAnimationAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationAsset(); \
	friend struct ::Z_Construct_UClass_UAnimationAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimationAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimationAsset_NoRegister) \
	DECLARE_SERIALIZER(UAnimationAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationAsset*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationAsset(UAnimationAsset&&) = delete; \
	UAnimationAsset(const UAnimationAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAsset) \
	ENGINE_API virtual ~UAnimationAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1018_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_1021_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationAsset;

// ********** End Class UAnimationAsset ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h

// ********** Begin Enum EAnimGroupRole ************************************************************
#define FOREACH_ENUM_EANIMGROUPROLE(op) \
	op(EAnimGroupRole::CanBeLeader) \
	op(EAnimGroupRole::AlwaysFollower) \
	op(EAnimGroupRole::AlwaysLeader) \
	op(EAnimGroupRole::TransitionLeader) \
	op(EAnimGroupRole::TransitionFollower) \
	op(EAnimGroupRole::ExclusiveAlwaysLeader) 

namespace EAnimGroupRole { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimGroupRole::Type>();
// ********** End Enum EAnimGroupRole **************************************************************

// ********** Begin Enum EAnimSyncGroupScope *******************************************************
#define FOREACH_ENUM_EANIMSYNCGROUPSCOPE(op) \
	op(EAnimSyncGroupScope::Local) \
	op(EAnimSyncGroupScope::Component) 

enum class EAnimSyncGroupScope : uint8;
template<> struct TIsUEnumClass<EAnimSyncGroupScope> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimSyncGroupScope>();
// ********** End Enum EAnimSyncGroupScope *********************************************************

// ********** Begin Enum EAnimSyncMethod ***********************************************************
#define FOREACH_ENUM_EANIMSYNCMETHOD(op) \
	op(EAnimSyncMethod::DoNotSync) \
	op(EAnimSyncMethod::SyncGroup) \
	op(EAnimSyncMethod::Graph) 

enum class EAnimSyncMethod : uint8;
template<> struct TIsUEnumClass<EAnimSyncMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimSyncMethod>();
// ********** End Enum EAnimSyncMethod *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
