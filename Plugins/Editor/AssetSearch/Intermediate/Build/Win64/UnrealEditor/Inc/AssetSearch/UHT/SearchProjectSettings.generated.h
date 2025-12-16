// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/SearchProjectSettings.h"

#ifdef ASSETSEARCH_SearchProjectSettings_generated_h
#error "SearchProjectSettings.generated.h already included, missing '#pragma once' in SearchProjectSettings.h"
#endif
#define ASSETSEARCH_SearchProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USearchProjectSettings ***************************************************
struct Z_Construct_UClass_USearchProjectSettings_Statics;
ASSETSEARCH_API UClass* Z_Construct_UClass_USearchProjectSettings_NoRegister();

#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSearchProjectSettings(); \
	friend struct ::Z_Construct_UClass_USearchProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETSEARCH_API UClass* ::Z_Construct_UClass_USearchProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USearchProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetSearch"), Z_Construct_UClass_USearchProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(USearchProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USearchProjectSettings(USearchProjectSettings&&) = delete; \
	USearchProjectSettings(const USearchProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USearchProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USearchProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USearchProjectSettings) \
	NO_API virtual ~USearchProjectSettings();


#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_20_PROLOG
#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USearchProjectSettings;

// ********** End Class USearchProjectSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h

// ********** Begin Enum ESearchIntermediateStorage ************************************************
#define FOREACH_ENUM_ESEARCHINTERMEDIATESTORAGE(op) \
	op(ESearchIntermediateStorage::DerivedDataCache) \
	op(ESearchIntermediateStorage::AssetTagData) 

enum class ESearchIntermediateStorage : uint8;
template<> struct TIsUEnumClass<ESearchIntermediateStorage> { enum { Value = true }; };
template<> ASSETSEARCH_NON_ATTRIBUTED_API UEnum* StaticEnum<ESearchIntermediateStorage>();
// ********** End Enum ESearchIntermediateStorage **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
