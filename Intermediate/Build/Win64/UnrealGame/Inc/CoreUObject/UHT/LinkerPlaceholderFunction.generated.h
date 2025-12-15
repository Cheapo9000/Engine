// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/LinkerPlaceholderFunction.h"

#ifdef COREUOBJECT_LinkerPlaceholderFunction_generated_h
#error "LinkerPlaceholderFunction.generated.h already included, missing '#pragma once' in LinkerPlaceholderFunction.h"
#endif
#define COREUOBJECT_LinkerPlaceholderFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULinkerPlaceholderFunction ***********************************************
struct Z_Construct_UClass_ULinkerPlaceholderFunction_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderFunction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinkerPlaceholderFunction(); \
	friend struct ::Z_Construct_UClass_ULinkerPlaceholderFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(ULinkerPlaceholderFunction, UFunction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister) \
	DECLARE_SERIALIZER(ULinkerPlaceholderFunction)


#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderFunction_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULinkerPlaceholderFunction(ULinkerPlaceholderFunction&&) = delete; \
	ULinkerPlaceholderFunction(const ULinkerPlaceholderFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, ULinkerPlaceholderFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkerPlaceholderFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkerPlaceholderFunction) \
	COREUOBJECT_API virtual ~ULinkerPlaceholderFunction();


#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderFunction_h_13_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderFunction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderFunction_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderFunction_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULinkerPlaceholderFunction;

// ********** End Class ULinkerPlaceholderFunction *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
