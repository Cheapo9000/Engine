// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/Package.h"

#ifdef COREUOBJECT_Package_generated_h
#error "Package.generated.h already included, missing '#pragma once' in Package.h"
#endif
#define COREUOBJECT_Package_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPackage *****************************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h_217_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPackage, COREUOBJECT_API)


struct Z_Construct_UClass_UPackage_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UPackage_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h_217_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPackage(); \
	friend struct ::Z_Construct_UClass_UPackage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UPackage_NoRegister(); \
public: \
	DECLARE_CLASS2(UPackage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_UPackage, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UPackage_NoRegister) \
	DECLARE_SERIALIZER(UPackage) \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h_217_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h_217_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPackage(UPackage&&) = delete; \
	UPackage(const UPackage&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackage)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h_214_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h_217_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h_217_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h_217_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPackage;

// ********** End Class UPackage *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
