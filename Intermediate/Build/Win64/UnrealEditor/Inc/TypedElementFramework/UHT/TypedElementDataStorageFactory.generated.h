// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementDataStorageFactory.h"

#ifdef TYPEDELEMENTFRAMEWORK_TypedElementDataStorageFactory_generated_h
#error "TypedElementDataStorageFactory.generated.h already included, missing '#pragma once' in TypedElementDataStorageFactory.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementDataStorageFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorDataStorageFactory ************************************************
struct Z_Construct_UClass_UEditorDataStorageFactory_Statics;
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UEditorDataStorageFactory_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorDataStorageFactory(); \
	friend struct ::Z_Construct_UClass_UEditorDataStorageFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTFRAMEWORK_API UClass* ::Z_Construct_UClass_UEditorDataStorageFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorDataStorageFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), Z_Construct_UClass_UEditorDataStorageFactory_NoRegister) \
	DECLARE_SERIALIZER(UEditorDataStorageFactory)


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTFRAMEWORK_API UEditorDataStorageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorDataStorageFactory(UEditorDataStorageFactory&&) = delete; \
	UEditorDataStorageFactory(const UEditorDataStorageFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTFRAMEWORK_API, UEditorDataStorageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDataStorageFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDataStorageFactory)


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_18_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorDataStorageFactory;

// ********** End Class UEditorDataStorageFactory **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
