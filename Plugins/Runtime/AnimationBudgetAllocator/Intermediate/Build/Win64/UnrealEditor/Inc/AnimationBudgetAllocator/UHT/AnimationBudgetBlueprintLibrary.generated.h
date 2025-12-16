// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationBudgetBlueprintLibrary.h"

#ifdef ANIMATIONBUDGETALLOCATOR_AnimationBudgetBlueprintLibrary_generated_h
#error "AnimationBudgetBlueprintLibrary.generated.h already included, missing '#pragma once' in AnimationBudgetBlueprintLibrary.h"
#endif
#define ANIMATIONBUDGETALLOCATOR_AnimationBudgetBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAnimationBudgetAllocatorParameters;

// ********** Begin Class UAnimationBudgetBlueprintLibrary *****************************************
#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAnimationBudgetParameters); \
	DECLARE_FUNCTION(execEnableAnimationBudget);


struct Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics;
ANIMATIONBUDGETALLOCATOR_API UClass* Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationBudgetBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONBUDGETALLOCATOR_API UClass* ::Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationBudgetBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationBudgetAllocator"), Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimationBudgetBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationBudgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationBudgetBlueprintLibrary(UAnimationBudgetBlueprintLibrary&&) = delete; \
	UAnimationBudgetBlueprintLibrary(const UAnimationBudgetBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationBudgetBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBudgetBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBudgetBlueprintLibrary) \
	NO_API virtual ~UAnimationBudgetBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationBudgetBlueprintLibrary;

// ********** End Class UAnimationBudgetBlueprintLibrary *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
