// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureModeSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_FractureModeSettings_generated_h
#error "FractureModeSettings.generated.h already included, missing '#pragma once' in FractureModeSettings.h"
#endif
#define FRACTUREEDITOR_FractureModeSettings_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureModeSettings(); \
	friend struct Z_Construct_UClass_UFractureModeSettings_Statics; \
public: \
	DECLARE_CLASS(UFractureModeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureModeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFractureModeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureModeSettings(UFractureModeSettings&&); \
	UFractureModeSettings(const UFractureModeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureModeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureModeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureModeSettings) \
	NO_API virtual ~UFractureModeSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_32_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureModeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h


#define FOREACH_ENUM_EFRACTUREMODENEWASSETLOCATION(op) \
	op(EFractureModeNewAssetLocation::SourceAssetFolder) \
	op(EFractureModeNewAssetLocation::LastUsedFolder) \
	op(EFractureModeNewAssetLocation::ContentBrowserFolder) 

enum class EFractureModeNewAssetLocation;
template<> struct TIsUEnumClass<EFractureModeNewAssetLocation> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EFractureModeNewAssetLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
