// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintHeaderViewSettings.h"

#ifdef BLUEPRINTHEADERVIEW_BlueprintHeaderViewSettings_generated_h
#error "BlueprintHeaderViewSettings.generated.h already included, missing '#pragma once' in BlueprintHeaderViewSettings.h"
#endif
#define BLUEPRINTHEADERVIEW_BlueprintHeaderViewSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHeaderViewSyntaxColors *******************************************
struct Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics;
#define FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics; \
	BLUEPRINTHEADERVIEW_API static class UScriptStruct* StaticStruct();


struct FHeaderViewSyntaxColors;
// ********** End ScriptStruct FHeaderViewSyntaxColors *********************************************

// ********** Begin Class UBlueprintHeaderViewSettings *********************************************
struct Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics;
BLUEPRINTHEADERVIEW_API UClass* Z_Construct_UClass_UBlueprintHeaderViewSettings_NoRegister();

#define FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintHeaderViewSettings(); \
	friend struct ::Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTHEADERVIEW_API UClass* ::Z_Construct_UClass_UBlueprintHeaderViewSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintHeaderViewSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintHeaderView"), Z_Construct_UClass_UBlueprintHeaderViewSettings_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintHeaderViewSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintHeaderViewSettings(UBlueprintHeaderViewSettings&&) = delete; \
	UBlueprintHeaderViewSettings(const UBlueprintHeaderViewSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTHEADERVIEW_API, UBlueprintHeaderViewSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintHeaderViewSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlueprintHeaderViewSettings) \
	BLUEPRINTHEADERVIEW_API virtual ~UBlueprintHeaderViewSettings();


#define FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_52_PROLOG
#define FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintHeaderViewSettings;

// ********** End Class UBlueprintHeaderViewSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h

// ********** Begin Enum EHeaderViewSortMethod *****************************************************
#define FOREACH_ENUM_EHEADERVIEWSORTMETHOD(op) \
	op(EHeaderViewSortMethod::None) \
	op(EHeaderViewSortMethod::SortByAccessSpecifier) \
	op(EHeaderViewSortMethod::SortForOptimalPadding) 

enum class EHeaderViewSortMethod : uint8;
template<> struct TIsUEnumClass<EHeaderViewSortMethod> { enum { Value = true }; };
template<> BLUEPRINTHEADERVIEW_NON_ATTRIBUTED_API UEnum* StaticEnum<EHeaderViewSortMethod>();
// ********** End Enum EHeaderViewSortMethod *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
