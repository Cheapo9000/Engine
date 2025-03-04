// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureEditorMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_FractureEditorMode_generated_h
#error "FractureEditorMode.generated.h already included, missing '#pragma once' in FractureEditorMode.h"
#endif
#define FRACTUREEDITOR_FractureEditorMode_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureEditorMode(); \
	friend struct Z_Construct_UClass_UFractureEditorMode_Statics; \
public: \
	DECLARE_CLASS(UFractureEditorMode, UBaseLegacyWidgetEdMode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureEditorMode) \
	virtual UObject* _getUObject() const override { return const_cast<UFractureEditorMode*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureEditorMode(UFractureEditorMode&&); \
	UFractureEditorMode(const UFractureEditorMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureEditorMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureEditorMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFractureEditorMode)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureEditorMode>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics; \
	FRACTUREEDITOR_API static class UScriptStruct* StaticStruct();


template<> FRACTUREEDITOR_API UScriptStruct* StaticStruct<struct FFractureModeCustomSectionColor>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics; \
	FRACTUREEDITOR_API static class UScriptStruct* StaticStruct();


template<> FRACTUREEDITOR_API UScriptStruct* StaticStruct<struct FFractureModeCustomToolColor>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureModeCustomizationSettings(); \
	friend struct Z_Construct_UClass_UFractureModeCustomizationSettings_Statics; \
public: \
	DECLARE_CLASS(UFractureModeCustomizationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureModeCustomizationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFractureModeCustomizationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureModeCustomizationSettings(UFractureModeCustomizationSettings&&); \
	UFractureModeCustomizationSettings(const UFractureModeCustomizationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureModeCustomizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureModeCustomizationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureModeCustomizationSettings) \
	NO_API virtual ~UFractureModeCustomizationSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_143_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_146_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureModeCustomizationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
