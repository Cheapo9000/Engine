// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Field/FieldSystemFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIELDSYSTEMEDITOR_FieldSystemFactory_generated_h
#error "FieldSystemFactory.generated.h already included, missing '#pragma once' in FieldSystemFactory.h"
#endif
#define FIELDSYSTEMEDITOR_FieldSystemFactory_generated_h

#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFieldSystemFactory(); \
	friend struct Z_Construct_UClass_UFieldSystemFactory_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FieldSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(UFieldSystemFactory)


#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFieldSystemFactory(UFieldSystemFactory&&); \
	UFieldSystemFactory(const UFieldSystemFactory&); \
public: \
	NO_API virtual ~UFieldSystemFactory();


#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMEDITOR_API UClass* StaticClass<class UFieldSystemFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FieldSystemPlugin_Source_FieldSyStemEditor_Public_Field_FieldSystemFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
