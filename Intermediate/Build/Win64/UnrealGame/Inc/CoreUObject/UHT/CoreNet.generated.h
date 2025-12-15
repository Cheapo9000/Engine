// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/CoreNet.h"

#ifdef COREUOBJECT_CoreNet_generated_h
#error "CoreNet.generated.h already included, missing '#pragma once' in CoreNet.h"
#endif
#define COREUOBJECT_CoreNet_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPackageMap **************************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h_192_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPackageMap, COREUOBJECT_API)


struct Z_Construct_UClass_UPackageMap_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h_192_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPackageMap(); \
	friend struct ::Z_Construct_UClass_UPackageMap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UPackageMap_NoRegister(); \
public: \
	DECLARE_CLASS2(UPackageMap, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UPackageMap_NoRegister) \
	DECLARE_SERIALIZER(UPackageMap) \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h_192_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h_192_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPackageMap(UPackageMap&&) = delete; \
	UPackageMap(const UPackageMap&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UPackageMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageMap); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageMap)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h_189_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h_192_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h_192_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h_192_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPackageMap;

// ********** End Class UPackageMap ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
