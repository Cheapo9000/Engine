// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationToolSettings.h"

#ifdef SEQUENCENAVIGATOR_NavigationToolSettings_generated_h
#error "NavigationToolSettings.generated.h already included, missing '#pragma once' in NavigationToolSettings.h"
#endif
#define SEQUENCENAVIGATOR_NavigationToolSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNavigationToolColumnView *****************************************
struct Z_Construct_UScriptStruct_FNavigationToolColumnView_Statics;
#define FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_NavigationToolSettings_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigationToolColumnView_Statics; \
	SEQUENCENAVIGATOR_API static class UScriptStruct* StaticStruct();


struct FNavigationToolColumnView;
// ********** End ScriptStruct FNavigationToolColumnView *******************************************

// ********** Begin Class UNavigationToolSettings **************************************************
struct Z_Construct_UClass_UNavigationToolSettings_Statics;
SEQUENCENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationToolSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_NavigationToolSettings_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationToolSettings(); \
	friend struct ::Z_Construct_UClass_UNavigationToolSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCENAVIGATOR_API UClass* ::Z_Construct_UClass_UNavigationToolSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavigationToolSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SequenceNavigator"), Z_Construct_UClass_UNavigationToolSettings_NoRegister) \
	DECLARE_SERIALIZER(UNavigationToolSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_NavigationToolSettings_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavigationToolSettings(UNavigationToolSettings&&) = delete; \
	UNavigationToolSettings(const UNavigationToolSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationToolSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationToolSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavigationToolSettings) \
	NO_API virtual ~UNavigationToolSettings();


#define FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_NavigationToolSettings_h_52_PROLOG
#define FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_NavigationToolSettings_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_NavigationToolSettings_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_NavigationToolSettings_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavigationToolSettings;

// ********** End Class UNavigationToolSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SequenceNavigator_Source_SequenceNavigator_Public_NavigationToolSettings_h

// ********** Begin Enum ENavigationToolItemViewMode ***********************************************
#define FOREACH_ENUM_ENAVIGATIONTOOLITEMVIEWMODE(op) \
	op(ENavigationToolItemViewMode::None) \
	op(ENavigationToolItemViewMode::ItemTree) \
	op(ENavigationToolItemViewMode::HorizontalItemList) \
	op(ENavigationToolItemViewMode::All) 

enum class ENavigationToolItemViewMode : uint8;
template<> struct TIsUEnumClass<ENavigationToolItemViewMode> { enum { Value = true }; };
template<> SEQUENCENAVIGATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavigationToolItemViewMode>();
// ********** End Enum ENavigationToolItemViewMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
