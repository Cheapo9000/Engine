// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SSizeMap.h"

#ifdef ASSETMANAGEREDITOR_SSizeMap_generated_h
#error "SSizeMap.generated.h already included, missing '#pragma once' in SSizeMap.h"
#endif
#define ASSETMANAGEREDITOR_SSizeMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USizeMapSettings *********************************************************
struct Z_Construct_UClass_USizeMapSettings_Statics;
ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_USizeMapSettings_NoRegister();

#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSizeMapSettings(); \
	friend struct ::Z_Construct_UClass_USizeMapSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETMANAGEREDITOR_API UClass* ::Z_Construct_UClass_USizeMapSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USizeMapSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetManagerEditor"), Z_Construct_UClass_USizeMapSettings_NoRegister) \
	DECLARE_SERIALIZER(USizeMapSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USizeMapSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USizeMapSettings(USizeMapSettings&&) = delete; \
	USizeMapSettings(const USizeMapSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USizeMapSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeMapSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeMapSettings) \
	NO_API virtual ~USizeMapSettings();


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_31_PROLOG
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USizeMapSettings;

// ********** End Class USizeMapSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h

// ********** Begin Enum ESizeMapDependencyType ****************************************************
#define FOREACH_ENUM_ESIZEMAPDEPENDENCYTYPE(op) \
	op(ESizeMapDependencyType::All) \
	op(ESizeMapDependencyType::Game) \
	op(ESizeMapDependencyType::EditorOnly) 

enum class ESizeMapDependencyType;
template<> struct TIsUEnumClass<ESizeMapDependencyType> { enum { Value = true }; };
template<> ASSETMANAGEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ESizeMapDependencyType>();
// ********** End Enum ESizeMapDependencyType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
