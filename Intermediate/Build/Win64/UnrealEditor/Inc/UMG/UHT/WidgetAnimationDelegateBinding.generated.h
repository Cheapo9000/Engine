// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/WidgetAnimationDelegateBinding.h"

#ifdef UMG_WidgetAnimationDelegateBinding_generated_h
#error "WidgetAnimationDelegateBinding.generated.h already included, missing '#pragma once' in WidgetAnimationDelegateBinding.h"
#endif
#define UMG_WidgetAnimationDelegateBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintWidgetAnimationDelegateBinding **************************
struct Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FBlueprintWidgetAnimationDelegateBinding;
// ********** End ScriptStruct FBlueprintWidgetAnimationDelegateBinding ****************************

// ********** Begin Class UWidgetAnimationDelegateBinding ******************************************
struct Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics;
UMG_API UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetAnimationDelegateBinding(); \
	friend struct ::Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWidgetAnimationDelegateBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetAnimationDelegateBinding, UDynamicBlueprintBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWidgetAnimationDelegateBinding_NoRegister) \
	DECLARE_SERIALIZER(UWidgetAnimationDelegateBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetAnimationDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetAnimationDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetAnimationDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetAnimationDelegateBinding); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetAnimationDelegateBinding(UWidgetAnimationDelegateBinding&&) = delete; \
	UWidgetAnimationDelegateBinding(const UWidgetAnimationDelegateBinding&) = delete; \
	UMG_API virtual ~UWidgetAnimationDelegateBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_39_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_42_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetAnimationDelegateBinding;

// ********** End Class UWidgetAnimationDelegateBinding ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
