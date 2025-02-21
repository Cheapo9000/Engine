// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoolColumn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_BoolColumn_generated_h
#error "BoolColumn.generated.h already included, missing '#pragma once' in BoolColumn.h"
#endif
#define CHOOSER_BoolColumn_generated_h

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoolContextProperty_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FChooserParameterBoolBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FBoolContextProperty>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoolColumn_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FChooserColumnBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FBoolColumn>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_ChooserParameterBool_ContextProperty(); \
	friend struct Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_ChooserParameterBool_ContextProperty, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_ChooserParameterBool_ContextProperty) \
	virtual UObject* _getUObject() const override { return const_cast<UDEPRECATED_ChooserParameterBool_ContextProperty*>(this); }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_ChooserParameterBool_ContextProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_ChooserParameterBool_ContextProperty(UDEPRECATED_ChooserParameterBool_ContextProperty&&); \
	UDEPRECATED_ChooserParameterBool_ContextProperty(const UDEPRECATED_ChooserParameterBool_ContextProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_ChooserParameterBool_ContextProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_ChooserParameterBool_ContextProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_ChooserParameterBool_ContextProperty) \
	NO_API virtual ~UDEPRECATED_ChooserParameterBool_ContextProperty();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_115_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_118_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UDEPRECATED_ChooserParameterBool_ContextProperty>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_ChooserColumnBool(); \
	friend struct Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_ChooserColumnBool, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_ChooserColumnBool) \
	virtual UObject* _getUObject() const override { return const_cast<UDEPRECATED_ChooserColumnBool*>(this); }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_134_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_ChooserColumnBool(UDEPRECATED_ChooserColumnBool&&); \
	UDEPRECATED_ChooserColumnBool(const UDEPRECATED_ChooserColumnBool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_ChooserColumnBool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_ChooserColumnBool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_ChooserColumnBool) \
	NO_API virtual ~UDEPRECATED_ChooserColumnBool();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_131_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UDEPRECATED_ChooserColumnBool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_BoolColumn_h


#define FOREACH_ENUM_EBOOLCOLUMNCELLVALUE(op) \
	op(EBoolColumnCellValue::MatchFalse) \
	op(EBoolColumnCellValue::MatchTrue) \
	op(EBoolColumnCellValue::MatchAny) 

enum class EBoolColumnCellValue : uint8;
template<> struct TIsUEnumClass<EBoolColumnCellValue> { enum { Value = true }; };
template<> CHOOSER_API UEnum* StaticEnum<EBoolColumnCellValue>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
