// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeGen/WebAPICodeGenerator.h"

#ifdef WEBAPIEDITOR_WebAPICodeGenerator_generated_h
#error "WebAPICodeGenerator.generated.h already included, missing '#pragma once' in WebAPICodeGenerator.h"
#endif
#define WEBAPIEDITOR_WebAPICodeGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UWebAPICodeGeneratorInterface ****************************************
struct Z_Construct_UClass_UWebAPICodeGeneratorInterface_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPICodeGeneratorInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebAPICodeGeneratorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPICodeGeneratorInterface(UWebAPICodeGeneratorInterface&&) = delete; \
	UWebAPICodeGeneratorInterface(const UWebAPICodeGeneratorInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPICodeGeneratorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPICodeGeneratorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPICodeGeneratorInterface) \
	virtual ~UWebAPICodeGeneratorInterface() = default;


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_30_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWebAPICodeGeneratorInterface(); \
	friend struct ::Z_Construct_UClass_UWebAPICodeGeneratorInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPICodeGeneratorInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPICodeGeneratorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPICodeGeneratorInterface_NoRegister) \
	DECLARE_SERIALIZER(UWebAPICodeGeneratorInterface)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_30_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_30_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_30_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWebAPICodeGeneratorInterface() {} \
public: \
	typedef UWebAPICodeGeneratorInterface UClassType; \
	typedef IWebAPICodeGeneratorInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPICodeGeneratorInterface;

// ********** End Interface UWebAPICodeGeneratorInterface ******************************************

// ********** Begin Class UWebAPICodeGeneratorBase *************************************************
struct Z_Construct_UClass_UWebAPICodeGeneratorBase_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPICodeGeneratorBase_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPICodeGeneratorBase(); \
	friend struct ::Z_Construct_UClass_UWebAPICodeGeneratorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPICodeGeneratorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPICodeGeneratorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPICodeGeneratorBase_NoRegister) \
	DECLARE_SERIALIZER(UWebAPICodeGeneratorBase) \
	virtual UObject* _getUObject() const override { return const_cast<UWebAPICodeGeneratorBase*>(this); }


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebAPICodeGeneratorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPICodeGeneratorBase(UWebAPICodeGeneratorBase&&) = delete; \
	UWebAPICodeGeneratorBase(const UWebAPICodeGeneratorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPICodeGeneratorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPICodeGeneratorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPICodeGeneratorBase) \
	NO_API virtual ~UWebAPICodeGeneratorBase();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_47_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPICodeGeneratorBase;

// ********** End Class UWebAPICodeGeneratorBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
