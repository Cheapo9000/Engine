// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chooser.h"

#ifdef CHOOSER_Chooser_generated_h
#error "Chooser.generated.h already included, missing '#pragma once' in Chooser.h"
#endif
#define CHOOSER_Chooser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;

// ********** Begin Class UChooserTable ************************************************************
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResultAssetFilter);


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChooserTable, CHOOSER_API)


struct Z_Construct_UClass_UChooserTable_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UChooserTable_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUChooserTable(); \
	friend struct ::Z_Construct_UClass_UChooserTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UChooserTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UChooserTable, UChooserSignature, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UChooserTable_NoRegister) \
	DECLARE_SERIALIZER(UChooserTable) \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_24_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UChooserTable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UChooserTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserTable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChooserTable(UChooserTable&&) = delete; \
	UChooserTable(const UChooserTable&) = delete; \
	CHOOSER_API virtual ~UChooserTable();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_21_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_24_INCLASS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChooserTable;

// ********** End Class UChooserTable **************************************************************

// ********** Begin ScriptStruct FNestedChooser ****************************************************
struct Z_Construct_UScriptStruct_FNestedChooser_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_203_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNestedChooser_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectChooserBase Super;


struct FNestedChooser;
// ********** End ScriptStruct FNestedChooser ******************************************************

// ********** Begin ScriptStruct FEvaluateChooser **************************************************
struct Z_Construct_UScriptStruct_FEvaluateChooser_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_223_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEvaluateChooser_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectChooserBase Super;


struct FEvaluateChooser;
// ********** End ScriptStruct FEvaluateChooser ****************************************************

// ********** Begin Class UDEPRECATED_ObjectChooser_EvaluateChooser ********************************
struct Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_ObjectChooser_EvaluateChooser(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_ObjectChooser_EvaluateChooser, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_ObjectChooser_EvaluateChooser) \
	virtual UObject* _getUObject() const override { return const_cast<UDEPRECATED_ObjectChooser_EvaluateChooser*>(this); }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UDEPRECATED_ObjectChooser_EvaluateChooser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_ObjectChooser_EvaluateChooser(UDEPRECATED_ObjectChooser_EvaluateChooser&&) = delete; \
	UDEPRECATED_ObjectChooser_EvaluateChooser(const UDEPRECATED_ObjectChooser_EvaluateChooser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UDEPRECATED_ObjectChooser_EvaluateChooser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_ObjectChooser_EvaluateChooser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_ObjectChooser_EvaluateChooser) \
	CHOOSER_API virtual ~UDEPRECATED_ObjectChooser_EvaluateChooser();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_241_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_244_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_244_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_ObjectChooser_EvaluateChooser;

// ********** End Class UDEPRECATED_ObjectChooser_EvaluateChooser **********************************

// ********** Begin Class UChooserColumnMenuContext ************************************************
struct Z_Construct_UClass_UChooserColumnMenuContext_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UChooserColumnMenuContext_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_260_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChooserColumnMenuContext(); \
	friend struct ::Z_Construct_UClass_UChooserColumnMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UChooserColumnMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UChooserColumnMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UChooserColumnMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UChooserColumnMenuContext)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_260_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UChooserColumnMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChooserColumnMenuContext(UChooserColumnMenuContext&&) = delete; \
	UChooserColumnMenuContext(const UChooserColumnMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UChooserColumnMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserColumnMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserColumnMenuContext) \
	CHOOSER_API virtual ~UChooserColumnMenuContext();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_257_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_260_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_260_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h_260_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChooserColumnMenuContext;

// ********** End Class UChooserColumnMenuContext **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_Chooser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
