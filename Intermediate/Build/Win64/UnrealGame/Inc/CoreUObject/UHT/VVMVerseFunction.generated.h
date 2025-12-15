// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VerseVM/VVMVerseFunction.h"

#ifdef COREUOBJECT_VVMVerseFunction_generated_h
#error "VVMVerseFunction.generated.h already included, missing '#pragma once' in VVMVerseFunction.h"
#endif
#define COREUOBJECT_VVMVerseFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVerseFunction ***********************************************************
struct Z_Construct_UClass_UVerseFunction_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UVerseFunction_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseFunction_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVerseFunction(); \
	friend struct ::Z_Construct_UClass_UVerseFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UVerseFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UVerseFunction, UFunction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UVerseFunction_NoRegister) \
	DECLARE_SERIALIZER(UVerseFunction)


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseFunction_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVerseFunction(UVerseFunction&&) = delete; \
	UVerseFunction(const UVerseFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UVerseFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerseFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerseFunction) \
	COREUOBJECT_API virtual ~UVerseFunction();


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseFunction_h_23_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseFunction_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseFunction_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseFunction_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVerseFunction;

// ********** End Class UVerseFunction *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseFunction_h

// ********** Begin Enum EVerseFunctionFlags *******************************************************
#define FOREACH_ENUM_EVERSEFUNCTIONFLAGS(op) \
	op(EVerseFunctionFlags::None) \
	op(EVerseFunctionFlags::UHTNative) \
	op(EVerseFunctionFlags::UHTTaskUpdate) 

enum class EVerseFunctionFlags : uint32;
template<> struct TIsUEnumClass<EVerseFunctionFlags> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EVerseFunctionFlags>();
// ********** End Enum EVerseFunctionFlags *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
