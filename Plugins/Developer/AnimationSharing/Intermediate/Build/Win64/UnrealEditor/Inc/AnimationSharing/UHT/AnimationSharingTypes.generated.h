// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationSharingTypes.h"

#ifdef ANIMATIONSHARING_AnimationSharingTypes_generated_h
#error "AnimationSharingTypes.generated.h already included, missing '#pragma once' in AnimationSharingTypes.h"
#endif
#define ANIMATIONSHARING_AnimationSharingTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEnum;

// ********** Begin ScriptStruct FAnimationSetup ***************************************************
struct Z_Construct_UScriptStruct_FAnimationSetup_Statics;
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationSetup_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


struct FAnimationSetup;
// ********** End ScriptStruct FAnimationSetup *****************************************************

// ********** Begin ScriptStruct FAnimationStateEntry **********************************************
struct Z_Construct_UScriptStruct_FAnimationStateEntry_Statics;
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationStateEntry_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


struct FAnimationStateEntry;
// ********** End ScriptStruct FAnimationStateEntry ************************************************

// ********** Begin Class UAnimationSharingStateProcessor ******************************************
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAnimationStateEnum); \
	DECLARE_FUNCTION(execProcessActorState);


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_98_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAnimationSharingStateProcessor_Statics;
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister();

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSharingStateProcessor(); \
	friend struct ::Z_Construct_UClass_UAnimationSharingStateProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONSHARING_API UClass* ::Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationSharingStateProcessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharing"), Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister) \
	DECLARE_SERIALIZER(UAnimationSharingStateProcessor)


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONSHARING_API UAnimationSharingStateProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationSharingStateProcessor(UAnimationSharingStateProcessor&&) = delete; \
	UAnimationSharingStateProcessor(const UAnimationSharingStateProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONSHARING_API, UAnimationSharingStateProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingStateProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingStateProcessor) \
	ANIMATIONSHARING_API virtual ~UAnimationSharingStateProcessor();


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_PROLOG
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_98_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationSharingStateProcessor;

// ********** End Class UAnimationSharingStateProcessor ********************************************

// ********** Begin ScriptStruct FPerSkeletonAnimationSharingSetup *********************************
struct Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics;
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_132_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


struct FPerSkeletonAnimationSharingSetup;
// ********** End ScriptStruct FPerSkeletonAnimationSharingSetup ***********************************

// ********** Begin ScriptStruct FAnimationSharingScalability **************************************
struct Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics;
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_168_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


struct FAnimationSharingScalability;
// ********** End ScriptStruct FAnimationSharingScalability ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
