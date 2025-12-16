// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/MetaHumanCharacterEditorEyesTool.h"

#ifdef METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorEyesTool_generated_h
#error "MetaHumanCharacterEditorEyesTool.generated.h already included, missing '#pragma once' in MetaHumanCharacterEditorEyesTool.h"
#endif
#define METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorEyesTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCharacterEyePreset **************************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterEyePreset_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterEyePreset_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterEyePreset;
// ********** End ScriptStruct FMetaHumanCharacterEyePreset ****************************************

// ********** Begin Class UMetaHumanCharacterEyePresets ********************************************
struct Z_Construct_UClass_UMetaHumanCharacterEyePresets_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEyePresets_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEyePresets(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEyePresets_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEyePresets_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEyePresets, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEyePresets_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEyePresets)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEyePresets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEyePresets(UMetaHumanCharacterEyePresets&&) = delete; \
	UMetaHumanCharacterEyePresets(const UMetaHumanCharacterEyePresets&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEyePresets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEyePresets); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterEyePresets) \
	NO_API virtual ~UMetaHumanCharacterEyePresets();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_33_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEyePresets;

// ********** End Class UMetaHumanCharacterEyePresets **********************************************

// ********** Begin Class UMetaHumanCharacterEditorEyesToolBuilder *********************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorEyesToolBuilder_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorEyesToolBuilder_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorEyesToolBuilder(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorEyesToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorEyesToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorEyesToolBuilder, UInteractiveToolWithToolTargetsBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorEyesToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorEyesToolBuilder)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorEyesToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorEyesToolBuilder(UMetaHumanCharacterEditorEyesToolBuilder&&) = delete; \
	UMetaHumanCharacterEditorEyesToolBuilder(const UMetaHumanCharacterEditorEyesToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorEyesToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorEyesToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorEyesToolBuilder) \
	NO_API virtual ~UMetaHumanCharacterEditorEyesToolBuilder();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_61_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorEyesToolBuilder;

// ********** End Class UMetaHumanCharacterEditorEyesToolBuilder ***********************************

// ********** Begin Class UMetaHumanCharacterEditorEyesToolProperties ******************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorEyesToolProperties_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorEyesToolProperties_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorEyesToolProperties(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorEyesToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorEyesToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorEyesToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorEyesToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorEyesToolProperties)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorEyesToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorEyesToolProperties(UMetaHumanCharacterEditorEyesToolProperties&&) = delete; \
	UMetaHumanCharacterEditorEyesToolProperties(const UMetaHumanCharacterEditorEyesToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorEyesToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorEyesToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorEyesToolProperties) \
	NO_API virtual ~UMetaHumanCharacterEditorEyesToolProperties();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_80_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorEyesToolProperties;

// ********** End Class UMetaHumanCharacterEditorEyesToolProperties ********************************

// ********** Begin Class UMetaHumanCharacterEditorEyesTool ****************************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorEyesTool_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorEyesTool_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorEyesTool(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorEyesTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorEyesTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorEyesTool, USingleSelectionTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorEyesTool_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorEyesTool)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorEyesTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorEyesTool(UMetaHumanCharacterEditorEyesTool&&) = delete; \
	UMetaHumanCharacterEditorEyesTool(const UMetaHumanCharacterEditorEyesTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorEyesTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorEyesTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorEyesTool) \
	NO_API virtual ~UMetaHumanCharacterEditorEyesTool();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_99_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorEyesTool;

// ********** End Class UMetaHumanCharacterEditorEyesTool ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_Tools_MetaHumanCharacterEditorEyesTool_h

// ********** Begin Enum EMetaHumanCharacterEyeEditSelection ***************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTEREYEEDITSELECTION(op) \
	op(EMetaHumanCharacterEyeEditSelection::Both) \
	op(EMetaHumanCharacterEyeEditSelection::Left) \
	op(EMetaHumanCharacterEyeEditSelection::Right) \
	op(EMetaHumanCharacterEyeEditSelection::Count) 

enum class EMetaHumanCharacterEyeEditSelection : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterEyeEditSelection> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterEyeEditSelection>();
// ********** End Enum EMetaHumanCharacterEyeEditSelection *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
