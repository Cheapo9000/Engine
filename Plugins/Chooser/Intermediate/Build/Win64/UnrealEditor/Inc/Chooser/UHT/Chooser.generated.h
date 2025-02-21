// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chooser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
#ifdef CHOOSER_Chooser_generated_h
#error "Chooser.generated.h already included, missing '#pragma once' in Chooser.h"
#endif
#define CHOOSER_Chooser_generated_h

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResultAssetFilter);


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChooserTable, NO_API)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUChooserTable(); \
	friend struct Z_Construct_UClass_UChooserTable_Statics; \
public: \
	DECLARE_CLASS(UChooserTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
	DECLARE_SERIALIZER(UChooserTable) \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_23_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UChooserTable*>(this); }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChooserTable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChooserTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChooserTable(UChooserTable&&); \
	UChooserTable(const UChooserTable&); \
public: \
	NO_API virtual ~UChooserTable();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_20_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_23_INCLASS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UChooserTable>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNestedChooser_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FObjectChooserBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FNestedChooser>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_225_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEvaluateChooser_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FObjectChooserBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FEvaluateChooser>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_245_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_ObjectChooser_EvaluateChooser(); \
	friend struct Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_ObjectChooser_EvaluateChooser, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_ObjectChooser_EvaluateChooser) \
	virtual UObject* _getUObject() const override { return const_cast<UDEPRECATED_ObjectChooser_EvaluateChooser*>(this); }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_245_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_ObjectChooser_EvaluateChooser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_ObjectChooser_EvaluateChooser(UDEPRECATED_ObjectChooser_EvaluateChooser&&); \
	UDEPRECATED_ObjectChooser_EvaluateChooser(const UDEPRECATED_ObjectChooser_EvaluateChooser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_ObjectChooser_EvaluateChooser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_ObjectChooser_EvaluateChooser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_ObjectChooser_EvaluateChooser) \
	NO_API virtual ~UDEPRECATED_ObjectChooser_EvaluateChooser();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_242_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_245_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_245_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_245_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UDEPRECATED_ObjectChooser_EvaluateChooser>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_261_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChooserColumnMenuContext(); \
	friend struct Z_Construct_UClass_UChooserColumnMenuContext_Statics; \
public: \
	DECLARE_CLASS(UChooserColumnMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
	DECLARE_SERIALIZER(UChooserColumnMenuContext)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_261_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChooserColumnMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChooserColumnMenuContext(UChooserColumnMenuContext&&); \
	UChooserColumnMenuContext(const UChooserColumnMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChooserColumnMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserColumnMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserColumnMenuContext) \
	NO_API virtual ~UChooserColumnMenuContext();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_258_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_261_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_261_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_261_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UChooserColumnMenuContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
