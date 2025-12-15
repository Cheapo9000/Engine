// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructUtils/PropertyBag.h"

#ifdef COREUOBJECT_PropertyBag_generated_h
#error "PropertyBag.generated.h already included, missing '#pragma once' in PropertyBag.h"
#endif
#define COREUOBJECT_PropertyBag_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropertyBagContainerTypes ****************************************
struct Z_Construct_UScriptStruct_FPropertyBagContainerTypes_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyBagContainerTypes_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FPropertyBagContainerTypes;
// ********** End ScriptStruct FPropertyBagContainerTypes ******************************************

// ********** Begin ScriptStruct FPropertyBagPropertyDescMetaData **********************************
struct Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_197_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FPropertyBagPropertyDescMetaData;
// ********** End ScriptStruct FPropertyBagPropertyDescMetaData ************************************

// ********** Begin ScriptStruct FPropertyBagPropertyDesc ******************************************
struct Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_250_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FPropertyBagPropertyDesc;
// ********** End ScriptStruct FPropertyBagPropertyDesc ********************************************

// ********** Begin ScriptStruct FInstancedPropertyBag *********************************************
struct Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_419_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FInstancedPropertyBag;
// ********** End ScriptStruct FInstancedPropertyBag ***********************************************

// ********** Begin ScriptStruct FPropertyBagMissingStruct *****************************************
struct Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1290_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FPropertyBagMissingStruct;
// ********** End ScriptStruct FPropertyBagMissingStruct *******************************************

// ********** Begin Class UPropertyBagMissingObject ************************************************
struct Z_Construct_UClass_UPropertyBagMissingObject_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UPropertyBagMissingObject_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1296_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyBagMissingObject(); \
	friend struct ::Z_Construct_UClass_UPropertyBagMissingObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UPropertyBagMissingObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyBagMissingObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UPropertyBagMissingObject_NoRegister) \
	DECLARE_SERIALIZER(UPropertyBagMissingObject)


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1296_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UPropertyBagMissingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyBagMissingObject(UPropertyBagMissingObject&&) = delete; \
	UPropertyBagMissingObject(const UPropertyBagMissingObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UPropertyBagMissingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBagMissingObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyBagMissingObject) \
	COREUOBJECT_API virtual ~UPropertyBagMissingObject();


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1293_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1296_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1296_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1296_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyBagMissingObject;

// ********** End Class UPropertyBagMissingObject **************************************************

// ********** Begin Class UPropertyBag *************************************************************
struct Z_Construct_UClass_UPropertyBag_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UPropertyBag_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1311_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyBag(); \
	friend struct ::Z_Construct_UClass_UPropertyBag_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UPropertyBag_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyBag, UScriptStruct, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UPropertyBag_NoRegister) \
	DECLARE_SERIALIZER(UPropertyBag)


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1311_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UPropertyBag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyBag(UPropertyBag&&) = delete; \
	UPropertyBag(const UPropertyBag&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UPropertyBag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBag); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyBag) \
	COREUOBJECT_API virtual ~UPropertyBag();


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1307_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1311_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1311_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1311_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyBag;

// ********** End Class UPropertyBag ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h

// ********** Begin Enum EPropertyBagPropertyType **************************************************
#define FOREACH_ENUM_EPROPERTYBAGPROPERTYTYPE(op) \
	op(EPropertyBagPropertyType::None) \
	op(EPropertyBagPropertyType::Bool) \
	op(EPropertyBagPropertyType::Byte) \
	op(EPropertyBagPropertyType::Int32) \
	op(EPropertyBagPropertyType::Int64) \
	op(EPropertyBagPropertyType::Float) \
	op(EPropertyBagPropertyType::Double) \
	op(EPropertyBagPropertyType::Name) \
	op(EPropertyBagPropertyType::String) \
	op(EPropertyBagPropertyType::Text) \
	op(EPropertyBagPropertyType::Enum) \
	op(EPropertyBagPropertyType::Struct) \
	op(EPropertyBagPropertyType::Object) \
	op(EPropertyBagPropertyType::SoftObject) \
	op(EPropertyBagPropertyType::Class) \
	op(EPropertyBagPropertyType::SoftClass) \
	op(EPropertyBagPropertyType::UInt32) \
	op(EPropertyBagPropertyType::UInt64) \
	op(EPropertyBagPropertyType::Count) 

enum class EPropertyBagPropertyType : uint8;
template<> struct TIsUEnumClass<EPropertyBagPropertyType> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyBagPropertyType>();
// ********** End Enum EPropertyBagPropertyType ****************************************************

// ********** Begin Enum EPropertyBagContainerType *************************************************
#define FOREACH_ENUM_EPROPERTYBAGCONTAINERTYPE(op) \
	op(EPropertyBagContainerType::None) \
	op(EPropertyBagContainerType::Array) \
	op(EPropertyBagContainerType::Set) \
	op(EPropertyBagContainerType::Count) 

enum class EPropertyBagContainerType : uint8;
template<> struct TIsUEnumClass<EPropertyBagContainerType> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyBagContainerType>();
// ********** End Enum EPropertyBagContainerType ***************************************************

// ********** Begin Enum EPropertyBagResult ********************************************************
#define FOREACH_ENUM_EPROPERTYBAGRESULT(op) \
	op(EPropertyBagResult::Success) \
	op(EPropertyBagResult::TypeMismatch) \
	op(EPropertyBagResult::OutOfBounds) \
	op(EPropertyBagResult::PropertyNotFound) \
	op(EPropertyBagResult::DuplicatedValue) 

enum class EPropertyBagResult : uint8;
template<> struct TIsUEnumClass<EPropertyBagResult> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyBagResult>();
// ********** End Enum EPropertyBagResult **********************************************************

// ********** Begin Enum EPropertyBagAlterationResult **********************************************
#define FOREACH_ENUM_EPROPERTYBAGALTERATIONRESULT(op) \
	op(EPropertyBagAlterationResult::Success) \
	op(EPropertyBagAlterationResult::NoOperation) \
	op(EPropertyBagAlterationResult::InternalError) \
	op(EPropertyBagAlterationResult::PropertyNameEmpty) \
	op(EPropertyBagAlterationResult::PropertyNameInvalidCharacters) \
	op(EPropertyBagAlterationResult::SourcePropertyNotFound) \
	op(EPropertyBagAlterationResult::TargetPropertyNotFound) \
	op(EPropertyBagAlterationResult::TargetPropertyAlreadyExists) 

enum class EPropertyBagAlterationResult : uint8;
template<> struct TIsUEnumClass<EPropertyBagAlterationResult> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyBagAlterationResult>();
// ********** End Enum EPropertyBagAlterationResult ************************************************

// ********** Begin Enum EPropertyBagMissingEnum ***************************************************
#define FOREACH_ENUM_EPROPERTYBAGMISSINGENUM(op) \
	op(EPropertyBagMissingEnum::Missing) 

enum class EPropertyBagMissingEnum : uint8;
template<> struct TIsUEnumClass<EPropertyBagMissingEnum> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyBagMissingEnum>();
// ********** End Enum EPropertyBagMissingEnum *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
