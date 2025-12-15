// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JsonObjectWrapper.h"

#ifdef JSONUTILITIES_JsonObjectWrapper_generated_h
#error "JsonObjectWrapper.generated.h already included, missing '#pragma once' in JsonObjectWrapper.h"
#endif
#define JSONUTILITIES_JsonObjectWrapper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FJsonObjectWrapper ************************************************
struct Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics;
#define FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics; \
	JSONUTILITIES_API static class UScriptStruct* StaticStruct();


struct FJsonObjectWrapper;
// ********** End ScriptStruct FJsonObjectWrapper **************************************************

// ********** Begin Class UJsonUtilitiesDummyObject ************************************************
struct Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics;
JSONUTILITIES_API UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister();

#define FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonUtilitiesDummyObject(); \
	friend struct ::Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JSONUTILITIES_API UClass* ::Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UJsonUtilitiesDummyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JsonUtilities"), Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister) \
	DECLARE_SERIALIZER(UJsonUtilitiesDummyObject)


#define FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonUtilitiesDummyObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJsonUtilitiesDummyObject(UJsonUtilitiesDummyObject&&) = delete; \
	UJsonUtilitiesDummyObject(const UJsonUtilitiesDummyObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonUtilitiesDummyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonUtilitiesDummyObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonUtilitiesDummyObject) \
	NO_API virtual ~UJsonUtilitiesDummyObject();


#define FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_59_PROLOG
#define FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJsonUtilitiesDummyObject;

// ********** End Class UJsonUtilitiesDummyObject **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
