// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FusionPatchImportOptions.h"

#ifdef HARMONIXDSPEDITOR_FusionPatchImportOptions_generated_h
#error "FusionPatchImportOptions.generated.h already included, missing '#pragma once' in FusionPatchImportOptions.h"
#endif
#define HARMONIXDSPEDITOR_FusionPatchImportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFusionPatchImportOptions ************************************************
struct Z_Construct_UClass_UFusionPatchImportOptions_Statics;
HARMONIXDSPEDITOR_API UClass* Z_Construct_UClass_UFusionPatchImportOptions_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFusionPatchImportOptions(); \
	friend struct ::Z_Construct_UClass_UFusionPatchImportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXDSPEDITOR_API UClass* ::Z_Construct_UClass_UFusionPatchImportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UFusionPatchImportOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixDspEditor"), Z_Construct_UClass_UFusionPatchImportOptions_NoRegister) \
	DECLARE_SERIALIZER(UFusionPatchImportOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFusionPatchImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFusionPatchImportOptions(UFusionPatchImportOptions&&) = delete; \
	UFusionPatchImportOptions(const UFusionPatchImportOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFusionPatchImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFusionPatchImportOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFusionPatchImportOptions) \
	NO_API virtual ~UFusionPatchImportOptions();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFusionPatchImportOptions;

// ********** End Class UFusionPatchImportOptions **************************************************

// ********** Begin Class UFusionPatchCreateOptions ************************************************
struct Z_Construct_UClass_UFusionPatchCreateOptions_Statics;
HARMONIXDSPEDITOR_API UClass* Z_Construct_UClass_UFusionPatchCreateOptions_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFusionPatchCreateOptions(); \
	friend struct ::Z_Construct_UClass_UFusionPatchCreateOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXDSPEDITOR_API UClass* ::Z_Construct_UClass_UFusionPatchCreateOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UFusionPatchCreateOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HarmonixDspEditor"), Z_Construct_UClass_UFusionPatchCreateOptions_NoRegister) \
	DECLARE_SERIALIZER(UFusionPatchCreateOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFusionPatchCreateOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFusionPatchCreateOptions(UFusionPatchCreateOptions&&) = delete; \
	UFusionPatchCreateOptions(const UFusionPatchCreateOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFusionPatchCreateOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFusionPatchCreateOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFusionPatchCreateOptions) \
	NO_API virtual ~UFusionPatchCreateOptions();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_92_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_95_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFusionPatchCreateOptions;

// ********** End Class UFusionPatchCreateOptions **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDspEditor_Private_FusionPatchImportOptions_h

// ********** Begin Enum ELockedNoteFlag ***********************************************************
#define FOREACH_ENUM_ELOCKEDNOTEFLAG(op) \
	op(ELockedNoteFlag::None) \
	op(ELockedNoteFlag::Min) \
	op(ELockedNoteFlag::Root) \
	op(ELockedNoteFlag::Max) \
	op(ELockedNoteFlag::MinMax) \
	op(ELockedNoteFlag::MinRootMax) 

enum class ELockedNoteFlag : uint8;
template<> struct TIsUEnumClass<ELockedNoteFlag> { enum { Value = true }; };
template<> HARMONIXDSPEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELockedNoteFlag>();
// ********** End Enum ELockedNoteFlag *************************************************************

// ********** Begin Enum EFusionPatchKeyzoneSortOption *********************************************
#define FOREACH_ENUM_EFUSIONPATCHKEYZONESORTOPTION(op) \
	op(EFusionPatchKeyzoneSortOption::Lexical) \
	op(EFusionPatchKeyzoneSortOption::Index) \
	op(EFusionPatchKeyzoneSortOption::NoteNumber) \
	op(EFusionPatchKeyzoneSortOption::NoteName) 

enum class EFusionPatchKeyzoneSortOption : uint8;
template<> struct TIsUEnumClass<EFusionPatchKeyzoneSortOption> { enum { Value = true }; };
template<> HARMONIXDSPEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EFusionPatchKeyzoneSortOption>();
// ********** End Enum EFusionPatchKeyzoneSortOption ***********************************************

// ********** Begin Enum EFusionPatchKeyzoneNoteLayoutOption ***************************************
#define FOREACH_ENUM_EFUSIONPATCHKEYZONENOTELAYOUTOPTION(op) \
	op(EFusionPatchKeyzoneNoteLayoutOption::SingleNote) \
	op(EFusionPatchKeyzoneNoteLayoutOption::Distribute) \
	op(EFusionPatchKeyzoneNoteLayoutOption::Layer) 

enum class EFusionPatchKeyzoneNoteLayoutOption : uint8;
template<> struct TIsUEnumClass<EFusionPatchKeyzoneNoteLayoutOption> { enum { Value = true }; };
template<> HARMONIXDSPEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EFusionPatchKeyzoneNoteLayoutOption>();
// ********** End Enum EFusionPatchKeyzoneNoteLayoutOption *****************************************

// ********** Begin Enum EFusionPatchKeyzoneNoteScaleOption ****************************************
#define FOREACH_ENUM_EFUSIONPATCHKEYZONENOTESCALEOPTION(op) \
	op(EFusionPatchKeyzoneNoteScaleOption::None) \
	op(EFusionPatchKeyzoneNoteScaleOption::MajorScale) 

enum class EFusionPatchKeyzoneNoteScaleOption : uint8;
template<> struct TIsUEnumClass<EFusionPatchKeyzoneNoteScaleOption> { enum { Value = true }; };
template<> HARMONIXDSPEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EFusionPatchKeyzoneNoteScaleOption>();
// ********** End Enum EFusionPatchKeyzoneNoteScaleOption ******************************************

// ********** Begin Enum EFusionPatchKeyzoneRootNoteOption *****************************************
#define FOREACH_ENUM_EFUSIONPATCHKEYZONEROOTNOTEOPTION(op) \
	op(EFusionPatchKeyzoneRootNoteOption::Min) \
	op(EFusionPatchKeyzoneRootNoteOption::Max) \
	op(EFusionPatchKeyzoneRootNoteOption::Centered) 

enum class EFusionPatchKeyzoneRootNoteOption : uint8;
template<> struct TIsUEnumClass<EFusionPatchKeyzoneRootNoteOption> { enum { Value = true }; };
template<> HARMONIXDSPEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EFusionPatchKeyzoneRootNoteOption>();
// ********** End Enum EFusionPatchKeyzoneRootNoteOption *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
