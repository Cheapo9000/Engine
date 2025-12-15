// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VerseVM/VVMVerseClass.h"

#ifdef COREUOBJECT_VVMVerseClass_generated_h
#error "VVMVerseClass.generated.h already included, missing '#pragma once' in VVMVerseClass.h"
#endif
#define COREUOBJECT_VVMVerseClass_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVersePersistentVar ***********************************************
struct Z_Construct_UScriptStruct_FVersePersistentVar_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVersePersistentVar_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FVersePersistentVar;
// ********** End ScriptStruct FVersePersistentVar *************************************************

// ********** Begin ScriptStruct FVerseSessionVar **************************************************
struct Z_Construct_UScriptStruct_FVerseSessionVar_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVerseSessionVar_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FVerseSessionVar;
// ********** End ScriptStruct FVerseSessionVar ****************************************************

// ********** Begin ScriptStruct FVerseClassVarAccessor ********************************************
struct Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FVerseClassVarAccessor;
// ********** End ScriptStruct FVerseClassVarAccessor **********************************************

// ********** Begin ScriptStruct FVerseClassVarAccessors *******************************************
struct Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FVerseClassVarAccessors;
// ********** End ScriptStruct FVerseClassVarAccessors *********************************************

// ********** Begin Class UVerseClass **************************************************************
struct Z_Construct_UClass_UVerseClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UVerseClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVerseClass(); \
	friend struct ::Z_Construct_UClass_UVerseClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UVerseClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UVerseClass, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UVerseClass_NoRegister) \
	DECLARE_SERIALIZER(UVerseClass)


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_138_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVerseClass(UVerseClass&&) = delete; \
	UVerseClass(const UVerseClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UVerseClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerseClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerseClass) \
	COREUOBJECT_API virtual ~UVerseClass();


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_135_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_138_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVerseClass;

// ********** End Class UVerseClass ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
