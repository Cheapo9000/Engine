// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Selection/UVToolSelectionAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UVEDITORTOOLS_UVToolSelectionAPI_generated_h
#error "UVToolSelectionAPI.generated.h already included, missing '#pragma once' in UVToolSelectionAPI.h"
#endif
#define UVEDITORTOOLS_UVToolSelectionAPI_generated_h

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVToolSelectionAPI(); \
	friend struct Z_Construct_UClass_UUVToolSelectionAPI_Statics; \
public: \
	DECLARE_CLASS(UUVToolSelectionAPI, UUVToolContextObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditorTools"), NO_API) \
	DECLARE_SERIALIZER(UUVToolSelectionAPI)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVToolSelectionAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVToolSelectionAPI(UUVToolSelectionAPI&&); \
	UUVToolSelectionAPI(const UUVToolSelectionAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVToolSelectionAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVToolSelectionAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVToolSelectionAPI) \
	NO_API virtual ~UUVToolSelectionAPI();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_39_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UVEDITORTOOLS_API UClass* StaticClass<class UUVToolSelectionAPI>();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_398_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVToolSupportsSelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVToolSupportsSelection(UUVToolSupportsSelection&&); \
	UUVToolSupportsSelection(const UUVToolSupportsSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVToolSupportsSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVToolSupportsSelection); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVToolSupportsSelection) \
	UVEDITORTOOLS_API virtual ~UUVToolSupportsSelection();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_398_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUVToolSupportsSelection(); \
	friend struct Z_Construct_UClass_UUVToolSupportsSelection_Statics; \
public: \
	DECLARE_CLASS(UUVToolSupportsSelection, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UVEditorTools"), UVEDITORTOOLS_API) \
	DECLARE_SERIALIZER(UUVToolSupportsSelection)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_398_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_398_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_398_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_398_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUVToolSupportsSelection() {} \
public: \
	typedef UUVToolSupportsSelection UClassType; \
	typedef IUVToolSupportsSelection ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_395_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_413_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_398_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UVEDITORTOOLS_API UClass* StaticClass<class UUVToolSupportsSelection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
