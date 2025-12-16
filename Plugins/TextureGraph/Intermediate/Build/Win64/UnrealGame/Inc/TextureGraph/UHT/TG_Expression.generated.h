// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/TG_Expression.h"

#ifdef TEXTUREGRAPH_TG_Expression_generated_h
#error "TG_Expression.generated.h already included, missing '#pragma once' in TG_Expression.h"
#endif
#define TEXTUREGRAPH_TG_Expression_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression ***********************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTG_Expression, TEXTUREGRAPH_API)


struct Z_Construct_UClass_UTG_Expression_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression) \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_39_ARCHIVESERIALIZER


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression(UTG_Expression&&) = delete; \
	UTG_Expression(const UTG_Expression&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression) \
	TEXTUREGRAPH_API virtual ~UTG_Expression();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_36_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression;

// ********** End Class UTG_Expression *************************************************************

// ********** Begin Class UTG_Expression_Null ******************************************************
struct Z_Construct_UClass_UTG_Expression_Null_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_Null_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_231_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_Null(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_Null_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_Null_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_Null, UTG_Expression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_Null_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_Null)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_231_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_Null(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_Null(UTG_Expression_Null&&) = delete; \
	UTG_Expression_Null(const UTG_Expression_Null&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_Null); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_Null); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_Null) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_Null();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_228_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_231_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_231_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h_231_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_Null;

// ********** End Class UTG_Expression_Null ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
