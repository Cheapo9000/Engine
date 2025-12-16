// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureModeSettings.h"

#ifdef FRACTUREEDITOR_FractureModeSettings_generated_h
#error "FractureModeSettings.generated.h already included, missing '#pragma once' in FractureModeSettings.h"
#endif
#define FRACTUREEDITOR_FractureModeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFractureModeSettings ****************************************************
struct Z_Construct_UClass_UFractureModeSettings_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModeSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureModeSettings(); \
	friend struct ::Z_Construct_UClass_UFractureModeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureModeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureModeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureModeSettings_NoRegister) \
	DECLARE_SERIALIZER(UFractureModeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FRACTUREEDITOR_API UFractureModeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureModeSettings(UFractureModeSettings&&) = delete; \
	UFractureModeSettings(const UFractureModeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FRACTUREEDITOR_API, UFractureModeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureModeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureModeSettings) \
	FRACTUREEDITOR_API virtual ~UFractureModeSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_34_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFractureModeSettings;

// ********** End Class UFractureModeSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h

// ********** Begin Enum EFractureModeNewAssetLocation *********************************************
#define FOREACH_ENUM_EFRACTUREMODENEWASSETLOCATION(op) \
	op(EFractureModeNewAssetLocation::SourceAssetFolder) \
	op(EFractureModeNewAssetLocation::LastUsedFolder) \
	op(EFractureModeNewAssetLocation::ContentBrowserFolder) 

enum class EFractureModeNewAssetLocation;
template<> struct TIsUEnumClass<EFractureModeNewAssetLocation> { enum { Value = true }; };
template<> FRACTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EFractureModeNewAssetLocation>();
// ********** End Enum EFractureModeNewAssetLocation ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
