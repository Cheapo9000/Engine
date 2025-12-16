// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatureAction_AudioActionBase.h"

#ifdef GAMEFEATURES_GameFeatureAction_AudioActionBase_generated_h
#error "GameFeatureAction_AudioActionBase.generated.h already included, missing '#pragma once' in GameFeatureAction_AudioActionBase.h"
#endif
#define GAMEFEATURES_GameFeatureAction_AudioActionBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameFeatureAction_AudioActionBase ***************************************
struct Z_Construct_UClass_UGameFeatureAction_AudioActionBase_Statics;
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AudioActionBase_NoRegister();

#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AudioActionBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeatureAction_AudioActionBase(); \
	friend struct ::Z_Construct_UClass_UGameFeatureAction_AudioActionBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEFEATURES_API UClass* ::Z_Construct_UClass_UGameFeatureAction_AudioActionBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeatureAction_AudioActionBase, UGameFeatureAction, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameFeatures"), Z_Construct_UClass_UGameFeatureAction_AudioActionBase_NoRegister) \
	DECLARE_SERIALIZER(UGameFeatureAction_AudioActionBase)


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AudioActionBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEFEATURES_API UGameFeatureAction_AudioActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureAction_AudioActionBase(UGameFeatureAction_AudioActionBase&&) = delete; \
	UGameFeatureAction_AudioActionBase(const UGameFeatureAction_AudioActionBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEFEATURES_API, UGameFeatureAction_AudioActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureAction_AudioActionBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureAction_AudioActionBase) \
	GAMEFEATURES_API virtual ~UGameFeatureAction_AudioActionBase();


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AudioActionBase_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AudioActionBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AudioActionBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AudioActionBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureAction_AudioActionBase;

// ********** End Class UGameFeatureAction_AudioActionBase *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AudioActionBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
