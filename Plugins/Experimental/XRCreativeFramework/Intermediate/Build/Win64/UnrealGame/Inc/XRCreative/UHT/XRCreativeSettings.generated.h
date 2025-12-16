// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativeSettings.h"

#ifdef XRCREATIVE_XRCreativeSettings_generated_h
#error "XRCreativeSettings.generated.h already included, missing '#pragma once' in XRCreativeSettings.h"
#endif
#define XRCREATIVE_XRCreativeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UXRCreativeEditorSettings;
class UXRCreativeSettings;

// ********** Begin Class UXRCreativeSettings ******************************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetXRCreativeSettings);


struct Z_Construct_UClass_UXRCreativeSettings_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativeSettings(); \
	friend struct ::Z_Construct_UClass_UXRCreativeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_UXRCreativeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRCreativeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_UXRCreativeSettings_NoRegister) \
	DECLARE_SERIALIZER(UXRCreativeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("XRCreativeSettings");} \



#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRCreativeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRCreativeSettings(UXRCreativeSettings&&) = delete; \
	UXRCreativeSettings(const UXRCreativeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRCreativeSettings) \
	NO_API virtual ~UXRCreativeSettings();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRCreativeSettings;

// ********** End Class UXRCreativeSettings ********************************************************

// ********** Begin Class UXRCreativeEditorSettings ************************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetXRCreativeEditorSettings);


struct Z_Construct_UClass_UXRCreativeEditorSettings_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeEditorSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativeEditorSettings(); \
	friend struct ::Z_Construct_UClass_UXRCreativeEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_UXRCreativeEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRCreativeEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_UXRCreativeEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UXRCreativeEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRCreativeEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRCreativeEditorSettings(UXRCreativeEditorSettings&&) = delete; \
	UXRCreativeEditorSettings(const UXRCreativeEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativeEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativeEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRCreativeEditorSettings) \
	NO_API virtual ~UXRCreativeEditorSettings();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_38_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRCreativeEditorSettings;

// ********** End Class UXRCreativeEditorSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h

// ********** Begin Enum EXRCreativeHandedness *****************************************************
#define FOREACH_ENUM_EXRCREATIVEHANDEDNESS(op) \
	op(EXRCreativeHandedness::Left) \
	op(EXRCreativeHandedness::Right) 

enum class EXRCreativeHandedness : uint8;
template<> struct TIsUEnumClass<EXRCreativeHandedness> { enum { Value = true }; };
template<> XRCREATIVE_NON_ATTRIBUTED_API UEnum* StaticEnum<EXRCreativeHandedness>();
// ********** End Enum EXRCreativeHandedness *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
