// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationSharingManager.h"

#ifdef ANIMATIONSHARING_AnimationSharingManager_generated_h
#error "AnimationSharingManager.generated.h already included, missing '#pragma once' in AnimationSharingManager.h"
#endif
#define ANIMATIONSHARING_AnimationSharingManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimationSharingManager;
class UAnimationSharingSetup;
class UObject;
class USkeleton;

// ********** Begin Class UAnimSharingInstance *****************************************************
struct Z_Construct_UClass_UAnimSharingInstance_Statics;
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingInstance_NoRegister();

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_279_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSharingInstance(); \
	friend struct ::Z_Construct_UClass_UAnimSharingInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONSHARING_API UClass* ::Z_Construct_UClass_UAnimSharingInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSharingInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharing"), Z_Construct_UClass_UAnimSharingInstance_NoRegister) \
	DECLARE_SERIALIZER(UAnimSharingInstance)


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_279_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONSHARING_API UAnimSharingInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSharingInstance(UAnimSharingInstance&&) = delete; \
	UAnimSharingInstance(const UAnimSharingInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONSHARING_API, UAnimSharingInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSharingInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSharingInstance) \
	ANIMATIONSHARING_API virtual ~UAnimSharingInstance();


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_276_PROLOG
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_279_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_279_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_279_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSharingInstance;

// ********** End Class UAnimSharingInstance *******************************************************

// ********** Begin ScriptStruct FTickAnimationSharingFunction *************************************
struct Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics;
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_481_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


struct FTickAnimationSharingFunction;
// ********** End ScriptStruct FTickAnimationSharingFunction ***************************************

// ********** Begin Class UAnimationSharingManager *************************************************
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_507_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAnimationSharingEnabled); \
	DECLARE_FUNCTION(execRegisterActorWithSkeletonBP); \
	DECLARE_FUNCTION(execCreateAnimationSharingManager); \
	DECLARE_FUNCTION(execGetAnimationSharingManager);


struct Z_Construct_UClass_UAnimationSharingManager_Statics;
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingManager_NoRegister();

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_507_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSharingManager(); \
	friend struct ::Z_Construct_UClass_UAnimationSharingManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONSHARING_API UClass* ::Z_Construct_UClass_UAnimationSharingManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationSharingManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AnimationSharing"), Z_Construct_UClass_UAnimationSharingManager_NoRegister) \
	DECLARE_SERIALIZER(UAnimationSharingManager)


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_507_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONSHARING_API UAnimationSharingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationSharingManager(UAnimationSharingManager&&) = delete; \
	UAnimationSharingManager(const UAnimationSharingManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONSHARING_API, UAnimationSharingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingManager) \
	ANIMATIONSHARING_API virtual ~UAnimationSharingManager();


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_504_PROLOG
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_507_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_507_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_507_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_507_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationSharingManager;

// ********** End Class UAnimationSharingManager ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
