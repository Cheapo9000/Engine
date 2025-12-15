// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/PieFixupTestObjects.h"

#ifdef ENGINE_PieFixupTestObjects_generated_h
#error "PieFixupTestObjects.generated.h already included, missing '#pragma once' in PieFixupTestObjects.h"
#endif
#define ENGINE_PieFixupTestObjects_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPieFixupStructWithSoftObjectPath *********************************
struct Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics;
#define FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPieFixupStructWithSoftObjectPath;
// ********** End ScriptStruct FPieFixupStructWithSoftObjectPath ***********************************

// ********** Begin Class UPieFixupTestObject ******************************************************
struct Z_Construct_UClass_UPieFixupTestObject_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPieFixupTestObject_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPieFixupTestObject(); \
	friend struct ::Z_Construct_UClass_UPieFixupTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPieFixupTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UPieFixupTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPieFixupTestObject_NoRegister) \
	DECLARE_SERIALIZER(UPieFixupTestObject)


#define FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPieFixupTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPieFixupTestObject(UPieFixupTestObject&&) = delete; \
	UPieFixupTestObject(const UPieFixupTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPieFixupTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPieFixupTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPieFixupTestObject) \
	NO_API virtual ~UPieFixupTestObject();


#define FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPieFixupTestObject;

// ********** End Class UPieFixupTestObject ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
