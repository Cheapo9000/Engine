// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionWarpingComponent.h"

#ifdef MOTIONWARPING_MotionWarpingComponent_generated_h
#error "MotionWarpingComponent.generated.h already included, missing '#pragma once' in MotionWarpingComponent.h"
#endif
#define MOTIONWARPING_MotionWarpingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
class UAnimSequenceBase;
class UMotionWarpingComponent;
class UMotionWarpingSwitchOffCondition;
class USceneComponent;
enum class EWarpTargetLocationOffsetDirection : uint8;
struct FMotionWarpingTarget;
struct FMotionWarpingWindowData;

// ********** Begin ScriptStruct FMotionWarpingWindowData ******************************************
struct Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics;
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics; \
	MOTIONWARPING_API static class UScriptStruct* StaticStruct();


struct FMotionWarpingWindowData;
// ********** End ScriptStruct FMotionWarpingWindowData ********************************************

// ********** Begin Class UMotionWarpingUtilities **************************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExtractBoneTransformFromAnimationAtTime); \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsForWarpTargetFromAnimation); \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsFromAnimation); \
	DECLARE_FUNCTION(execExtractRootMotionFromAnimation);


struct Z_Construct_UClass_UMotionWarpingUtilities_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingUtilities_NoRegister();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingUtilities(); \
	friend struct ::Z_Construct_UClass_UMotionWarpingUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UMotionWarpingUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionWarpingUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UMotionWarpingUtilities_NoRegister) \
	DECLARE_SERIALIZER(UMotionWarpingUtilities)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOTIONWARPING_API UMotionWarpingUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionWarpingUtilities(UMotionWarpingUtilities&&) = delete; \
	UMotionWarpingUtilities(const UMotionWarpingUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, UMotionWarpingUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingUtilities) \
	MOTIONWARPING_API virtual ~UMotionWarpingUtilities();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_54_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionWarpingUtilities;

// ********** End Class UMotionWarpingUtilities ****************************************************

// ********** Begin Delegate FMotionWarpingPreUpdate ***********************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_96_DELEGATE \
MOTIONWARPING_API void FMotionWarpingPreUpdate_DelegateWrapper(const FMulticastScriptDelegate& MotionWarpingPreUpdate, UMotionWarpingComponent* MotionWarpingComp);


// ********** End Delegate FMotionWarpingPreUpdate *************************************************

// ********** Begin Class UMotionWarpingComponent **************************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddSwitchOffCondition); \
	DECLARE_FUNCTION(execRemoveWarpTargets); \
	DECLARE_FUNCTION(execRemoveAllWarpTargets); \
	DECLARE_FUNCTION(execRemoveWarpTarget); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocationAndRotation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromComponent); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromTransform); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTarget); \
	DECLARE_FUNCTION(execDisableAllRootMotionModifiers);


struct Z_Construct_UClass_UMotionWarpingComponent_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingComponent(); \
	friend struct ::Z_Construct_UClass_UMotionWarpingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UMotionWarpingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionWarpingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UMotionWarpingComponent_NoRegister) \
	DECLARE_SERIALIZER(UMotionWarpingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WarpTargets=NETFIELD_REP_START, \
		NETFIELD_REP_END=WarpTargets	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(MOTIONWARPING_API)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_101_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionWarpingComponent(UMotionWarpingComponent&&) = delete; \
	UMotionWarpingComponent(const UMotionWarpingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, UMotionWarpingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingComponent) \
	MOTIONWARPING_API virtual ~UMotionWarpingComponent();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_98_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionWarpingComponent;

// ********** End Class UMotionWarpingComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
