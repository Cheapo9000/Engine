// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InsightsSkeletalMeshComponent.h"

#ifdef GAMEPLAYINSIGHTSEDITOR_InsightsSkeletalMeshComponent_generated_h
#error "InsightsSkeletalMeshComponent.generated.h already included, missing '#pragma once' in InsightsSkeletalMeshComponent.h"
#endif
#define GAMEPLAYINSIGHTSEDITOR_InsightsSkeletalMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInsightsSkeletalMeshComponent *******************************************
struct Z_Construct_UClass_UInsightsSkeletalMeshComponent_Statics;
GAMEPLAYINSIGHTSEDITOR_API UClass* Z_Construct_UClass_UInsightsSkeletalMeshComponent_NoRegister();

#define FID_Engine_Plugins_Animation_GameplayInsights_Source_GameplayInsightsEditor_Public_InsightsSkeletalMeshComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInsightsSkeletalMeshComponent(); \
	friend struct ::Z_Construct_UClass_UInsightsSkeletalMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYINSIGHTSEDITOR_API UClass* ::Z_Construct_UClass_UInsightsSkeletalMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInsightsSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayInsightsEditor"), Z_Construct_UClass_UInsightsSkeletalMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UInsightsSkeletalMeshComponent)


#define FID_Engine_Plugins_Animation_GameplayInsights_Source_GameplayInsightsEditor_Public_InsightsSkeletalMeshComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYINSIGHTSEDITOR_API UInsightsSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInsightsSkeletalMeshComponent(UInsightsSkeletalMeshComponent&&) = delete; \
	UInsightsSkeletalMeshComponent(const UInsightsSkeletalMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYINSIGHTSEDITOR_API, UInsightsSkeletalMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInsightsSkeletalMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInsightsSkeletalMeshComponent) \
	GAMEPLAYINSIGHTSEDITOR_API virtual ~UInsightsSkeletalMeshComponent();


#define FID_Engine_Plugins_Animation_GameplayInsights_Source_GameplayInsightsEditor_Public_InsightsSkeletalMeshComponent_h_15_PROLOG
#define FID_Engine_Plugins_Animation_GameplayInsights_Source_GameplayInsightsEditor_Public_InsightsSkeletalMeshComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_GameplayInsightsEditor_Public_InsightsSkeletalMeshComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_GameplayInsightsEditor_Public_InsightsSkeletalMeshComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInsightsSkeletalMeshComponent;

// ********** End Class UInsightsSkeletalMeshComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_GameplayInsights_Source_GameplayInsightsEditor_Public_InsightsSkeletalMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
