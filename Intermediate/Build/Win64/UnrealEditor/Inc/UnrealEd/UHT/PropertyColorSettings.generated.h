// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyColorSettings.h"

#ifdef UNREALED_PropertyColorSettings_generated_h
#error "PropertyColorSettings.generated.h already included, missing '#pragma once' in PropertyColorSettings.h"
#endif
#define UNREALED_PropertyColorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropertyColorCustomProperty **************************************
struct Z_Construct_UScriptStruct_FPropertyColorCustomProperty_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyColorCustomProperty_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FPropertyColorCustomProperty;
// ********** End ScriptStruct FPropertyColorCustomProperty ****************************************

// ********** Begin Class UPropertyColorSettings ***************************************************
struct Z_Construct_UClass_UPropertyColorSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPropertyColorSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyColorSettings(); \
	friend struct ::Z_Construct_UClass_UPropertyColorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPropertyColorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyColorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPropertyColorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPropertyColorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyColorSettings(UPropertyColorSettings&&) = delete; \
	UPropertyColorSettings(const UPropertyColorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPropertyColorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyColorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyColorSettings) \
	UNREALED_API virtual ~UPropertyColorSettings();


#define FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_40_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyColorSettings;

// ********** End Class UPropertyColorSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
