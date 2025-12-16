// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebAPIEditorSubsystem.h"

#ifdef WEBAPIEDITOR_WebAPIEditorSubsystem_generated_h
#error "WebAPIEditorSubsystem.generated.h already included, missing '#pragma once' in WebAPIEditorSubsystem.h"
#endif
#define WEBAPIEDITOR_WebAPIEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPIEditorSubsystem ***************************************************
struct Z_Construct_UClass_UWebAPIEditorSubsystem_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIEditorSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UWebAPIEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPIEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPIEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPIEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWebAPIEditorSubsystem)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPIEditorSubsystem(UWebAPIEditorSubsystem&&) = delete; \
	UWebAPIEditorSubsystem(const UWebAPIEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPIEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebAPIEditorSubsystem) \
	NO_API virtual ~UWebAPIEditorSubsystem();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPIEditorSubsystem;

// ********** End Class UWebAPIEditorSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
