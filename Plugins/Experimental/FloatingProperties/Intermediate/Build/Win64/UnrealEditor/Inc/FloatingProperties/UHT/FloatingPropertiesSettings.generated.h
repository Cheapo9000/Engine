// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FloatingPropertiesSettings.h"

#ifdef FLOATINGPROPERTIES_FloatingPropertiesSettings_generated_h
#error "FloatingPropertiesSettings.generated.h already included, missing '#pragma once' in FloatingPropertiesSettings.h"
#endif
#define FLOATINGPROPERTIES_FloatingPropertiesSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFloatingPropertiesClassProperty **********************************
struct Z_Construct_UScriptStruct_FFloatingPropertiesClassProperty_Statics;
#define FID_Engine_Plugins_Experimental_FloatingProperties_Source_FloatingProperties_Public_FloatingPropertiesSettings_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFloatingPropertiesClassProperty_Statics; \
	FLOATINGPROPERTIES_API static class UScriptStruct* StaticStruct();


struct FFloatingPropertiesClassProperty;
// ********** End ScriptStruct FFloatingPropertiesClassProperty ************************************

// ********** Begin ScriptStruct FFloatingPropertiesClassProperties ********************************
struct Z_Construct_UScriptStruct_FFloatingPropertiesClassProperties_Statics;
#define FID_Engine_Plugins_Experimental_FloatingProperties_Source_FloatingProperties_Public_FloatingPropertiesSettings_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFloatingPropertiesClassProperties_Statics; \
	FLOATINGPROPERTIES_API static class UScriptStruct* StaticStruct();


struct FFloatingPropertiesClassProperties;
// ********** End ScriptStruct FFloatingPropertiesClassProperties **********************************

// ********** Begin ScriptStruct FFloatingPropertiesClassPropertyPosition **************************
struct Z_Construct_UScriptStruct_FFloatingPropertiesClassPropertyPosition_Statics;
#define FID_Engine_Plugins_Experimental_FloatingProperties_Source_FloatingProperties_Public_FloatingPropertiesSettings_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFloatingPropertiesClassPropertyPosition_Statics; \
	FLOATINGPROPERTIES_API static class UScriptStruct* StaticStruct();


struct FFloatingPropertiesClassPropertyPosition;
// ********** End ScriptStruct FFloatingPropertiesClassPropertyPosition ****************************

// ********** Begin ScriptStruct FFloatingPropertiesClassPropertyAnchor ****************************
struct Z_Construct_UScriptStruct_FFloatingPropertiesClassPropertyAnchor_Statics;
#define FID_Engine_Plugins_Experimental_FloatingProperties_Source_FloatingProperties_Public_FloatingPropertiesSettings_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFloatingPropertiesClassPropertyAnchor_Statics; \
	FLOATINGPROPERTIES_API static class UScriptStruct* StaticStruct();


struct FFloatingPropertiesClassPropertyAnchor;
// ********** End ScriptStruct FFloatingPropertiesClassPropertyAnchor ******************************

// ********** Begin Class UFloatingPropertiesSettings **********************************************
struct Z_Construct_UClass_UFloatingPropertiesSettings_Statics;
FLOATINGPROPERTIES_API UClass* Z_Construct_UClass_UFloatingPropertiesSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_FloatingProperties_Source_FloatingProperties_Public_FloatingPropertiesSettings_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloatingPropertiesSettings(); \
	friend struct ::Z_Construct_UClass_UFloatingPropertiesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FLOATINGPROPERTIES_API UClass* ::Z_Construct_UClass_UFloatingPropertiesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFloatingPropertiesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FloatingProperties"), Z_Construct_UClass_UFloatingPropertiesSettings_NoRegister) \
	DECLARE_SERIALIZER(UFloatingPropertiesSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_FloatingProperties_Source_FloatingProperties_Public_FloatingPropertiesSettings_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFloatingPropertiesSettings(UFloatingPropertiesSettings&&) = delete; \
	UFloatingPropertiesSettings(const UFloatingPropertiesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloatingPropertiesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatingPropertiesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFloatingPropertiesSettings) \
	NO_API virtual ~UFloatingPropertiesSettings();


#define FID_Engine_Plugins_Experimental_FloatingProperties_Source_FloatingProperties_Public_FloatingPropertiesSettings_h_91_PROLOG
#define FID_Engine_Plugins_Experimental_FloatingProperties_Source_FloatingProperties_Public_FloatingPropertiesSettings_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_FloatingProperties_Source_FloatingProperties_Public_FloatingPropertiesSettings_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_FloatingProperties_Source_FloatingProperties_Public_FloatingPropertiesSettings_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFloatingPropertiesSettings;

// ********** End Class UFloatingPropertiesSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FloatingProperties_Source_FloatingProperties_Public_FloatingPropertiesSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
