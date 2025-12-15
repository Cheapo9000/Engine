// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetViewerSettings.h"

#ifdef ADVANCEDPREVIEWSCENE_AssetViewerSettings_generated_h
#error "AssetViewerSettings.generated.h already included, missing '#pragma once' in AssetViewerSettings.h"
#endif
#define ADVANCEDPREVIEWSCENE_AssetViewerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPreviewSceneProfile **********************************************
struct Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics;
#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics; \
	ADVANCEDPREVIEWSCENE_API static class UScriptStruct* StaticStruct();


struct FPreviewSceneProfile;
// ********** End ScriptStruct FPreviewSceneProfile ************************************************

// ********** Begin Class UDefaultEditorProfiles ***************************************************
struct Z_Construct_UClass_UDefaultEditorProfiles_Statics;
ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_UDefaultEditorProfiles_NoRegister();

#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultEditorProfiles(); \
	friend struct ::Z_Construct_UClass_UDefaultEditorProfiles_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDPREVIEWSCENE_API UClass* ::Z_Construct_UClass_UDefaultEditorProfiles_NoRegister(); \
public: \
	DECLARE_CLASS2(UDefaultEditorProfiles, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedPreviewScene"), Z_Construct_UClass_UDefaultEditorProfiles_NoRegister) \
	DECLARE_SERIALIZER(UDefaultEditorProfiles)


#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_184_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDefaultEditorProfiles(UDefaultEditorProfiles&&) = delete; \
	UDefaultEditorProfiles(const UDefaultEditorProfiles&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDPREVIEWSCENE_API, UDefaultEditorProfiles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultEditorProfiles); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDefaultEditorProfiles) \
	ADVANCEDPREVIEWSCENE_API virtual ~UDefaultEditorProfiles();


#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_181_PROLOG
#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_184_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDefaultEditorProfiles;

// ********** End Class UDefaultEditorProfiles *****************************************************

// ********** Begin Class ULocalProfiles ***********************************************************
struct Z_Construct_UClass_ULocalProfiles_Statics;
ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_ULocalProfiles_NoRegister();

#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalProfiles(); \
	friend struct ::Z_Construct_UClass_ULocalProfiles_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDPREVIEWSCENE_API UClass* ::Z_Construct_UClass_ULocalProfiles_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocalProfiles, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedPreviewScene"), Z_Construct_UClass_ULocalProfiles_NoRegister) \
	DECLARE_SERIALIZER(ULocalProfiles) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_240_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalProfiles(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocalProfiles(ULocalProfiles&&) = delete; \
	ULocalProfiles(const ULocalProfiles&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalProfiles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalProfiles); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalProfiles) \
	NO_API virtual ~ULocalProfiles();


#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_237_PROLOG
#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_240_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_240_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocalProfiles;

// ********** End Class ULocalProfiles *************************************************************

// ********** Begin Class USharedProfiles **********************************************************
struct Z_Construct_UClass_USharedProfiles_Statics;
ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_USharedProfiles_NoRegister();

#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_250_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSharedProfiles(); \
	friend struct ::Z_Construct_UClass_USharedProfiles_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDPREVIEWSCENE_API UClass* ::Z_Construct_UClass_USharedProfiles_NoRegister(); \
public: \
	DECLARE_CLASS2(USharedProfiles, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedPreviewScene"), Z_Construct_UClass_USharedProfiles_NoRegister) \
	DECLARE_SERIALIZER(USharedProfiles) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_250_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USharedProfiles(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USharedProfiles(USharedProfiles&&) = delete; \
	USharedProfiles(const USharedProfiles&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USharedProfiles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USharedProfiles); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USharedProfiles) \
	NO_API virtual ~USharedProfiles();


#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_247_PROLOG
#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_250_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_250_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_250_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USharedProfiles;

// ********** End Class USharedProfiles ************************************************************

// ********** Begin Class UAssetViewerSettings *****************************************************
struct Z_Construct_UClass_UAssetViewerSettings_Statics;
ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_UAssetViewerSettings_NoRegister();

#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetViewerSettings(); \
	friend struct ::Z_Construct_UClass_UAssetViewerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDPREVIEWSCENE_API UClass* ::Z_Construct_UClass_UAssetViewerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetViewerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedPreviewScene"), Z_Construct_UClass_UAssetViewerSettings_NoRegister) \
	DECLARE_SERIALIZER(UAssetViewerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_263_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetViewerSettings(UAssetViewerSettings&&) = delete; \
	UAssetViewerSettings(const UAssetViewerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDPREVIEWSCENE_API, UAssetViewerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetViewerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetViewerSettings)


#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_260_PROLOG
#define FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_263_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetViewerSettings;

// ********** End Class UAssetViewerSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
