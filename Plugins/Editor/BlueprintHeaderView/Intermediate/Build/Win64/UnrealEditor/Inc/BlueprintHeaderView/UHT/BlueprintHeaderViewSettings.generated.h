// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintHeaderViewSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTHEADERVIEW_BlueprintHeaderViewSettings_generated_h
#error "BlueprintHeaderViewSettings.generated.h already included, missing '#pragma once' in BlueprintHeaderViewSettings.h"
#endif
#define BLUEPRINTHEADERVIEW_BlueprintHeaderViewSettings_generated_h

#define FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics; \
	BLUEPRINTHEADERVIEW_API static class UScriptStruct* StaticStruct();


template<> BLUEPRINTHEADERVIEW_API UScriptStruct* StaticStruct<struct FHeaderViewSyntaxColors>();

#define FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintHeaderViewSettings(); \
	friend struct Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintHeaderViewSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintHeaderView"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintHeaderViewSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintHeaderViewSettings(UBlueprintHeaderViewSettings&&); \
	UBlueprintHeaderViewSettings(const UBlueprintHeaderViewSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintHeaderViewSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintHeaderViewSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlueprintHeaderViewSettings) \
	NO_API virtual ~UBlueprintHeaderViewSettings();


#define FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_50_PROLOG
#define FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTHEADERVIEW_API UClass* StaticClass<class UBlueprintHeaderViewSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h


#define FOREACH_ENUM_EHEADERVIEWSORTMETHOD(op) \
	op(EHeaderViewSortMethod::None) \
	op(EHeaderViewSortMethod::SortByAccessSpecifier) \
	op(EHeaderViewSortMethod::SortForOptimalPadding) 

enum class EHeaderViewSortMethod : uint8;
template<> struct TIsUEnumClass<EHeaderViewSortMethod> { enum { Value = true }; };
template<> BLUEPRINTHEADERVIEW_API UEnum* StaticEnum<EHeaderViewSortMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
