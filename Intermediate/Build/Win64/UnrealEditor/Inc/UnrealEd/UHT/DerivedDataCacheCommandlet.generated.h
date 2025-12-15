// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DerivedDataCacheCommandlet.h"

#ifdef UNREALED_DerivedDataCacheCommandlet_generated_h
#error "DerivedDataCacheCommandlet.generated.h already included, missing '#pragma once' in DerivedDataCacheCommandlet.h"
#endif
#define UNREALED_DerivedDataCacheCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDerivedDataCacheCommandlet **********************************************
struct Z_Construct_UClass_UDerivedDataCacheCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDerivedDataCacheCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DerivedDataCacheCommandlet_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUDerivedDataCacheCommandlet(); \
	friend struct ::Z_Construct_UClass_UDerivedDataCacheCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDerivedDataCacheCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDerivedDataCacheCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDerivedDataCacheCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDerivedDataCacheCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DerivedDataCacheCommandlet_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDerivedDataCacheCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDerivedDataCacheCommandlet) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDerivedDataCacheCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDerivedDataCacheCommandlet(UDerivedDataCacheCommandlet&&) = delete; \
	UDerivedDataCacheCommandlet(const UDerivedDataCacheCommandlet&) = delete;


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DerivedDataCacheCommandlet_h_25_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DerivedDataCacheCommandlet_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DerivedDataCacheCommandlet_h_28_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DerivedDataCacheCommandlet_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDerivedDataCacheCommandlet;

// ********** End Class UDerivedDataCacheCommandlet ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DerivedDataCacheCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
