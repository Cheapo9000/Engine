// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ITDSpatializationSourceSettingsFactory.h"

#ifdef SPATIALIZATIONEDITOR_ITDSpatializationSourceSettingsFactory_generated_h
#error "ITDSpatializationSourceSettingsFactory.generated.h already included, missing '#pragma once' in ITDSpatializationSourceSettingsFactory.h"
#endif
#define SPATIALIZATIONEDITOR_ITDSpatializationSourceSettingsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UITDSpatializationSettingsFactory ****************************************
struct Z_Construct_UClass_UITDSpatializationSettingsFactory_Statics;
SPATIALIZATIONEDITOR_API UClass* Z_Construct_UClass_UITDSpatializationSettingsFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUITDSpatializationSettingsFactory(); \
	friend struct ::Z_Construct_UClass_UITDSpatializationSettingsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPATIALIZATIONEDITOR_API UClass* ::Z_Construct_UClass_UITDSpatializationSettingsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UITDSpatializationSettingsFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpatializationEditor"), Z_Construct_UClass_UITDSpatializationSettingsFactory_NoRegister) \
	DECLARE_SERIALIZER(UITDSpatializationSettingsFactory)


#define FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPATIALIZATIONEDITOR_API UITDSpatializationSettingsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UITDSpatializationSettingsFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPATIALIZATIONEDITOR_API, UITDSpatializationSettingsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UITDSpatializationSettingsFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UITDSpatializationSettingsFactory(UITDSpatializationSettingsFactory&&) = delete; \
	UITDSpatializationSettingsFactory(const UITDSpatializationSettingsFactory&) = delete; \
	SPATIALIZATIONEDITOR_API virtual ~UITDSpatializationSettingsFactory();


#define FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h_26_INCLASS \
	FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UITDSpatializationSettingsFactory;

// ********** End Class UITDSpatializationSettingsFactory ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
