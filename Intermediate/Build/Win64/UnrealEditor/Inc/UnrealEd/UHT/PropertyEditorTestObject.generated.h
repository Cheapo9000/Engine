// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/PropertyEditorTestObject.h"

#ifdef UNREALED_PropertyEditorTestObject_generated_h
#error "PropertyEditorTestObject.generated.h already included, missing '#pragma once' in PropertyEditorTestObject.h"
#endif
#define UNREALED_PropertyEditorTestObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropertyEditTestTextStruct ***************************************
struct Z_Construct_UScriptStruct_FPropertyEditTestTextStruct_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyEditTestTextStruct_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FPropertyEditTestTextStruct;
// ********** End ScriptStruct FPropertyEditTestTextStruct *****************************************

// ********** Begin ScriptStruct FPropertyEditorTestSubStruct **************************************
struct Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FPropertyEditorTestSubStruct;
// ********** End ScriptStruct FPropertyEditorTestSubStruct ****************************************

// ********** Begin ScriptStruct FPropertyEditorTestBasicStruct ************************************
struct Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_146_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FPropertyEditorTestBasicStruct;
// ********** End ScriptStruct FPropertyEditorTestBasicStruct **************************************

// ********** Begin ScriptStruct FPropertyEditorTestEditCondition **********************************
struct Z_Construct_UScriptStruct_FPropertyEditorTestEditCondition_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_172_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyEditorTestEditCondition_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FPropertyEditorTestEditCondition;
// ********** End ScriptStruct FPropertyEditorTestEditCondition ************************************

// ********** Begin Class UPropertyEditorTestInstancedObject ***************************************
struct Z_Construct_UClass_UPropertyEditorTestInstancedObject_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPropertyEditorTestInstancedObject_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyEditorTestInstancedObject(); \
	friend struct ::Z_Construct_UClass_UPropertyEditorTestInstancedObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPropertyEditorTestInstancedObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyEditorTestInstancedObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPropertyEditorTestInstancedObject_NoRegister) \
	DECLARE_SERIALIZER(UPropertyEditorTestInstancedObject)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyEditorTestInstancedObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyEditorTestInstancedObject(UPropertyEditorTestInstancedObject&&) = delete; \
	UPropertyEditorTestInstancedObject(const UPropertyEditorTestInstancedObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyEditorTestInstancedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyEditorTestInstancedObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyEditorTestInstancedObject) \
	NO_API virtual ~UPropertyEditorTestInstancedObject();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_187_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyEditorTestInstancedObject;

// ********** End Class UPropertyEditorTestInstancedObject *****************************************

// ********** Begin Class UFirstDerivedPropertyEditorTestObject ************************************
struct Z_Construct_UClass_UFirstDerivedPropertyEditorTestObject_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFirstDerivedPropertyEditorTestObject_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirstDerivedPropertyEditorTestObject(); \
	friend struct ::Z_Construct_UClass_UFirstDerivedPropertyEditorTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFirstDerivedPropertyEditorTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UFirstDerivedPropertyEditorTestObject, UPropertyEditorTestInstancedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFirstDerivedPropertyEditorTestObject_NoRegister) \
	DECLARE_SERIALIZER(UFirstDerivedPropertyEditorTestObject)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_199_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirstDerivedPropertyEditorTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFirstDerivedPropertyEditorTestObject(UFirstDerivedPropertyEditorTestObject&&) = delete; \
	UFirstDerivedPropertyEditorTestObject(const UFirstDerivedPropertyEditorTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirstDerivedPropertyEditorTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirstDerivedPropertyEditorTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirstDerivedPropertyEditorTestObject) \
	NO_API virtual ~UFirstDerivedPropertyEditorTestObject();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_196_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_199_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFirstDerivedPropertyEditorTestObject;

// ********** End Class UFirstDerivedPropertyEditorTestObject **************************************

// ********** Begin Class USecondDerivedPropertyEditorTestObject ***********************************
struct Z_Construct_UClass_USecondDerivedPropertyEditorTestObject_Statics;
UNREALED_API UClass* Z_Construct_UClass_USecondDerivedPropertyEditorTestObject_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_208_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSecondDerivedPropertyEditorTestObject(); \
	friend struct ::Z_Construct_UClass_USecondDerivedPropertyEditorTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USecondDerivedPropertyEditorTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USecondDerivedPropertyEditorTestObject, UPropertyEditorTestInstancedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USecondDerivedPropertyEditorTestObject_NoRegister) \
	DECLARE_SERIALIZER(USecondDerivedPropertyEditorTestObject)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_208_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USecondDerivedPropertyEditorTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USecondDerivedPropertyEditorTestObject(USecondDerivedPropertyEditorTestObject&&) = delete; \
	USecondDerivedPropertyEditorTestObject(const USecondDerivedPropertyEditorTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USecondDerivedPropertyEditorTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USecondDerivedPropertyEditorTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USecondDerivedPropertyEditorTestObject) \
	NO_API virtual ~USecondDerivedPropertyEditorTestObject();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_205_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_208_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_208_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_208_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USecondDerivedPropertyEditorTestObject;

// ********** End Class USecondDerivedPropertyEditorTestObject *************************************

// ********** Begin ScriptStruct FPropertyEditorTestInstancedStruct ********************************
struct Z_Construct_UScriptStruct_FPropertyEditorTestInstancedStruct_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_217_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyEditorTestInstancedStruct_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FPropertyEditorTestInstancedStruct;
// ********** End ScriptStruct FPropertyEditorTestInstancedStruct **********************************

// ********** Begin Class UPropertyEditorTestObject ************************************************
struct Z_Construct_UClass_UPropertyEditorTestObject_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPropertyEditorTestObject_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyEditorTestObject(); \
	friend struct ::Z_Construct_UClass_UPropertyEditorTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPropertyEditorTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyEditorTestObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPropertyEditorTestObject_NoRegister) \
	DECLARE_SERIALIZER(UPropertyEditorTestObject)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_226_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyEditorTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyEditorTestObject(UPropertyEditorTestObject&&) = delete; \
	UPropertyEditorTestObject(const UPropertyEditorTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyEditorTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyEditorTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyEditorTestObject) \
	NO_API virtual ~UPropertyEditorTestObject();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_223_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_226_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyEditorTestObject;

// ********** End Class UPropertyEditorTestObject **************************************************

// ********** Begin Class UHideCategoriesBase ******************************************************
struct Z_Construct_UClass_UHideCategoriesBase_Statics;
UNREALED_API UClass* Z_Construct_UClass_UHideCategoriesBase_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_809_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHideCategoriesBase(); \
	friend struct ::Z_Construct_UClass_UHideCategoriesBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UHideCategoriesBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UHideCategoriesBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UHideCategoriesBase_NoRegister) \
	DECLARE_SERIALIZER(UHideCategoriesBase)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_809_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHideCategoriesBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHideCategoriesBase(UHideCategoriesBase&&) = delete; \
	UHideCategoriesBase(const UHideCategoriesBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHideCategoriesBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHideCategoriesBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHideCategoriesBase) \
	NO_API virtual ~UHideCategoriesBase();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_806_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_809_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_809_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_809_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHideCategoriesBase;

// ********** End Class UHideCategoriesBase ********************************************************

// ********** Begin Class UShowCategoriesTest ******************************************************
struct Z_Construct_UClass_UShowCategoriesTest_Statics;
UNREALED_API UClass* Z_Construct_UClass_UShowCategoriesTest_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_819_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShowCategoriesTest(); \
	friend struct ::Z_Construct_UClass_UShowCategoriesTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UShowCategoriesTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UShowCategoriesTest, UHideCategoriesBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UShowCategoriesTest_NoRegister) \
	DECLARE_SERIALIZER(UShowCategoriesTest)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_819_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShowCategoriesTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShowCategoriesTest(UShowCategoriesTest&&) = delete; \
	UShowCategoriesTest(const UShowCategoriesTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShowCategoriesTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowCategoriesTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShowCategoriesTest) \
	NO_API virtual ~UShowCategoriesTest();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_816_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_819_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_819_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_819_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShowCategoriesTest;

// ********** End Class UShowCategoriesTest ********************************************************

// ********** Begin Class UBlueprintPropertyTestObject *********************************************
struct Z_Construct_UClass_UBlueprintPropertyTestObject_Statics;
UNREALED_API UClass* Z_Construct_UClass_UBlueprintPropertyTestObject_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_829_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintPropertyTestObject(); \
	friend struct ::Z_Construct_UClass_UBlueprintPropertyTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UBlueprintPropertyTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintPropertyTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UBlueprintPropertyTestObject_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintPropertyTestObject)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_829_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintPropertyTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintPropertyTestObject(UBlueprintPropertyTestObject&&) = delete; \
	UBlueprintPropertyTestObject(const UBlueprintPropertyTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintPropertyTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPropertyTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPropertyTestObject) \
	NO_API virtual ~UBlueprintPropertyTestObject();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_826_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_829_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_829_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_829_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintPropertyTestObject;

// ********** End Class UBlueprintPropertyTestObject ***********************************************

// ********** Begin Class UBlueprintPropertyContainerTestObject ************************************
struct Z_Construct_UClass_UBlueprintPropertyContainerTestObject_Statics;
UNREALED_API UClass* Z_Construct_UClass_UBlueprintPropertyContainerTestObject_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_847_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintPropertyContainerTestObject(); \
	friend struct ::Z_Construct_UClass_UBlueprintPropertyContainerTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UBlueprintPropertyContainerTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintPropertyContainerTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UBlueprintPropertyContainerTestObject_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintPropertyContainerTestObject)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_847_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintPropertyContainerTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintPropertyContainerTestObject(UBlueprintPropertyContainerTestObject&&) = delete; \
	UBlueprintPropertyContainerTestObject(const UBlueprintPropertyContainerTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintPropertyContainerTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPropertyContainerTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPropertyContainerTestObject) \
	NO_API virtual ~UBlueprintPropertyContainerTestObject();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_844_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_847_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_847_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_847_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintPropertyContainerTestObject;

// ********** End Class UBlueprintPropertyContainerTestObject **************************************

// ********** Begin Class UTestSparseClassDataBase *************************************************
struct Z_Construct_UClass_UTestSparseClassDataBase_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTestSparseClassDataBase_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_856_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestSparseClassDataBase(); \
	friend struct ::Z_Construct_UClass_UTestSparseClassDataBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTestSparseClassDataBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestSparseClassDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTestSparseClassDataBase_NoRegister) \
	DECLARE_SERIALIZER(UTestSparseClassDataBase)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_856_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestSparseClassDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestSparseClassDataBase(UTestSparseClassDataBase&&) = delete; \
	UTestSparseClassDataBase(const UTestSparseClassDataBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestSparseClassDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestSparseClassDataBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestSparseClassDataBase) \
	NO_API virtual ~UTestSparseClassDataBase();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_853_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_856_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_856_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_856_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestSparseClassDataBase;

// ********** End Class UTestSparseClassDataBase ***************************************************

// ********** Begin Class UTestSparseClassData *****************************************************
struct Z_Construct_UClass_UTestSparseClassData_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTestSparseClassData_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_862_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestSparseClassData(); \
	friend struct ::Z_Construct_UClass_UTestSparseClassData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTestSparseClassData_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestSparseClassData, UTestSparseClassDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTestSparseClassData_NoRegister) \
	DECLARE_SERIALIZER(UTestSparseClassData)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_862_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestSparseClassData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestSparseClassData(UTestSparseClassData&&) = delete; \
	UTestSparseClassData(const UTestSparseClassData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestSparseClassData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestSparseClassData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestSparseClassData) \
	NO_API virtual ~UTestSparseClassData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_859_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_862_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_862_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_862_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestSparseClassData;

// ********** End Class UTestSparseClassData *******************************************************

// ********** Begin ScriptStruct FTestSparseClassDataStorage ***************************************
struct Z_Construct_UScriptStruct_FTestSparseClassDataStorage_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_868_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestSparseClassDataStorage_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FTestSparseClassDataStorage;
// ********** End ScriptStruct FTestSparseClassDataStorage *****************************************

// ********** Begin Class APropertyEditorTestActor *************************************************
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_877_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOptionsFunc);


struct Z_Construct_UClass_APropertyEditorTestActor_Statics;
UNREALED_API UClass* Z_Construct_UClass_APropertyEditorTestActor_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_877_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPropertyEditorTestActor(); \
	friend struct ::Z_Construct_UClass_APropertyEditorTestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_APropertyEditorTestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APropertyEditorTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_APropertyEditorTestActor_NoRegister) \
	DECLARE_SERIALIZER(APropertyEditorTestActor)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_877_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APropertyEditorTestActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APropertyEditorTestActor(APropertyEditorTestActor&&) = delete; \
	APropertyEditorTestActor(const APropertyEditorTestActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APropertyEditorTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APropertyEditorTestActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APropertyEditorTestActor) \
	NO_API virtual ~APropertyEditorTestActor();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_874_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_877_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_877_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_877_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_877_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APropertyEditorTestActor;

// ********** End Class APropertyEditorTestActor ***************************************************

// ********** Begin Class UPropertyEditorRowGeneratorTest ******************************************
struct Z_Construct_UClass_UPropertyEditorRowGeneratorTest_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPropertyEditorRowGeneratorTest_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_910_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyEditorRowGeneratorTest(); \
	friend struct ::Z_Construct_UClass_UPropertyEditorRowGeneratorTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPropertyEditorRowGeneratorTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyEditorRowGeneratorTest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPropertyEditorRowGeneratorTest_NoRegister) \
	DECLARE_SERIALIZER(UPropertyEditorRowGeneratorTest)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_910_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyEditorRowGeneratorTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyEditorRowGeneratorTest(UPropertyEditorRowGeneratorTest&&) = delete; \
	UPropertyEditorRowGeneratorTest(const UPropertyEditorRowGeneratorTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyEditorRowGeneratorTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyEditorRowGeneratorTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyEditorRowGeneratorTest) \
	NO_API virtual ~UPropertyEditorRowGeneratorTest();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_907_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_910_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_910_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_910_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyEditorRowGeneratorTest;

// ********** End Class UPropertyEditorRowGeneratorTest ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h

// ********** Begin Enum EPropertyEditorTestEnum ***************************************************
#define FOREACH_ENUM_EPROPERTYEDITORTESTENUM(op) \
	op(PropertyEditorTest_Enum1) \
	op(PropertyEditorTest_Enum2) \
	op(PropertyEditorTest_Enum3) \
	op(PropertyEditorTest_Enum4) \
	op(PropertyEditorTest_Enum5) \
	op(PropertyEditorTest_Enum6) 

enum EPropertyEditorTestEnum : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyEditorTestEnum>();
// ********** End Enum EPropertyEditorTestEnum *****************************************************

// ********** Begin Enum EPropertyEditorTestBitflags ***********************************************
#define FOREACH_ENUM_EPROPERTYEDITORTESTBITFLAGS(op) \
	op(EPropertyEditorTestBitflags::First) \
	op(EPropertyEditorTestBitflags::Second) \
	op(EPropertyEditorTestBitflags::Third) \
	op(EPropertyEditorTestBitflags::Hidden) 

enum class EPropertyEditorTestBitflags : uint8;
template<> struct TIsUEnumClass<EPropertyEditorTestBitflags> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyEditorTestBitflags>();
// ********** End Enum EPropertyEditorTestBitflags *************************************************

// ********** Begin Enum ArrayLabelEnum ************************************************************
#define FOREACH_ENUM_ARRAYLABELENUM(op) \
	op(ArrayIndex0) \
	op(ArrayIndex1) \
	op(ArrayIndex2) \
	op(ArrayIndex3) \
	op(ArrayIndex4) \
	op(ArrayIndex5) \
	op(ArrayIndex_MAX) 

enum ArrayLabelEnum : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ArrayLabelEnum>();
// ********** End Enum ArrayLabelEnum **************************************************************

// ********** Begin Enum EPropertyEditorTestEditColor **********************************************
#define FOREACH_ENUM_EPROPERTYEDITORTESTEDITCOLOR(op) \
	op(EPropertyEditorTestEditColor::Red) \
	op(EPropertyEditorTestEditColor::Orange) \
	op(EPropertyEditorTestEditColor::Yellow) \
	op(EPropertyEditorTestEditColor::Green) \
	op(EPropertyEditorTestEditColor::Blue) \
	op(EPropertyEditorTestEditColor::Indigo) \
	op(EPropertyEditorTestEditColor::Violet) \
	op(EPropertyEditorTestEditColor::Pink) \
	op(EPropertyEditorTestEditColor::Magenta) \
	op(EPropertyEditorTestEditColor::Cyan) 

enum class EPropertyEditorTestEditColor : uint8;
template<> struct TIsUEnumClass<EPropertyEditorTestEditColor> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyEditorTestEditColor>();
// ********** End Enum EPropertyEditorTestEditColor ************************************************

// ********** Begin Enum EPropertyEditorTestUnderscores ********************************************
#define FOREACH_ENUM_EPROPERTYEDITORTESTUNDERSCORES(op) \
	op(EPropertyEditorTestUnderscores::_One) \
	op(EPropertyEditorTestUnderscores::_Two) \
	op(EPropertyEditorTestUnderscores::_Three) \
	op(EPropertyEditorTestUnderscores::NotUnderscore) 

enum class EPropertyEditorTestUnderscores : uint8;
template<> struct TIsUEnumClass<EPropertyEditorTestUnderscores> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyEditorTestUnderscores>();
// ********** End Enum EPropertyEditorTestUnderscores **********************************************

// ********** Begin Enum ETestEnumFlags ************************************************************
#define FOREACH_ENUM_ETESTENUMFLAGS(op) \
	op(ETestEnumFlags::None) \
	op(ETestEnumFlags::One) \
	op(ETestEnumFlags::Two) \
	op(ETestEnumFlags::Four) 

enum class ETestEnumFlags : uint8;
template<> struct TIsUEnumClass<ETestEnumFlags> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestEnumFlags>();
// ********** End Enum ETestEnumFlags **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
