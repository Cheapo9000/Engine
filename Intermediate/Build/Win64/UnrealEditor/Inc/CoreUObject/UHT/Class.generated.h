// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/Class.h"

#ifdef COREUOBJECT_Class_generated_h
#error "Class.generated.h already included, missing '#pragma once' in Class.h"
#endif
#define COREUOBJECT_Class_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UField *******************************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_182_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UField, COREUOBJECT_API)


struct Z_Construct_UClass_UField_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UField_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUField(); \
	friend struct ::Z_Construct_UClass_UField_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UField_NoRegister(); \
public: \
	DECLARE_CLASS2(UField, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_UField, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UField_NoRegister) \
	DECLARE_SERIALIZER(UField) \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_182_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_182_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UField(UField&&) = delete; \
	UField(const UField&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UField); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UField); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UField)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_179_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UField;

// ********** End Class UField *********************************************************************

// ********** Begin Class UStruct ******************************************************************
struct Z_Construct_UClass_UStruct_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UStruct_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_481_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStruct(); \
	friend struct ::Z_Construct_UClass_UStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UStruct_NoRegister(); \
public: \
	DECLARE_CLASS2(UStruct, UField, COMPILED_IN_FLAGS(0), CASTCLASS_UStruct, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UStruct_NoRegister) \
	DECLARE_SERIALIZER(UStruct)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_481_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStruct(UStruct&&) = delete; \
	UStruct(const UStruct&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStruct)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_475_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_481_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_481_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_481_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStruct;

// ********** End Class UStruct ********************************************************************

// ********** Begin Class UScriptStruct ************************************************************
struct Z_Construct_UClass_UScriptStruct_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_1721_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptStruct(); \
	friend struct ::Z_Construct_UClass_UScriptStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UScriptStruct_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptStruct, UStruct, COMPILED_IN_FLAGS(0), CASTCLASS_UScriptStruct, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UScriptStruct_NoRegister) \
	DECLARE_SERIALIZER(UScriptStruct)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_1721_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptStruct(UScriptStruct&&) = delete; \
	UScriptStruct(const UScriptStruct&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UScriptStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptStruct) \
	COREUOBJECT_API virtual ~UScriptStruct();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_1718_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_1721_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_1721_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_1721_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptStruct;

// ********** End Class UScriptStruct **************************************************************

// ********** Begin Class UFunction ****************************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2477_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFunction, COREUOBJECT_API)


struct Z_Construct_UClass_UFunction_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2477_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFunction(); \
	friend struct ::Z_Construct_UClass_UFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UFunction, UStruct, COMPILED_IN_FLAGS(0), CASTCLASS_UFunction, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UFunction_NoRegister) \
	DECLARE_SERIALIZER(UFunction) \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2477_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2477_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFunction(UFunction&&) = delete; \
	UFunction(const UFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunction) \
	COREUOBJECT_API virtual ~UFunction();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2474_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2477_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2477_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2477_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFunction;

// ********** End Class UFunction ******************************************************************

// ********** Begin Class UDelegateFunction ********************************************************
struct Z_Construct_UClass_UDelegateFunction_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UDelegateFunction_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2682_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDelegateFunction(); \
	friend struct ::Z_Construct_UClass_UDelegateFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UDelegateFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UDelegateFunction, UFunction, COMPILED_IN_FLAGS(0), CASTCLASS_UDelegateFunction, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UDelegateFunction_NoRegister) \
	DECLARE_SERIALIZER(UDelegateFunction)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2682_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDelegateFunction(UDelegateFunction&&) = delete; \
	UDelegateFunction(const UDelegateFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UDelegateFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDelegateFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDelegateFunction) \
	COREUOBJECT_API virtual ~UDelegateFunction();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2679_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2682_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2682_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2682_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDelegateFunction;

// ********** End Class UDelegateFunction **********************************************************

// ********** Begin Class USparseDelegateFunction **************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2711_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USparseDelegateFunction, COREUOBJECT_API)


struct Z_Construct_UClass_USparseDelegateFunction_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_USparseDelegateFunction_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2711_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSparseDelegateFunction(); \
	friend struct ::Z_Construct_UClass_USparseDelegateFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_USparseDelegateFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USparseDelegateFunction, UDelegateFunction, COMPILED_IN_FLAGS(0), CASTCLASS_USparseDelegateFunction, TEXT("/Script/CoreUObject"), Z_Construct_UClass_USparseDelegateFunction_NoRegister) \
	DECLARE_SERIALIZER(USparseDelegateFunction) \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2711_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2711_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USparseDelegateFunction(USparseDelegateFunction&&) = delete; \
	USparseDelegateFunction(const USparseDelegateFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, USparseDelegateFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USparseDelegateFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USparseDelegateFunction) \
	COREUOBJECT_API virtual ~USparseDelegateFunction();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2708_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2711_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2711_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2711_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USparseDelegateFunction;

// ********** End Class USparseDelegateFunction ****************************************************

// ********** Begin Class UEnum ********************************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2792_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEnum, COREUOBJECT_API)


struct Z_Construct_UClass_UEnum_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2792_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnum(); \
	friend struct ::Z_Construct_UClass_UEnum_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UEnum_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnum, UField, COMPILED_IN_FLAGS(0), CASTCLASS_UEnum, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UEnum_NoRegister) \
	DECLARE_SERIALIZER(UEnum) \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2792_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2792_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnum(UEnum&&) = delete; \
	UEnum(const UEnum&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnum)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2789_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2792_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2792_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_2792_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnum;

// ********** End Class UEnum **********************************************************************

// ********** Begin Class UClass *******************************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_3794_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UClass, COREUOBJECT_API)


struct Z_Construct_UClass_UClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_3794_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClass(); \
	friend struct ::Z_Construct_UClass_UClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UClass, UStruct, COMPILED_IN_FLAGS(0), CASTCLASS_UClass, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UClass_NoRegister) \
	DECLARE_SERIALIZER(UClass) \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_3794_ARCHIVESERIALIZER \
	DECLARE_WITHIN_UPACKAGE()


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_3794_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClass(UClass&&) = delete; \
	UClass(const UClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClass)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_3791_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_3794_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_3794_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h_3794_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClass;

// ********** End Class UClass *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
