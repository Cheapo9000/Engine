// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PyTest.h"

#ifdef PYTHONSCRIPTPLUGIN_PyTest_generated_h
#error "PyTest.generated.h already included, missing '#pragma once' in PyTest.h"
#endif
#define PYTHONSCRIPTPLUGIN_PyTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPyTestObject;
enum class EPyTestEnum : uint8;
struct FPyTestChildStruct;
struct FPyTestStruct;

class FProperty;

// ********** Begin Delegate FPyTestDelegate *******************************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_14_DELEGATE \
PYTHONSCRIPTPLUGIN_API int32 FPyTestDelegate_DelegateWrapper(const FScriptDelegate& PyTestDelegate, int32 InValue);


// ********** End Delegate FPyTestDelegate *********************************************************

// ********** Begin Delegate FPyTestMulticastDelegate **********************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_19_DELEGATE \
PYTHONSCRIPTPLUGIN_API void FPyTestMulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& PyTestMulticastDelegate, const FString& InStr);


// ********** End Delegate FPyTestMulticastDelegate ************************************************

// ********** Begin Delegate FPyTestSlateTickDelegate **********************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_24_DELEGATE \
PYTHONSCRIPTPLUGIN_API void FPyTestSlateTickDelegate_DelegateWrapper(const FScriptDelegate& PyTestSlateTickDelegate, float InDeltaTime);


// ********** End Delegate FPyTestSlateTickDelegate ************************************************

// ********** Begin ScriptStruct FPyTestStruct *****************************************************
struct Z_Construct_UScriptStruct_FPyTestStruct_Statics;
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPyTestStruct_Statics; \
	PYTHONSCRIPTPLUGIN_API static class UScriptStruct* StaticStruct();


struct FPyTestStruct;
// ********** End ScriptStruct FPyTestStruct *******************************************************

// ********** Begin ScriptStruct FPyTestChildStruct ************************************************
struct Z_Construct_UScriptStruct_FPyTestChildStruct_Statics;
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPyTestChildStruct_Statics; \
	PYTHONSCRIPTPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FPyTestStruct Super;


struct FPyTestChildStruct;
// ********** End ScriptStruct FPyTestChildStruct **************************************************

// ********** Begin Class UPyTestStructLibrary *****************************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearBoolMutableViaRef); \
	DECLARE_FUNCTION(execSetBoolMutableViaRef); \
	DECLARE_FUNCTION(execClearBoolMutable); \
	DECLARE_FUNCTION(execSetBoolMutable); \
	DECLARE_FUNCTION(execAddStr); \
	DECLARE_FUNCTION(execAddFloat); \
	DECLARE_FUNCTION(execAddInt); \
	DECLARE_FUNCTION(execGetConstantValue); \
	DECLARE_FUNCTION(execLegacyIsBoolSet); \
	DECLARE_FUNCTION(execIsBoolSet);


struct Z_Construct_UClass_UPyTestStructLibrary_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestStructLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestStructLibrary(); \
	friend struct ::Z_Construct_UClass_UPyTestStructLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPyTestStructLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyTestStructLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPyTestStructLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPyTestStructLibrary)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestStructLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyTestStructLibrary(UPyTestStructLibrary&&) = delete; \
	UPyTestStructLibrary(const UPyTestStructLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestStructLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestStructLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestStructLibrary) \
	NO_API virtual ~UPyTestStructLibrary();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_108_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyTestStructLibrary;

// ********** End Class UPyTestStructLibrary *******************************************************

// ********** Begin ScriptStruct FPyTestClassSparseData ********************************************
struct Z_Construct_UScriptStruct_FPyTestClassSparseData_Statics;
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPyTestClassSparseData_Statics; \
	PYTHONSCRIPTPLUGIN_API static class UScriptStruct* StaticStruct();


struct FPyTestClassSparseData;
// ********** End ScriptStruct FPyTestClassSparseData **********************************************

// ********** Begin Class UPyTestObject ************************************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_SPARSE_DATA \
UE_DEPRECATED(5.6, "Use (preferably) GetPyTestClassSparseData(EGetSparseClassDataMethod::ArchetypeIfNull), or GetMutablePyTestClassSparseData() instead if you need to mutate the sparse class data (best avoided at runtime)")\
FPyTestClassSparseData* GetPyTestClassSparseData() const; \
FPyTestClassSparseData* GetMutablePyTestClassSparseData() const; \
const FPyTestClassSparseData* GetPyTestClassSparseData(EGetSparseClassDataMethod GetMethod) const; \
static UScriptStruct* StaticGetPyTestClassSparseDataScriptStruct();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_SPARSE_DATA_PROPERTY_ACCESSORS \
int32 GetIntFromSparseData() const { return GetPyTestClassSparseData(EGetSparseClassDataMethod::ArchetypeIfNull)->IntFromSparseData; }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FuncBlueprintNativeRef_Implementation(FPyTestStruct& InOutStruct) const; \
	virtual int32 FuncBlueprintNative_Implementation(const int32 InValue) const; \
	DECLARE_FUNCTION(execGetConstantValue); \
	DECLARE_FUNCTION(execEmitScriptWarning); \
	DECLARE_FUNCTION(execEmitScriptError); \
	DECLARE_FUNCTION(execReturnFieldPath); \
	DECLARE_FUNCTION(execReturnMap); \
	DECLARE_FUNCTION(execReturnSet); \
	DECLARE_FUNCTION(execReturnArray); \
	DECLARE_FUNCTION(execMulticastDelegatePropertyCallback); \
	DECLARE_FUNCTION(execDelegatePropertyCallback); \
	DECLARE_FUNCTION(execFuncTakingFieldPath); \
	DECLARE_FUNCTION(execFuncTakingPyTestDelegate); \
	DECLARE_FUNCTION(execFuncTakingPyTestStructDefault); \
	DECLARE_FUNCTION(execLegacyFuncTakingPyTestStruct); \
	DECLARE_FUNCTION(execFuncTakingPyTestChildStruct); \
	DECLARE_FUNCTION(execFuncTakingPyTestStruct); \
	DECLARE_FUNCTION(execCallFuncBlueprintNativeRef); \
	DECLARE_FUNCTION(execCallFuncBlueprintNative); \
	DECLARE_FUNCTION(execCallFuncBlueprintImplementablePackedGetter); \
	DECLARE_FUNCTION(execCallFuncBlueprintImplementable); \
	DECLARE_FUNCTION(execFuncBlueprintNativeRef); \
	DECLARE_FUNCTION(execFuncBlueprintNative);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPyTestObject_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestObject_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestObject(); \
	friend struct ::Z_Construct_UClass_UPyTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPyTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPyTestObject_NoRegister) \
	DECLARE_SERIALIZER(UPyTestObject) \
	virtual UObject* _getUObject() const override { return const_cast<UPyTestObject*>(this); }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyTestObject(UPyTestObject&&) = delete; \
	UPyTestObject(const UPyTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPyTestObject) \
	NO_API virtual ~UPyTestObject();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_160_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyTestObject;

// ********** End Class UPyTestObject **************************************************************

// ********** Begin Class UPyTestChildObject *******************************************************
struct Z_Construct_UClass_UPyTestChildObject_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestChildObject_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_305_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestChildObject(); \
	friend struct ::Z_Construct_UClass_UPyTestChildObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPyTestChildObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyTestChildObject, UPyTestObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPyTestChildObject_NoRegister) \
	DECLARE_SERIALIZER(UPyTestChildObject)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_305_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestChildObject(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyTestChildObject(UPyTestChildObject&&) = delete; \
	UPyTestChildObject(const UPyTestChildObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestChildObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestChildObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPyTestChildObject) \
	NO_API virtual ~UPyTestChildObject();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_302_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_305_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_305_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_305_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyTestChildObject;

// ********** End Class UPyTestChildObject *********************************************************

// ********** Begin Class UDEPRECATED_LegacyPyTestObject *******************************************
struct Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_314_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_LegacyPyTestObject(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_LegacyPyTestObject, UPyTestObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_LegacyPyTestObject)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_314_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_LegacyPyTestObject(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_LegacyPyTestObject(UDEPRECATED_LegacyPyTestObject&&) = delete; \
	UDEPRECATED_LegacyPyTestObject(const UDEPRECATED_LegacyPyTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_LegacyPyTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_LegacyPyTestObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDEPRECATED_LegacyPyTestObject) \
	NO_API virtual ~UDEPRECATED_LegacyPyTestObject();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_311_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_314_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_314_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_314_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_LegacyPyTestObject;

// ********** End Class UDEPRECATED_LegacyPyTestObject *********************************************

// ********** Begin Class UPyTestObjectLibrary *****************************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_323_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOtherConstantValue); \
	DECLARE_FUNCTION(execIsBoolSet);


struct Z_Construct_UClass_UPyTestObjectLibrary_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestObjectLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_323_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestObjectLibrary(); \
	friend struct ::Z_Construct_UClass_UPyTestObjectLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPyTestObjectLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyTestObjectLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPyTestObjectLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPyTestObjectLibrary)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_323_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestObjectLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyTestObjectLibrary(UPyTestObjectLibrary&&) = delete; \
	UPyTestObjectLibrary(const UPyTestObjectLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestObjectLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestObjectLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestObjectLibrary) \
	NO_API virtual ~UPyTestObjectLibrary();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_320_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_323_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_323_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_323_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_323_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyTestObjectLibrary;

// ********** End Class UPyTestObjectLibrary *******************************************************

// ********** Begin Delegate FOnNameCollisionDelegate **********************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_341_DELEGATE \
static PYTHONSCRIPTPLUGIN_API void FOnNameCollisionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNameCollisionDelegate, FPyTestStruct const& PyStruct);


// ********** End Delegate FOnNameCollisionDelegate ************************************************

// ********** Begin Class UPyTestStructDelegate ****************************************************
struct Z_Construct_UClass_UPyTestStructDelegate_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestStructDelegate_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_338_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestStructDelegate(); \
	friend struct ::Z_Construct_UClass_UPyTestStructDelegate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPyTestStructDelegate_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyTestStructDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPyTestStructDelegate_NoRegister) \
	DECLARE_SERIALIZER(UPyTestStructDelegate)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_338_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestStructDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyTestStructDelegate(UPyTestStructDelegate&&) = delete; \
	UPyTestStructDelegate(const UPyTestStructDelegate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestStructDelegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestStructDelegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestStructDelegate) \
	NO_API virtual ~UPyTestStructDelegate();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_338_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_338_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_338_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyTestStructDelegate;

// ********** End Class UPyTestStructDelegate ******************************************************

// ********** Begin Delegate FOnNameCollisionDelegate **********************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_357_DELEGATE \
static PYTHONSCRIPTPLUGIN_API void FOnNameCollisionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNameCollisionDelegate, FVector2D const& Vec);


// ********** End Delegate FOnNameCollisionDelegate ************************************************

// ********** Begin Class UPyTestVectorDelegate ****************************************************
struct Z_Construct_UClass_UPyTestVectorDelegate_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestVectorDelegate_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestVectorDelegate(); \
	friend struct ::Z_Construct_UClass_UPyTestVectorDelegate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPyTestVectorDelegate_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyTestVectorDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPyTestVectorDelegate_NoRegister) \
	DECLARE_SERIALIZER(UPyTestVectorDelegate)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestVectorDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyTestVectorDelegate(UPyTestVectorDelegate&&) = delete; \
	UPyTestVectorDelegate(const UPyTestVectorDelegate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestVectorDelegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestVectorDelegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestVectorDelegate) \
	NO_API virtual ~UPyTestVectorDelegate();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_351_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyTestVectorDelegate;

// ********** End Class UPyTestVectorDelegate ******************************************************

// ********** Begin Class UPyTestTypeHint **********************************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_373_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckTupleReturnType); \
	DECLARE_FUNCTION(execCheckStaticFunction); \
	DECLARE_FUNCTION(execCheckDelegateTypeHints); \
	DECLARE_FUNCTION(execCheckMapTypeHints); \
	DECLARE_FUNCTION(execCheckSetTypeHints); \
	DECLARE_FUNCTION(execCheckArrayTypeHints); \
	DECLARE_FUNCTION(execCheckObjectTypeHints); \
	DECLARE_FUNCTION(execCheckStructTypeHints); \
	DECLARE_FUNCTION(execCheckFieldPathTypeHints); \
	DECLARE_FUNCTION(execCheckTextTypeHints); \
	DECLARE_FUNCTION(execCheckNameTypeHints); \
	DECLARE_FUNCTION(execCheckStringTypeHints); \
	DECLARE_FUNCTION(execCheckEnumTypeHints); \
	DECLARE_FUNCTION(execCheckFloatTypeHints); \
	DECLARE_FUNCTION(execCheckIntegerTypeHints); \
	DECLARE_FUNCTION(execCheckBoolTypeHints); \
	DECLARE_FUNCTION(execGetIntConst); \
	DECLARE_FUNCTION(execGetStringConst);


struct Z_Construct_UClass_UPyTestTypeHint_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestTypeHint_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_373_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestTypeHint(); \
	friend struct ::Z_Construct_UClass_UPyTestTypeHint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPyTestTypeHint_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyTestTypeHint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPyTestTypeHint_NoRegister) \
	DECLARE_SERIALIZER(UPyTestTypeHint)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_373_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyTestTypeHint(UPyTestTypeHint&&) = delete; \
	UPyTestTypeHint(const UPyTestTypeHint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestTypeHint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestTypeHint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPyTestTypeHint) \
	NO_API virtual ~UPyTestTypeHint();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_370_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_373_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_373_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_373_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_373_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyTestTypeHint;

// ********** End Class UPyTestTypeHint ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h

// ********** Begin Enum EPyTestEnum ***************************************************************
#define FOREACH_ENUM_EPYTESTENUM(op) \
	op(EPyTestEnum::One) \
	op(EPyTestEnum::Two) 

enum class EPyTestEnum : uint8;
template<> struct TIsUEnumClass<EPyTestEnum> { enum { Value = true }; };
template<> PYTHONSCRIPTPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<EPyTestEnum>();
// ********** End Enum EPyTestEnum *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
