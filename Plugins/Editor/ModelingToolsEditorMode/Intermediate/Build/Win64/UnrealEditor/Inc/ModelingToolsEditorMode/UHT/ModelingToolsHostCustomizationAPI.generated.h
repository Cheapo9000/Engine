// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelingToolsHostCustomizationAPI.h"

#ifdef MODELINGTOOLSEDITORMODE_ModelingToolsHostCustomizationAPI_generated_h
#error "ModelingToolsHostCustomizationAPI.generated.h already included, missing '#pragma once' in ModelingToolsHostCustomizationAPI.h"
#endif
#define MODELINGTOOLSEDITORMODE_ModelingToolsHostCustomizationAPI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UModelingToolsHostCustomizationAPI ***************************************
struct Z_Construct_UClass_UModelingToolsHostCustomizationAPI_Statics;
MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingToolsHostCustomizationAPI_NoRegister();

#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsHostCustomizationAPI_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelingToolsHostCustomizationAPI(); \
	friend struct ::Z_Construct_UClass_UModelingToolsHostCustomizationAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGTOOLSEDITORMODE_API UClass* ::Z_Construct_UClass_UModelingToolsHostCustomizationAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UModelingToolsHostCustomizationAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingToolsEditorMode"), Z_Construct_UClass_UModelingToolsHostCustomizationAPI_NoRegister) \
	DECLARE_SERIALIZER(UModelingToolsHostCustomizationAPI) \
	virtual UObject* _getUObject() const override { return const_cast<UModelingToolsHostCustomizationAPI*>(this); }


#define FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsHostCustomizationAPI_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGTOOLSEDITORMODE_API UModelingToolsHostCustomizationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModelingToolsHostCustomizationAPI(UModelingToolsHostCustomizationAPI&&) = delete; \
	UModelingToolsHostCustomizationAPI(const UModelingToolsHostCustomizationAPI&) = delete; \
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


class UModelingToolsHostCustomizationAPI;

// ********** End Class UModelingToolsHostCustomizationAPI *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsHostCustomizationAPI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
