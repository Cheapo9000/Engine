// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/CompressAnimationsCommandlet.h"

#ifdef UNREALED_CompressAnimationsCommandlet_generated_h
#error "CompressAnimationsCommandlet.generated.h already included, missing '#pragma once' in CompressAnimationsCommandlet.h"
#endif
#define UNREALED_CompressAnimationsCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompressAnimationsCommandlet ********************************************
struct Z_Construct_UClass_UCompressAnimationsCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCompressAnimationsCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCompressAnimationsCommandlet(); \
	friend struct ::Z_Construct_UClass_UCompressAnimationsCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCompressAnimationsCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompressAnimationsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCompressAnimationsCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCompressAnimationsCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompressAnimationsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompressAnimationsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompressAnimationsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompressAnimationsCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompressAnimationsCommandlet(UCompressAnimationsCommandlet&&) = delete; \
	UCompressAnimationsCommandlet(const UCompressAnimationsCommandlet&) = delete; \
	NO_API virtual ~UCompressAnimationsCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompressAnimationsCommandlet;

// ********** End Class UCompressAnimationsCommandlet **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
