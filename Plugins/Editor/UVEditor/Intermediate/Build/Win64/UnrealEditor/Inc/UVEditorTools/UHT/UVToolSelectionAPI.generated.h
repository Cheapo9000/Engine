// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Selection/UVToolSelectionAPI.h"

#ifdef UVEDITORTOOLS_UVToolSelectionAPI_generated_h
#error "UVToolSelectionAPI.generated.h already included, missing '#pragma once' in UVToolSelectionAPI.h"
#endif
#define UVEDITORTOOLS_UVToolSelectionAPI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVToolSelectionAPI ******************************************************
struct Z_Construct_UClass_UUVToolSelectionAPI_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSelectionAPI_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVToolSelectionAPI(); \
	friend struct ::Z_Construct_UClass_UUVToolSelectionAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVToolSelectionAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVToolSelectionAPI, UUVToolContextObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVToolSelectionAPI_NoRegister) \
	DECLARE_SERIALIZER(UUVToolSelectionAPI)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVToolSelectionAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVToolSelectionAPI(UUVToolSelectionAPI&&) = delete; \
	UUVToolSelectionAPI(const UUVToolSelectionAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVToolSelectionAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVToolSelectionAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVToolSelectionAPI) \
	UVEDITORTOOLS_API virtual ~UUVToolSelectionAPI();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_41_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVToolSelectionAPI;

// ********** End Class UUVToolSelectionAPI ********************************************************

// ********** Begin Interface UUVToolSupportsSelection *********************************************
struct Z_Construct_UClass_UUVToolSupportsSelection_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSupportsSelection_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_400_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVToolSupportsSelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVToolSupportsSelection(UUVToolSupportsSelection&&) = delete; \
	UUVToolSupportsSelection(const UUVToolSupportsSelection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVToolSupportsSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVToolSupportsSelection); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVToolSupportsSelection) \
	virtual ~UUVToolSupportsSelection() = default;


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_400_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUVToolSupportsSelection(); \
	friend struct ::Z_Construct_UClass_UUVToolSupportsSelection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVToolSupportsSelection_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVToolSupportsSelection, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVToolSupportsSelection_NoRegister) \
	DECLARE_SERIALIZER(UUVToolSupportsSelection)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_400_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_400_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_400_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_400_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUVToolSupportsSelection() {} \
public: \
	typedef UUVToolSupportsSelection UClassType; \
	typedef IUVToolSupportsSelection ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_397_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_415_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_400_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVToolSupportsSelection;

// ********** End Interface UUVToolSupportsSelection ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
