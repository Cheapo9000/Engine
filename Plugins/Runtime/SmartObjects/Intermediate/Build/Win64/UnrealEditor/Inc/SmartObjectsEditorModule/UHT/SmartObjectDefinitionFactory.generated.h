// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectDefinitionFactory.h"

#ifdef SMARTOBJECTSEDITORMODULE_SmartObjectDefinitionFactory_generated_h
#error "SmartObjectDefinitionFactory.generated.h already included, missing '#pragma once' in SmartObjectDefinitionFactory.h"
#endif
#define SMARTOBJECTSEDITORMODULE_SmartObjectDefinitionFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USmartObjectDefinitionFactory ********************************************
struct Z_Construct_UClass_USmartObjectDefinitionFactory_Statics;
SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_USmartObjectDefinitionFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSmartObjectDefinitionFactory(); \
	friend struct ::Z_Construct_UClass_USmartObjectDefinitionFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSEDITORMODULE_API UClass* ::Z_Construct_UClass_USmartObjectDefinitionFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectDefinitionFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SmartObjectsEditorModule"), Z_Construct_UClass_USmartObjectDefinitionFactory_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectDefinitionFactory)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SMARTOBJECTSEDITORMODULE_API USmartObjectDefinitionFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectDefinitionFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSEDITORMODULE_API, USmartObjectDefinitionFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectDefinitionFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectDefinitionFactory(USmartObjectDefinitionFactory&&) = delete; \
	USmartObjectDefinitionFactory(const USmartObjectDefinitionFactory&) = delete; \
	SMARTOBJECTSEDITORMODULE_API virtual ~USmartObjectDefinitionFactory();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectDefinitionFactory;

// ********** End Class USmartObjectDefinitionFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
