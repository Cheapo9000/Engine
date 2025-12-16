// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealEd/ObjectToolsTests.h"

#ifdef EDITORTESTS_ObjectToolsTests_generated_h
#error "ObjectToolsTests.generated.h already included, missing '#pragma once' in ObjectToolsTests.h"
#endif
#define EDITORTESTS_ObjectToolsTests_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectToolsTestObject ***************************************************
struct Z_Construct_UClass_UObjectToolsTestObject_Statics;
EDITORTESTS_API UClass* Z_Construct_UClass_UObjectToolsTestObject_NoRegister();

#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectToolsTestObject(); \
	friend struct ::Z_Construct_UClass_UObjectToolsTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORTESTS_API UClass* ::Z_Construct_UClass_UObjectToolsTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectToolsTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorTests"), Z_Construct_UClass_UObjectToolsTestObject_NoRegister) \
	DECLARE_SERIALIZER(UObjectToolsTestObject)


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectToolsTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectToolsTestObject(UObjectToolsTestObject&&) = delete; \
	UObjectToolsTestObject(const UObjectToolsTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectToolsTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectToolsTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectToolsTestObject) \
	NO_API virtual ~UObjectToolsTestObject();


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h_11_PROLOG
#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectToolsTestObject;

// ********** End Class UObjectToolsTestObject *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_ObjectToolsTests_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
