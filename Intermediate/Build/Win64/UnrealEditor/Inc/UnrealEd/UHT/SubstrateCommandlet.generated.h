// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/SubstrateCommandlet.h"

#ifdef UNREALED_SubstrateCommandlet_generated_h
#error "SubstrateCommandlet.generated.h already included, missing '#pragma once' in SubstrateCommandlet.h"
#endif
#define UNREALED_SubstrateCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubstrateCommandlet *****************************************************
struct Z_Construct_UClass_USubstrateCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_USubstrateCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SubstrateCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSubstrateCommandlet(); \
	friend struct ::Z_Construct_UClass_USubstrateCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USubstrateCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(USubstrateCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USubstrateCommandlet_NoRegister) \
	DECLARE_SERIALIZER(USubstrateCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SubstrateCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstrateCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstrateCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstrateCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstrateCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubstrateCommandlet(USubstrateCommandlet&&) = delete; \
	USubstrateCommandlet(const USubstrateCommandlet&) = delete; \
	NO_API virtual ~USubstrateCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SubstrateCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SubstrateCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SubstrateCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SubstrateCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubstrateCommandlet;

// ********** End Class USubstrateCommandlet *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SubstrateCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
