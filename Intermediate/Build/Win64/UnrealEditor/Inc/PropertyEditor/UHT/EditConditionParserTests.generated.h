// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditConditionParserTests.h"

#ifdef PROPERTYEDITOR_EditConditionParserTests_generated_h
#error "EditConditionParserTests.generated.h already included, missing '#pragma once' in EditConditionParserTests.h"
#endif
#define PROPERTYEDITOR_EditConditionParserTests_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
enum class EditConditionTestEnum : int32;

// ********** Begin Class UEditConditionTestObject *************************************************
#define FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execStaticGetWeakObjectPtrFunction); \
	DECLARE_FUNCTION(execStaticGetSoftClassPtrFunction); \
	DECLARE_FUNCTION(execStaticGetUObjectPtrFunction); \
	DECLARE_FUNCTION(execStaticGetUintBitfieldFunction); \
	DECLARE_FUNCTION(execStaticGetIntegerFunction); \
	DECLARE_FUNCTION(execStaticGetDoubleFunction); \
	DECLARE_FUNCTION(execStaticGetByteEnumFunction); \
	DECLARE_FUNCTION(execStaticGetEnumFunction); \
	DECLARE_FUNCTION(execStaticGetBoolFunction); \
	DECLARE_FUNCTION(execStaticVoidFunction); \
	DECLARE_FUNCTION(execGetWeakObjectPtrFunction); \
	DECLARE_FUNCTION(execGetSoftClassPtrFunction); \
	DECLARE_FUNCTION(execGetUObjectPtrFunction); \
	DECLARE_FUNCTION(execGetUintBitfieldFunction); \
	DECLARE_FUNCTION(execGetIntegerFunction); \
	DECLARE_FUNCTION(execGetDoubleFunction); \
	DECLARE_FUNCTION(execGetByteEnumFunction); \
	DECLARE_FUNCTION(execGetEnumFunction); \
	DECLARE_FUNCTION(execGetBoolFunction); \
	DECLARE_FUNCTION(execVoidFunction);


struct Z_Construct_UClass_UEditConditionTestObject_Statics;
PROPERTYEDITOR_API UClass* Z_Construct_UClass_UEditConditionTestObject_NoRegister();

#define FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUEditConditionTestObject(); \
	friend struct ::Z_Construct_UClass_UEditConditionTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYEDITOR_API UClass* ::Z_Construct_UClass_UEditConditionTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditConditionTestObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PropertyEditor"), Z_Construct_UClass_UEditConditionTestObject_NoRegister) \
	DECLARE_SERIALIZER(UEditConditionTestObject)


#define FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditConditionTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditConditionTestObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditConditionTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditConditionTestObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditConditionTestObject(UEditConditionTestObject&&) = delete; \
	UEditConditionTestObject(const UEditConditionTestObject&) = delete; \
	NO_API virtual ~UEditConditionTestObject();


#define FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_36_PROLOG
#define FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_39_RPC_WRAPPERS \
	FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_39_INCLASS \
	FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditConditionTestObject;

// ********** End Class UEditConditionTestObject ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h

// ********** Begin Enum EditConditionTestEnum *****************************************************
#define FOREACH_ENUM_EDITCONDITIONTESTENUM(op) \
	op(EditConditionTestEnum::First) \
	op(EditConditionTestEnum::Second) 

enum class EditConditionTestEnum;
template<> struct TIsUEnumClass<EditConditionTestEnum> { enum { Value = true }; };
template<> PROPERTYEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EditConditionTestEnum>();
// ********** End Enum EditConditionTestEnum *******************************************************

// ********** Begin Enum EditConditionByteEnum *****************************************************
#define FOREACH_ENUM_EDITCONDITIONBYTEENUM(op) \
	op(First) \
	op(Second) 

enum EditConditionByteEnum : int;
template<> PROPERTYEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EditConditionByteEnum>();
// ********** End Enum EditConditionByteEnum *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
