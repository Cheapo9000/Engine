// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatureStateChangeObserver.h"

#ifdef GAMEFEATURES_GameFeatureStateChangeObserver_generated_h
#error "GameFeatureStateChangeObserver.generated.h already included, missing '#pragma once' in GameFeatureStateChangeObserver.h"
#endif
#define GAMEFEATURES_GameFeatureStateChangeObserver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UGameFeatureStateChangeObserver **************************************
struct Z_Construct_UClass_UGameFeatureStateChangeObserver_Statics;
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister();

#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEFEATURES_API UGameFeatureStateChangeObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureStateChangeObserver(UGameFeatureStateChangeObserver&&) = delete; \
	UGameFeatureStateChangeObserver(const UGameFeatureStateChangeObserver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEFEATURES_API, UGameFeatureStateChangeObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureStateChangeObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureStateChangeObserver) \
	virtual ~UGameFeatureStateChangeObserver() = default;


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameFeatureStateChangeObserver(); \
	friend struct ::Z_Construct_UClass_UGameFeatureStateChangeObserver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEFEATURES_API UClass* ::Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeatureStateChangeObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameFeatures"), Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister) \
	DECLARE_SERIALIZER(UGameFeatureStateChangeObserver)


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameFeatureStateChangeObserver() {} \
public: \
	typedef UGameFeatureStateChangeObserver UClassType; \
	typedef IGameFeatureStateChangeObserver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureStateChangeObserver;

// ********** End Interface UGameFeatureStateChangeObserver ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
