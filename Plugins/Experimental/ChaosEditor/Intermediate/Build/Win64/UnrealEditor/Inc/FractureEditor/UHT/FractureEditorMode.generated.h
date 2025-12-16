// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureEditorMode.h"

#ifdef FRACTUREEDITOR_FractureEditorMode_generated_h
#error "FractureEditorMode.generated.h already included, missing '#pragma once' in FractureEditorMode.h"
#endif
#define FRACTUREEDITOR_FractureEditorMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFractureEditorMode ******************************************************
struct Z_Construct_UClass_UFractureEditorMode_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureEditorMode_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureEditorMode(); \
	friend struct ::Z_Construct_UClass_UFractureEditorMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureEditorMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureEditorMode, UBaseLegacyWidgetEdMode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureEditorMode_NoRegister) \
	DECLARE_SERIALIZER(UFractureEditorMode) \
	virtual UObject* _getUObject() const override { return const_cast<UFractureEditorMode*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureEditorMode(UFractureEditorMode&&) = delete; \
	UFractureEditorMode(const UFractureEditorMode&) = delete; \
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


class UFractureEditorMode;

// ********** End Class UFractureEditorMode ********************************************************

// ********** Begin ScriptStruct FFractureModeCustomSectionColor ***********************************
struct Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics;
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics; \
	FRACTUREEDITOR_API static class UScriptStruct* StaticStruct();


struct FFractureModeCustomSectionColor;
// ********** End ScriptStruct FFractureModeCustomSectionColor *************************************

// ********** Begin ScriptStruct FFractureModeCustomToolColor **************************************
struct Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics;
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_127_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics; \
	FRACTUREEDITOR_API static class UScriptStruct* StaticStruct();


struct FFractureModeCustomToolColor;
// ********** End ScriptStruct FFractureModeCustomToolColor ****************************************

// ********** Begin Class UFractureModeCustomizationSettings ***************************************
struct Z_Construct_UClass_UFractureModeCustomizationSettings_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModeCustomizationSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureModeCustomizationSettings(); \
	friend struct ::Z_Construct_UClass_UFractureModeCustomizationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureModeCustomizationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureModeCustomizationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureModeCustomizationSettings_NoRegister) \
	DECLARE_SERIALIZER(UFractureModeCustomizationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FRACTUREEDITOR_API UFractureModeCustomizationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureModeCustomizationSettings(UFractureModeCustomizationSettings&&) = delete; \
	UFractureModeCustomizationSettings(const UFractureModeCustomizationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FRACTUREEDITOR_API, UFractureModeCustomizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureModeCustomizationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureModeCustomizationSettings) \
	FRACTUREEDITOR_API virtual ~UFractureModeCustomizationSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_145_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFractureModeCustomizationSettings;

// ********** End Class UFractureModeCustomizationSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
