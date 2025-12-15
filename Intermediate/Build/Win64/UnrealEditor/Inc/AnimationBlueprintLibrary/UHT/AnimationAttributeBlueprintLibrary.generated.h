// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationAttributeBlueprintLibrary.h"

#ifdef ANIMATIONBLUEPRINTLIBRARY_AnimationAttributeBlueprintLibrary_generated_h
#error "AnimationAttributeBlueprintLibrary.generated.h already included, missing '#pragma once' in AnimationAttributeBlueprintLibrary.h"
#endif
#define ANIMATIONBLUEPRINTLIBRARY_AnimationAttributeBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAnimationDataController;
class IAnimationDataModel;
struct FAnimationAttributeIdentifier;

// ********** Begin Class UAnimationAttributeBlueprintLibrary **************************************
struct Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics;
	struct Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics; \
	struct Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics; \
	struct Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics; \
	struct Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics; \
ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationAttributeBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics; \
	friend struct ::Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics; \
	friend struct ::Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics; \
	friend struct ::Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONBLUEPRINTLIBRARY_API UClass* ::Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationAttributeBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationBlueprintLibrary"), Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimationAttributeBlueprintLibrary)


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONBLUEPRINTLIBRARY_API UAnimationAttributeBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationAttributeBlueprintLibrary(UAnimationAttributeBlueprintLibrary&&) = delete; \
	UAnimationAttributeBlueprintLibrary(const UAnimationAttributeBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONBLUEPRINTLIBRARY_API, UAnimationAttributeBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAttributeBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAttributeBlueprintLibrary) \
	ANIMATIONBLUEPRINTLIBRARY_API virtual ~UAnimationAttributeBlueprintLibrary();


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_26_PROLOG
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationAttributeBlueprintLibrary;

// ********** End Class UAnimationAttributeBlueprintLibrary ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
