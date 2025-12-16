// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatureAction_DataRegistry.h"

#ifdef GAMEFEATURES_GameFeatureAction_DataRegistry_generated_h
#error "GameFeatureAction_DataRegistry.generated.h already included, missing '#pragma once' in GameFeatureAction_DataRegistry.h"
#endif
#define GAMEFEATURES_GameFeatureAction_DataRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameFeatureAction_DataRegistry ******************************************
struct Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics;
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_DataRegistry_NoRegister();

#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeatureAction_DataRegistry(); \
	friend struct ::Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEFEATURES_API UClass* ::Z_Construct_UClass_UGameFeatureAction_DataRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeatureAction_DataRegistry, UGameFeatureAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameFeatures"), Z_Construct_UClass_UGameFeatureAction_DataRegistry_NoRegister) \
	DECLARE_SERIALIZER(UGameFeatureAction_DataRegistry)


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEFEATURES_API UGameFeatureAction_DataRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureAction_DataRegistry(UGameFeatureAction_DataRegistry&&) = delete; \
	UGameFeatureAction_DataRegistry(const UGameFeatureAction_DataRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEFEATURES_API, UGameFeatureAction_DataRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureAction_DataRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureAction_DataRegistry) \
	GAMEFEATURES_API virtual ~UGameFeatureAction_DataRegistry();


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureAction_DataRegistry;

// ********** End Class UGameFeatureAction_DataRegistry ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
