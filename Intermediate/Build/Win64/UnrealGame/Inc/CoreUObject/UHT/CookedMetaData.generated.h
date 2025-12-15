// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/CookedMetaData.h"

#ifdef COREUOBJECT_CookedMetaData_generated_h
#error "CookedMetaData.generated.h already included, missing '#pragma once' in CookedMetaData.h"
#endif
#define COREUOBJECT_CookedMetaData_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FObjectCookedMetaDataStore ****************************************
struct Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FObjectCookedMetaDataStore;
// ********** End ScriptStruct FObjectCookedMetaDataStore ******************************************

// ********** Begin ScriptStruct FFieldCookedMetaDataKey *******************************************
struct Z_Construct_UScriptStruct_FFieldCookedMetaDataKey_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFieldCookedMetaDataKey_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FFieldCookedMetaDataKey;
// ********** End ScriptStruct FFieldCookedMetaDataKey *********************************************

// ********** Begin ScriptStruct FFieldCookedMetaDataValue *****************************************
struct Z_Construct_UScriptStruct_FFieldCookedMetaDataValue_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFieldCookedMetaDataValue_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FFieldCookedMetaDataValue;
// ********** End ScriptStruct FFieldCookedMetaDataValue *******************************************

// ********** Begin ScriptStruct FFieldCookedMetaDataStore *****************************************
struct Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FFieldCookedMetaDataStore;
// ********** End ScriptStruct FFieldCookedMetaDataStore *******************************************

// ********** Begin ScriptStruct FStructCookedMetaDataStore ****************************************
struct Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FStructCookedMetaDataStore;
// ********** End ScriptStruct FStructCookedMetaDataStore ******************************************

// ********** Begin Class UEnumCookedMetaData ******************************************************
struct Z_Construct_UClass_UEnumCookedMetaData_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UEnumCookedMetaData_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnumCookedMetaData(); \
	friend struct ::Z_Construct_UClass_UEnumCookedMetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UEnumCookedMetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnumCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UEnumCookedMetaData_NoRegister) \
	DECLARE_SERIALIZER(UEnumCookedMetaData) \
	DECLARE_WITHIN(UEnum)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UEnumCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnumCookedMetaData(UEnumCookedMetaData&&) = delete; \
	UEnumCookedMetaData(const UEnumCookedMetaData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UEnumCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnumCookedMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnumCookedMetaData) \
	COREUOBJECT_API virtual ~UEnumCookedMetaData();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_123_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_127_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnumCookedMetaData;

// ********** End Class UEnumCookedMetaData ********************************************************

// ********** Begin Class UStructCookedMetaData ****************************************************
struct Z_Construct_UClass_UStructCookedMetaData_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UStructCookedMetaData_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStructCookedMetaData(); \
	friend struct ::Z_Construct_UClass_UStructCookedMetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UStructCookedMetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UStructCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UStructCookedMetaData_NoRegister) \
	DECLARE_SERIALIZER(UStructCookedMetaData) \
	DECLARE_WITHIN(UScriptStruct)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UStructCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStructCookedMetaData(UStructCookedMetaData&&) = delete; \
	UStructCookedMetaData(const UStructCookedMetaData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UStructCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructCookedMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructCookedMetaData) \
	COREUOBJECT_API virtual ~UStructCookedMetaData();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_143_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_147_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_147_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStructCookedMetaData;

// ********** End Class UStructCookedMetaData ******************************************************

// ********** Begin Class UClassCookedMetaData *****************************************************
struct Z_Construct_UClass_UClassCookedMetaData_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UClassCookedMetaData_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClassCookedMetaData(); \
	friend struct ::Z_Construct_UClass_UClassCookedMetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UClassCookedMetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UClassCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UClassCookedMetaData_NoRegister) \
	DECLARE_SERIALIZER(UClassCookedMetaData) \
	DECLARE_WITHIN(UClass)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_167_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UClassCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClassCookedMetaData(UClassCookedMetaData&&) = delete; \
	UClassCookedMetaData(const UClassCookedMetaData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UClassCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassCookedMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassCookedMetaData) \
	COREUOBJECT_API virtual ~UClassCookedMetaData();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_163_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_167_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_167_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClassCookedMetaData;

// ********** End Class UClassCookedMetaData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
