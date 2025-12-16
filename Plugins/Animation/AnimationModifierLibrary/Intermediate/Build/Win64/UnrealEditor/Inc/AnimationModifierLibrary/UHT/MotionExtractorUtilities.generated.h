// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionExtractorUtilities.h"

#ifdef ANIMATIONMODIFIERLIBRARY_MotionExtractorUtilities_generated_h
#error "MotionExtractorUtilities.generated.h already included, missing '#pragma once' in MotionExtractorUtilities.h"
#endif
#define ANIMATIONMODIFIERLIBRARY_MotionExtractorUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
enum class EMotionExtractor_Axis : uint8;
enum class EMotionExtractor_MotionType : uint8;

// ********** Begin Class UMotionExtractorUtilityLibrary *******************************************
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMovingRangesFromRootMotion); \
	DECLARE_FUNCTION(execGetStoppedRangesFromRootMotion); \
	DECLARE_FUNCTION(execGetDesiredValue); \
	DECLARE_FUNCTION(execGenerateCurveName);


struct Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics;
ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UMotionExtractorUtilityLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionExtractorUtilityLibrary(); \
	friend struct ::Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONMODIFIERLIBRARY_API UClass* ::Z_Construct_UClass_UMotionExtractorUtilityLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionExtractorUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationModifierLibrary"), Z_Construct_UClass_UMotionExtractorUtilityLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMotionExtractorUtilityLibrary)


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONMODIFIERLIBRARY_API UMotionExtractorUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionExtractorUtilityLibrary(UMotionExtractorUtilityLibrary&&) = delete; \
	UMotionExtractorUtilityLibrary(const UMotionExtractorUtilityLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONMODIFIERLIBRARY_API, UMotionExtractorUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionExtractorUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionExtractorUtilityLibrary) \
	ANIMATIONMODIFIERLIBRARY_API virtual ~UMotionExtractorUtilityLibrary();


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_17_PROLOG
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionExtractorUtilityLibrary;

// ********** End Class UMotionExtractorUtilityLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
