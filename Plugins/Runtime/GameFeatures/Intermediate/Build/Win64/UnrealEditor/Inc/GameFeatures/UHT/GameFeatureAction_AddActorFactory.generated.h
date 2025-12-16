// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatureAction_AddActorFactory.h"

#ifdef GAMEFEATURES_GameFeatureAction_AddActorFactory_generated_h
#error "GameFeatureAction_AddActorFactory.generated.h already included, missing '#pragma once' in GameFeatureAction_AddActorFactory.h"
#endif
#define GAMEFEATURES_GameFeatureAction_AddActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameFeatureAction_AddActorFactory ***************************************
struct Z_Construct_UClass_UGameFeatureAction_AddActorFactory_Statics;
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AddActorFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddActorFactory_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeatureAction_AddActorFactory(); \
	friend struct ::Z_Construct_UClass_UGameFeatureAction_AddActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEFEATURES_API UClass* ::Z_Construct_UClass_UGameFeatureAction_AddActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeatureAction_AddActorFactory, UGameFeatureAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameFeatures"), Z_Construct_UClass_UGameFeatureAction_AddActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UGameFeatureAction_AddActorFactory) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddActorFactory_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEFEATURES_API UGameFeatureAction_AddActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureAction_AddActorFactory(UGameFeatureAction_AddActorFactory&&) = delete; \
	UGameFeatureAction_AddActorFactory(const UGameFeatureAction_AddActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEFEATURES_API, UGameFeatureAction_AddActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureAction_AddActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureAction_AddActorFactory) \
	GAMEFEATURES_API virtual ~UGameFeatureAction_AddActorFactory();


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddActorFactory_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddActorFactory_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddActorFactory_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddActorFactory_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureAction_AddActorFactory;

// ********** End Class UGameFeatureAction_AddActorFactory *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
