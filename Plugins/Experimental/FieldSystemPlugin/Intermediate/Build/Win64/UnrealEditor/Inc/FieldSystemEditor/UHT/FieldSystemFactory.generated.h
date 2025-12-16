// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Field/FieldSystemFactory.h"

#ifdef FIELDSYSTEMEDITOR_FieldSystemFactory_generated_h
#error "FieldSystemFactory.generated.h already included, missing '#pragma once' in FieldSystemFactory.h"
#endif
#define FIELDSYSTEMEDITOR_FieldSystemFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFieldSystemFactory ******************************************************
struct Z_Construct_UClass_UFieldSystemFactory_Statics;
FIELDSYSTEMEDITOR_API UClass* Z_Construct_UClass_UFieldSystemFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFieldSystemFactory(); \
	friend struct ::Z_Construct_UClass_UFieldSystemFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FIELDSYSTEMEDITOR_API UClass* ::Z_Construct_UClass_UFieldSystemFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UFieldSystemFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FieldSystemEditor"), Z_Construct_UClass_UFieldSystemFactory_NoRegister) \
	DECLARE_SERIALIZER(UFieldSystemFactory)


#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFieldSystemFactory(UFieldSystemFactory&&) = delete; \
	UFieldSystemFactory(const UFieldSystemFactory&) = delete; \
	NO_API virtual ~UFieldSystemFactory();


#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFieldSystemFactory;

// ********** End Class UFieldSystemFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
