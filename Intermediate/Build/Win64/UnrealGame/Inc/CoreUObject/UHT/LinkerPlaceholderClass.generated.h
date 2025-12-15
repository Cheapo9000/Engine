// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/LinkerPlaceholderClass.h"

#ifdef COREUOBJECT_LinkerPlaceholderClass_generated_h
#error "LinkerPlaceholderClass.generated.h already included, missing '#pragma once' in LinkerPlaceholderClass.h"
#endif
#define COREUOBJECT_LinkerPlaceholderClass_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULinkerPlaceholderClass **************************************************
struct Z_Construct_UClass_ULinkerPlaceholderClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderClass_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinkerPlaceholderClass(); \
	friend struct ::Z_Construct_UClass_ULinkerPlaceholderClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister(); \
public: \
	DECLARE_CLASS2(ULinkerPlaceholderClass, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister) \
	DECLARE_SERIALIZER(ULinkerPlaceholderClass)


#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderClass_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULinkerPlaceholderClass(ULinkerPlaceholderClass&&) = delete; \
	ULinkerPlaceholderClass(const ULinkerPlaceholderClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, ULinkerPlaceholderClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkerPlaceholderClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkerPlaceholderClass) \
	COREUOBJECT_API virtual ~ULinkerPlaceholderClass();


#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderClass_h_19_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderClass_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderClass_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderClass_h_23_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULinkerPlaceholderClass;

// ********** End Class ULinkerPlaceholderClass ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
