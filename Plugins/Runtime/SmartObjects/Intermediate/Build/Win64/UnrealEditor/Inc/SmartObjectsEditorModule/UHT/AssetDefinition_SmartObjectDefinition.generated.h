// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_SmartObjectDefinition.h"

#ifdef SMARTOBJECTSEDITORMODULE_AssetDefinition_SmartObjectDefinition_generated_h
#error "AssetDefinition_SmartObjectDefinition.generated.h already included, missing '#pragma once' in AssetDefinition_SmartObjectDefinition.h"
#endif
#define SMARTOBJECTSEDITORMODULE_AssetDefinition_SmartObjectDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_SmartObjectDefinition ***********************************
struct Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_Statics;
SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_SmartObjectDefinition(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSEDITORMODULE_API UClass* ::Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_SmartObjectDefinition, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SmartObjectsEditorModule"), Z_Construct_UClass_UAssetDefinition_SmartObjectDefinition_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_SmartObjectDefinition)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_SmartObjectDefinition(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_SmartObjectDefinition(UAssetDefinition_SmartObjectDefinition&&) = delete; \
	UAssetDefinition_SmartObjectDefinition(const UAssetDefinition_SmartObjectDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_SmartObjectDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_SmartObjectDefinition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_SmartObjectDefinition) \
	NO_API virtual ~UAssetDefinition_SmartObjectDefinition();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h_8_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_SmartObjectDefinition;

// ********** End Class UAssetDefinition_SmartObjectDefinition *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_AssetDefinition_SmartObjectDefinition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
