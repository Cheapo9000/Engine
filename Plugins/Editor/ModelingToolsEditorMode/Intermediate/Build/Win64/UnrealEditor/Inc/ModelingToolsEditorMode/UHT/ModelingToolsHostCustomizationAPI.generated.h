// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelingToolsHostCustomizationAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGTOOLSEDITORMODE_ModelingToolsHostCustomizationAPI_generated_h
#error "ModelingToolsHostCustomizationAPI.generated.h already included, missing '#pragma once' in ModelingToolsHostCustomizationAPI.h"
#endif
#define MODELINGTOOLSEDITORMODE_ModelingToolsHostCustomizationAPI_generated_h

#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsHostCustomizationAPI_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelingToolsHostCustomizationAPI(); \
	friend struct Z_Construct_UClass_UModelingToolsHostCustomizationAPI_Statics; \
public: \
	DECLARE_CLASS(UModelingToolsHostCustomizationAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingToolsEditorMode"), MODELINGTOOLSEDITORMODE_API) \
	DECLARE_SERIALIZER(UModelingToolsHostCustomizationAPI) \
	virtual UObject* _getUObject() const override { return const_cast<UModelingToolsHostCustomizationAPI*>(this); }


#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsHostCustomizationAPI_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGTOOLSEDITORMODE_API UModelingToolsHostCustomizationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModelingToolsHostCustomizationAPI(UModelingToolsHostCustomizationAPI&&); \
	UModelingToolsHostCustomizationAPI(const UModelingToolsHostCustomizationAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGTOOLSEDITORMODE_API, UModelingToolsHostCustomizationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelingToolsHostCustomizationAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelingToolsHostCustomizationAPI) \
	MODELINGTOOLSEDITORMODE_API virtual ~UModelingToolsHostCustomizationAPI();


#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsHostCustomizationAPI_h_19_PROLOG
#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsHostCustomizationAPI_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsHostCustomizationAPI_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsHostCustomizationAPI_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGTOOLSEDITORMODE_API UClass* StaticClass<class UModelingToolsHostCustomizationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsHostCustomizationAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
