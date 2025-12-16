// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatureAction.h"

#ifdef GAMEFEATURES_GameFeatureAction_generated_h
#error "GameFeatureAction.generated.h already included, missing '#pragma once' in GameFeatureAction.h"
#endif
#define GAMEFEATURES_GameFeatureAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameFeatureAction *******************************************************
struct Z_Construct_UClass_UGameFeatureAction_Statics;
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();

#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeatureAction(); \
	friend struct ::Z_Construct_UClass_UGameFeatureAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEFEATURES_API UClass* ::Z_Construct_UClass_UGameFeatureAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeatureAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameFeatures"), Z_Construct_UClass_UGameFeatureAction_NoRegister) \
	DECLARE_SERIALIZER(UGameFeatureAction)


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEFEATURES_API UGameFeatureAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureAction(UGameFeatureAction&&) = delete; \
	UGameFeatureAction(const UGameFeatureAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEFEATURES_API, UGameFeatureAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureAction) \
	GAMEFEATURES_API virtual ~UGameFeatureAction();


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureAction;

// ********** End Class UGameFeatureAction *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
