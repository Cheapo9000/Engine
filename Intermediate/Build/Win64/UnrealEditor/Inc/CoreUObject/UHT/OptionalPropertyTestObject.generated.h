// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/OptionalPropertyTestObject.h"

#ifdef COREUOBJECT_OptionalPropertyTestObject_generated_h
#error "OptionalPropertyTestObject.generated.h already included, missing '#pragma once' in OptionalPropertyTestObject.h"
#endif
#define COREUOBJECT_OptionalPropertyTestObject_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptionalPropertyTestObject **********************************************
#if WITH_TESTS
struct Z_Construct_UClass_UOptionalPropertyTestObject_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UOptionalPropertyTestObject_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptionalPropertyTestObject(); \
	friend struct ::Z_Construct_UClass_UOptionalPropertyTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UOptionalPropertyTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptionalPropertyTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UOptionalPropertyTestObject_NoRegister) \
	DECLARE_SERIALIZER(UOptionalPropertyTestObject)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptionalPropertyTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptionalPropertyTestObject(UOptionalPropertyTestObject&&) = delete; \
	UOptionalPropertyTestObject(const UOptionalPropertyTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptionalPropertyTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptionalPropertyTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptionalPropertyTestObject) \
	NO_API virtual ~UOptionalPropertyTestObject();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_12_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptionalPropertyTestObject;

#endif // WITH_TESTS
// ********** End Class UOptionalPropertyTestObject ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
