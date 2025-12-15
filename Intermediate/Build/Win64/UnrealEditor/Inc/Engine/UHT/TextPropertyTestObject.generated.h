// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/TextPropertyTestObject.h"

#ifdef ENGINE_TextPropertyTestObject_generated_h
#error "TextPropertyTestObject.generated.h already included, missing '#pragma once' in TextPropertyTestObject.h"
#endif
#define ENGINE_TextPropertyTestObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextPropertyTestObject **************************************************
struct Z_Construct_UClass_UTextPropertyTestObject_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTextPropertyTestObject_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTextPropertyTestObject(); \
	friend struct ::Z_Construct_UClass_UTextPropertyTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTextPropertyTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextPropertyTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTextPropertyTestObject_NoRegister) \
	DECLARE_SERIALIZER(UTextPropertyTestObject)


#define FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextPropertyTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextPropertyTestObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextPropertyTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextPropertyTestObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextPropertyTestObject(UTextPropertyTestObject&&) = delete; \
	UTextPropertyTestObject(const UTextPropertyTestObject&) = delete; \
	NO_API virtual ~UTextPropertyTestObject();


#define FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextPropertyTestObject;

// ********** End Class UTextPropertyTestObject ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
