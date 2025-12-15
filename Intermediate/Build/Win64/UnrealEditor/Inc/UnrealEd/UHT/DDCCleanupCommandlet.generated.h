// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DDCCleanupCommandlet.h"

#ifdef UNREALED_DDCCleanupCommandlet_generated_h
#error "DDCCleanupCommandlet.generated.h already included, missing '#pragma once' in DDCCleanupCommandlet.h"
#endif
#define UNREALED_DDCCleanupCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDDCCleanupCommandlet ****************************************************
struct Z_Construct_UClass_UDDCCleanupCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDDCCleanupCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDDCCleanupCommandlet(); \
	friend struct ::Z_Construct_UClass_UDDCCleanupCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDDCCleanupCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDDCCleanupCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDDCCleanupCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDDCCleanupCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDCCleanupCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDDCCleanupCommandlet(UDDCCleanupCommandlet&&) = delete; \
	UDDCCleanupCommandlet(const UDDCCleanupCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDCCleanupCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDCCleanupCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDCCleanupCommandlet) \
	NO_API virtual ~UDDCCleanupCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDDCCleanupCommandlet;

// ********** End Class UDDCCleanupCommandlet ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
