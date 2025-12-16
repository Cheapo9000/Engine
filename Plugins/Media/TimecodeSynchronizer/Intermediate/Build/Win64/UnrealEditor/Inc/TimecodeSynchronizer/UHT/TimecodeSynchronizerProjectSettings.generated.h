// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimecodeSynchronizerProjectSettings.h"

#ifdef TIMECODESYNCHRONIZER_TimecodeSynchronizerProjectSettings_generated_h
#error "TimecodeSynchronizerProjectSettings.generated.h already included, missing '#pragma once' in TimecodeSynchronizerProjectSettings.h"
#endif
#define TIMECODESYNCHRONIZER_TimecodeSynchronizerProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTimecodeSynchronizerProjectSettings *************************************
struct Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics;
TIMECODESYNCHRONIZER_API UClass* Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_NoRegister();

#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimecodeSynchronizerProjectSettings(); \
	friend struct ::Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMECODESYNCHRONIZER_API UClass* ::Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimecodeSynchronizerProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TimecodeSynchronizer"), Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UTimecodeSynchronizerProjectSettings)


#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimecodeSynchronizerProjectSettings(UTimecodeSynchronizerProjectSettings&&) = delete; \
	UTimecodeSynchronizerProjectSettings(const UTimecodeSynchronizerProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimecodeSynchronizerProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimecodeSynchronizerProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTimecodeSynchronizerProjectSettings) \
	NO_API virtual ~UTimecodeSynchronizerProjectSettings();


#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_17_PROLOG
#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimecodeSynchronizerProjectSettings;

// ********** End Class UTimecodeSynchronizerProjectSettings ***************************************

// ********** Begin Class UTimecodeSynchronizerEditorSettings **************************************
struct Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics;
TIMECODESYNCHRONIZER_API UClass* Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_NoRegister();

#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimecodeSynchronizerEditorSettings(); \
	friend struct ::Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMECODESYNCHRONIZER_API UClass* ::Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimecodeSynchronizerEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TimecodeSynchronizer"), Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UTimecodeSynchronizerEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimecodeSynchronizerEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimecodeSynchronizerEditorSettings(UTimecodeSynchronizerEditorSettings&&) = delete; \
	UTimecodeSynchronizerEditorSettings(const UTimecodeSynchronizerEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimecodeSynchronizerEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimecodeSynchronizerEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimecodeSynchronizerEditorSettings) \
	NO_API virtual ~UTimecodeSynchronizerEditorSettings();


#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_54_PROLOG
#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_58_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimecodeSynchronizerEditorSettings;

// ********** End Class UTimecodeSynchronizerEditorSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
