// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PackageMapClient.h"

#ifdef ENGINE_PackageMapClient_generated_h
#error "PackageMapClient.generated.h already included, missing '#pragma once' in PackageMapClient.h"
#endif
#define ENGINE_PackageMapClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPackageMapClient ********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_467_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPackageMapClient, ENGINE_API)


struct Z_Construct_UClass_UPackageMapClient_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPackageMapClient_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_467_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPackageMapClient(); \
	friend struct ::Z_Construct_UClass_UPackageMapClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPackageMapClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UPackageMapClient, UPackageMap, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPackageMapClient_NoRegister) \
	DECLARE_SERIALIZER(UPackageMapClient) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_467_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_467_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPackageMapClient(UPackageMapClient&&) = delete; \
	UPackageMapClient(const UPackageMapClient&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPackageMapClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageMapClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageMapClient)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_463_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_467_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_467_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_467_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPackageMapClient;

// ********** End Class UPackageMapClient **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
