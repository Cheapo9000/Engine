// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/DebugSkelMeshComponent.h"

#ifdef UNREALED_DebugSkelMeshComponent_generated_h
#error "DebugSkelMeshComponent.generated.h already included, missing '#pragma once' in DebugSkelMeshComponent.h"
#endif
#define UNREALED_DebugSkelMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSelectedSocketInfo ***********************************************
struct Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FSelectedSocketInfo;
// ********** End ScriptStruct FSelectedSocketInfo *************************************************

// ********** Begin Class UDebugSkelMeshComponent **************************************************
struct Z_Construct_UClass_UDebugSkelMeshComponent_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_199_INCLASS \
private: \
	static void StaticRegisterNativesUDebugSkelMeshComponent(); \
	friend struct ::Z_Construct_UClass_UDebugSkelMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDebugSkelMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UDebugSkelMeshComponent)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_199_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDebugSkelMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugSkelMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDebugSkelMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugSkelMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDebugSkelMeshComponent(UDebugSkelMeshComponent&&) = delete; \
	UDebugSkelMeshComponent(const UDebugSkelMeshComponent&) = delete; \
	UNREALED_API virtual ~UDebugSkelMeshComponent();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_196_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_199_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_199_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_199_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDebugSkelMeshComponent;

// ********** End Class UDebugSkelMeshComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h

// ********** Begin Enum EProcessRootMotionMode ****************************************************
#define FOREACH_ENUM_EPROCESSROOTMOTIONMODE(op) \
	op(EProcessRootMotionMode::Ignore) \
	op(EProcessRootMotionMode::Loop) \
	op(EProcessRootMotionMode::LoopAndReset) 

enum class EProcessRootMotionMode : uint8;
template<> struct TIsUEnumClass<EProcessRootMotionMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EProcessRootMotionMode>();
// ********** End Enum EProcessRootMotionMode ******************************************************

// ********** Begin Enum EVisualizeRootMotionMode **************************************************
#define FOREACH_ENUM_EVISUALIZEROOTMOTIONMODE(op) \
	op(EVisualizeRootMotionMode::None) \
	op(EVisualizeRootMotionMode::Trajectory) \
	op(EVisualizeRootMotionMode::TrajectoryAndOrientation) 

enum class EVisualizeRootMotionMode : uint8;
template<> struct TIsUEnumClass<EVisualizeRootMotionMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EVisualizeRootMotionMode>();
// ********** End Enum EVisualizeRootMotionMode ****************************************************

// ********** Begin Enum ESkeletonDrawMode *********************************************************
#define FOREACH_ENUM_ESKELETONDRAWMODE(op) \
	op(ESkeletonDrawMode::Default) \
	op(ESkeletonDrawMode::Hidden) \
	op(ESkeletonDrawMode::GreyedOut) 

enum class ESkeletonDrawMode : uint8;
template<> struct TIsUEnumClass<ESkeletonDrawMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkeletonDrawMode>();
// ********** End Enum ESkeletonDrawMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
