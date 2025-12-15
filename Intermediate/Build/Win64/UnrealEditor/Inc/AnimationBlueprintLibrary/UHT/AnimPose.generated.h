// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimPose.h"

#ifdef ANIMATIONBLUEPRINTLIBRARY_AnimPose_generated_h
#error "AnimPose.generated.h already included, missing '#pragma once' in AnimPose.h"
#endif
#define ANIMATIONBLUEPRINTLIBRARY_AnimPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimBlueprint;
class UAnimSequenceBase;
class USkeletalMesh;
class USkeleton;
enum class EAnimPoseSpaces : uint8;
struct FAnimPose;
struct FAnimPoseEvaluationOptions;

// ********** Begin ScriptStruct FAnimPoseEvaluationOptions ****************************************
struct Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics;
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics; \
	ANIMATIONBLUEPRINTLIBRARY_API static class UScriptStruct* StaticStruct();


struct FAnimPoseEvaluationOptions;
// ********** End ScriptStruct FAnimPoseEvaluationOptions ******************************************

// ********** Begin ScriptStruct FAnimPose *********************************************************
struct Z_Construct_UScriptStruct_FAnimPose_Statics;
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimPose_Statics; \
	ANIMATIONBLUEPRINTLIBRARY_API static class UScriptStruct* StaticStruct();


struct FAnimPose;
// ********** End ScriptStruct FAnimPose ***********************************************************

// ********** Begin Class UAnimPoseExtensions ******************************************************
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurveWeight); \
	DECLARE_FUNCTION(execGetCurveNames); \
	DECLARE_FUNCTION(execGetReferencePose); \
	DECLARE_FUNCTION(execEvaluateAnimationBlueprintWithInputPose); \
	DECLARE_FUNCTION(execGetAnimPoseAtFrame); \
	DECLARE_FUNCTION(execGetAnimPoseAtTime); \
	DECLARE_FUNCTION(execGetSocketPose); \
	DECLARE_FUNCTION(execGetSocketNames); \
	DECLARE_FUNCTION(execGetRefPoseRelativeTransform); \
	DECLARE_FUNCTION(execGetRelativeToRefPoseTransform); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execGetRefBonePose); \
	DECLARE_FUNCTION(execSetBonePose); \
	DECLARE_FUNCTION(execGetBonePose); \
	DECLARE_FUNCTION(execGetBoneNames); \
	DECLARE_FUNCTION(execIsValid);


struct Z_Construct_UClass_UAnimPoseExtensions_Statics;
ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UAnimPoseExtensions_NoRegister();

#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimPoseExtensions(); \
	friend struct ::Z_Construct_UClass_UAnimPoseExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONBLUEPRINTLIBRARY_API UClass* ::Z_Construct_UClass_UAnimPoseExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimPoseExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationBlueprintLibrary"), Z_Construct_UClass_UAnimPoseExtensions_NoRegister) \
	DECLARE_SERIALIZER(UAnimPoseExtensions)


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_160_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONBLUEPRINTLIBRARY_API UAnimPoseExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimPoseExtensions(UAnimPoseExtensions&&) = delete; \
	UAnimPoseExtensions(const UAnimPoseExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONBLUEPRINTLIBRARY_API, UAnimPoseExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimPoseExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimPoseExtensions) \
	ANIMATIONBLUEPRINTLIBRARY_API virtual ~UAnimPoseExtensions();


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_157_PROLOG
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_160_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_160_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimPoseExtensions;

// ********** End Class UAnimPoseExtensions ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h

// ********** Begin Enum EAnimPoseSpaces ***********************************************************
#define FOREACH_ENUM_EANIMPOSESPACES(op) \
	op(EAnimPoseSpaces::Local) \
	op(EAnimPoseSpaces::World) 

enum class EAnimPoseSpaces : uint8;
template<> struct TIsUEnumClass<EAnimPoseSpaces> { enum { Value = true }; };
template<> ANIMATIONBLUEPRINTLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimPoseSpaces>();
// ********** End Enum EAnimPoseSpaces *************************************************************

// ********** Begin Enum EAnimDataEvalType *********************************************************
#define FOREACH_ENUM_EANIMDATAEVALTYPE(op) \
	op(EAnimDataEvalType::Source) \
	op(EAnimDataEvalType::Raw) \
	op(EAnimDataEvalType::Compressed) 

enum class EAnimDataEvalType : uint8;
template<> struct TIsUEnumClass<EAnimDataEvalType> { enum { Value = true }; };
template<> ANIMATIONBLUEPRINTLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimDataEvalType>();
// ********** End Enum EAnimDataEvalType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
