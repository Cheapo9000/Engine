// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/LinkerPlaceholderExportObject.h"

#ifdef COREUOBJECT_LinkerPlaceholderExportObject_generated_h
#error "LinkerPlaceholderExportObject.generated.h already included, missing '#pragma once' in LinkerPlaceholderExportObject.h"
#endif
#define COREUOBJECT_LinkerPlaceholderExportObject_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULinkerPlaceholderExportObject *******************************************
struct Z_Construct_UClass_ULinkerPlaceholderExportObject_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderExportObject_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinkerPlaceholderExportObject(); \
	friend struct ::Z_Construct_UClass_ULinkerPlaceholderExportObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister(); \
public: \
	DECLARE_CLASS2(ULinkerPlaceholderExportObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister) \
	DECLARE_SERIALIZER(ULinkerPlaceholderExportObject)


#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderExportObject_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULinkerPlaceholderExportObject(ULinkerPlaceholderExportObject&&) = delete; \
	ULinkerPlaceholderExportObject(const ULinkerPlaceholderExportObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, ULinkerPlaceholderExportObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkerPlaceholderExportObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkerPlaceholderExportObject) \
	COREUOBJECT_API virtual ~ULinkerPlaceholderExportObject();


#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderExportObject_h_18_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderExportObject_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderExportObject_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderExportObject_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULinkerPlaceholderExportObject;

// ********** End Class ULinkerPlaceholderExportObject *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderExportObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
