// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCollectionBlueprintLibrary.h"

#ifdef METAHUMANCHARACTERPALETTEEDITOR_MetaHumanCollectionBlueprintLibrary_generated_h
#error "MetaHumanCollectionBlueprintLibrary.generated.h already included, missing '#pragma once' in MetaHumanCollectionBlueprintLibrary.h"
#endif
#define METAHUMANCHARACTERPALETTEEDITOR_MetaHumanCollectionBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetaHumanCharacterInstance;
struct FLinearColor;
struct FMetaHumanCharacterInstanceParameter;
struct FMetaHumanPaletteItemKey;
struct FMetaHumanPaletteItemPath;
struct FMetaHumanPipelineSlotSelection;

// ********** Begin Class UMetaHumanPaletteKeyBlueprintLibrary *************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToAssetNameString); \
	DECLARE_FUNCTION(execReferencesSameAsset);


struct Z_Construct_UClass_UMetaHumanPaletteKeyBlueprintLibrary_Statics;
METAHUMANCHARACTERPALETTEEDITOR_API UClass* Z_Construct_UClass_UMetaHumanPaletteKeyBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanPaletteKeyBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMetaHumanPaletteKeyBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTEEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanPaletteKeyBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanPaletteKeyBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPaletteEditor"), Z_Construct_UClass_UMetaHumanPaletteKeyBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanPaletteKeyBlueprintLibrary)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanPaletteKeyBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanPaletteKeyBlueprintLibrary(UMetaHumanPaletteKeyBlueprintLibrary&&) = delete; \
	UMetaHumanPaletteKeyBlueprintLibrary(const UMetaHumanPaletteKeyBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanPaletteKeyBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanPaletteKeyBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanPaletteKeyBlueprintLibrary) \
	NO_API virtual ~UMetaHumanPaletteKeyBlueprintLibrary();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_20_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanPaletteKeyBlueprintLibrary;

// ********** End Class UMetaHumanPaletteKeyBlueprintLibrary ***************************************

// ********** Begin Class UMetaHumanPaletteItemPathBlueprintLibrary ********************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeItemPath);


struct Z_Construct_UClass_UMetaHumanPaletteItemPathBlueprintLibrary_Statics;
METAHUMANCHARACTERPALETTEEDITOR_API UClass* Z_Construct_UClass_UMetaHumanPaletteItemPathBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanPaletteItemPathBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMetaHumanPaletteItemPathBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTEEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanPaletteItemPathBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanPaletteItemPathBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPaletteEditor"), Z_Construct_UClass_UMetaHumanPaletteItemPathBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanPaletteItemPathBlueprintLibrary)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanPaletteItemPathBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanPaletteItemPathBlueprintLibrary(UMetaHumanPaletteItemPathBlueprintLibrary&&) = delete; \
	UMetaHumanPaletteItemPathBlueprintLibrary(const UMetaHumanPaletteItemPathBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanPaletteItemPathBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanPaletteItemPathBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanPaletteItemPathBlueprintLibrary) \
	NO_API virtual ~UMetaHumanPaletteItemPathBlueprintLibrary();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_40_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanPaletteItemPathBlueprintLibrary;

// ********** End Class UMetaHumanPaletteItemPathBlueprintLibrary **********************************

// ********** Begin ScriptStruct FMetaHumanCharacterInstanceParameter ******************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterInstanceParameter_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterInstanceParameter_Statics; \
	METAHUMANCHARACTERPALETTEEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterInstanceParameter;
// ********** End ScriptStruct FMetaHumanCharacterInstanceParameter ********************************

// ********** Begin Class UMetaHumanCharacterInstanceParameterBlueprintLibrary *********************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execGetBool);


struct Z_Construct_UClass_UMetaHumanCharacterInstanceParameterBlueprintLibrary_Statics;
METAHUMANCHARACTERPALETTEEDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterInstanceParameterBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterInstanceParameterBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterInstanceParameterBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTEEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterInstanceParameterBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterInstanceParameterBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPaletteEditor"), Z_Construct_UClass_UMetaHumanCharacterInstanceParameterBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterInstanceParameterBlueprintLibrary)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterInstanceParameterBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterInstanceParameterBlueprintLibrary(UMetaHumanCharacterInstanceParameterBlueprintLibrary&&) = delete; \
	UMetaHumanCharacterInstanceParameterBlueprintLibrary(const UMetaHumanCharacterInstanceParameterBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterInstanceParameterBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterInstanceParameterBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterInstanceParameterBlueprintLibrary) \
	NO_API virtual ~UMetaHumanCharacterInstanceParameterBlueprintLibrary();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_105_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterInstanceParameterBlueprintLibrary;

// ********** End Class UMetaHumanCharacterInstanceParameterBlueprintLibrary ***********************

// ********** Begin Class UMetaHumanPipelineSlotSelectionBlueprintLibrary **************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSelectedItemPath);


struct Z_Construct_UClass_UMetaHumanPipelineSlotSelectionBlueprintLibrary_Statics;
METAHUMANCHARACTERPALETTEEDITOR_API UClass* Z_Construct_UClass_UMetaHumanPipelineSlotSelectionBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanPipelineSlotSelectionBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMetaHumanPipelineSlotSelectionBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTEEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanPipelineSlotSelectionBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanPipelineSlotSelectionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPaletteEditor"), Z_Construct_UClass_UMetaHumanPipelineSlotSelectionBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanPipelineSlotSelectionBlueprintLibrary)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_137_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanPipelineSlotSelectionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanPipelineSlotSelectionBlueprintLibrary(UMetaHumanPipelineSlotSelectionBlueprintLibrary&&) = delete; \
	UMetaHumanPipelineSlotSelectionBlueprintLibrary(const UMetaHumanPipelineSlotSelectionBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanPipelineSlotSelectionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanPipelineSlotSelectionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanPipelineSlotSelectionBlueprintLibrary) \
	NO_API virtual ~UMetaHumanPipelineSlotSelectionBlueprintLibrary();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_134_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_137_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanPipelineSlotSelectionBlueprintLibrary;

// ********** End Class UMetaHumanPipelineSlotSelectionBlueprintLibrary ****************************

// ********** Begin Class UMetaHumanCharacterInstanceBlueprintLibrary ******************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInstanceParameters);


struct Z_Construct_UClass_UMetaHumanCharacterInstanceBlueprintLibrary_Statics;
METAHUMANCHARACTERPALETTEEDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterInstanceBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterInstanceBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterInstanceBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTEEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterInstanceBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterInstanceBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPaletteEditor"), Z_Construct_UClass_UMetaHumanCharacterInstanceBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterInstanceBlueprintLibrary)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_155_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterInstanceBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterInstanceBlueprintLibrary(UMetaHumanCharacterInstanceBlueprintLibrary&&) = delete; \
	UMetaHumanCharacterInstanceBlueprintLibrary(const UMetaHumanCharacterInstanceBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterInstanceBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterInstanceBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterInstanceBlueprintLibrary) \
	NO_API virtual ~UMetaHumanCharacterInstanceBlueprintLibrary();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_152_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_155_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterInstanceBlueprintLibrary;

// ********** End Class UMetaHumanCharacterInstanceBlueprintLibrary ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Private_MetaHumanCollectionBlueprintLibrary_h

// ********** Begin Enum EMetaHumanCharacterInstanceParameterType **********************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERINSTANCEPARAMETERTYPE(op) \
	op(EMetaHumanCharacterInstanceParameterType::None) \
	op(EMetaHumanCharacterInstanceParameterType::Bool) \
	op(EMetaHumanCharacterInstanceParameterType::Float) \
	op(EMetaHumanCharacterInstanceParameterType::Color) 

enum class EMetaHumanCharacterInstanceParameterType : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterInstanceParameterType> { enum { Value = true }; };
template<> METAHUMANCHARACTERPALETTEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterInstanceParameterType>();
// ********** End Enum EMetaHumanCharacterInstanceParameterType ************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
