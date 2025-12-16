// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dom/WebAPISchema.h"

#ifdef WEBAPIEDITOR_WebAPISchema_generated_h
#error "WebAPISchema.generated.h already included, missing '#pragma once' in WebAPISchema.h"
#endif
#define WEBAPIEDITOR_WebAPISchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UWebAPISchemaObjectInterface *****************************************
struct Z_Construct_UClass_UWebAPISchemaObjectInterface_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPISchemaObjectInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEBAPIEDITOR_API UWebAPISchemaObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPISchemaObjectInterface(UWebAPISchemaObjectInterface&&) = delete; \
	UWebAPISchemaObjectInterface(const UWebAPISchemaObjectInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEBAPIEDITOR_API, UWebAPISchemaObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPISchemaObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPISchemaObjectInterface) \
	virtual ~UWebAPISchemaObjectInterface() = default;


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWebAPISchemaObjectInterface(); \
	friend struct ::Z_Construct_UClass_UWebAPISchemaObjectInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPISchemaObjectInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPISchemaObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPISchemaObjectInterface_NoRegister) \
	DECLARE_SERIALIZER(UWebAPISchemaObjectInterface)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWebAPISchemaObjectInterface() {} \
public: \
	typedef UWebAPISchemaObjectInterface UClassType; \
	typedef IWebAPISchemaObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPISchemaObjectInterface;

// ********** End Interface UWebAPISchemaObjectInterface *******************************************

// ********** Begin ScriptStruct FWebAPITypeNameVariant ********************************************
struct Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics;
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWebAPITypeNameVariant;
// ********** End ScriptStruct FWebAPITypeNameVariant **********************************************

// ********** Begin ScriptStruct FWebAPINameInfo ***************************************************
struct Z_Construct_UScriptStruct_FWebAPINameInfo_Statics;
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_116_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWebAPINameInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWebAPINameInfo;
// ********** End ScriptStruct FWebAPINameInfo *****************************************************

// ********** Begin ScriptStruct FWebAPINameVariant ************************************************
struct Z_Construct_UScriptStruct_FWebAPINameVariant_Statics;
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_163_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWebAPINameVariant_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWebAPINameVariant;
// ********** End ScriptStruct FWebAPINameVariant **************************************************

// ********** Begin Class UWebAPIModelBase *********************************************************
struct Z_Construct_UClass_UWebAPIModelBase_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModelBase_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_222_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIModelBase(); \
	friend struct ::Z_Construct_UClass_UWebAPIModelBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPIModelBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPIModelBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPIModelBase_NoRegister) \
	DECLARE_SERIALIZER(UWebAPIModelBase) \
	virtual UObject* _getUObject() const override { return const_cast<UWebAPIModelBase*>(this); }


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_222_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEBAPIEDITOR_API UWebAPIModelBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPIModelBase(UWebAPIModelBase&&) = delete; \
	UWebAPIModelBase(const UWebAPIModelBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEBAPIEDITOR_API, UWebAPIModelBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIModelBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPIModelBase) \
	WEBAPIEDITOR_API virtual ~UWebAPIModelBase();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_217_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_222_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_222_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPIModelBase;

// ********** End Class UWebAPIModelBase ***********************************************************

// ********** Begin Class UWebAPISchema ************************************************************
struct Z_Construct_UClass_UWebAPISchema_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPISchema_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_282_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPISchema(); \
	friend struct ::Z_Construct_UClass_UWebAPISchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPISchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPISchema, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPISchema_NoRegister) \
	DECLARE_SERIALIZER(UWebAPISchema) \
	virtual UObject* _getUObject() const override { return const_cast<UWebAPISchema*>(this); }


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_282_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPISchema(UWebAPISchema&&) = delete; \
	UWebAPISchema(const UWebAPISchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPISchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPISchema); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebAPISchema) \
	NO_API virtual ~UWebAPISchema();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_277_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_282_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_282_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_282_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPISchema;

// ********** End Class UWebAPISchema **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
