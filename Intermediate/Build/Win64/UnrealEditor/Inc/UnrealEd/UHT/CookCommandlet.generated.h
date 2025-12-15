// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/CookCommandlet.h"

#ifdef UNREALED_CookCommandlet_generated_h
#error "CookCommandlet.generated.h already included, missing '#pragma once' in CookCommandlet.h"
#endif
#define UNREALED_CookCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCookCommandlet **********************************************************
struct Z_Construct_UClass_UCookCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCookCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUCookCommandlet(); \
	friend struct ::Z_Construct_UClass_UCookCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCookCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCookCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCookCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCookCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCookCommandlet(UCookCommandlet&&) = delete; \
	UCookCommandlet(const UCookCommandlet&) = delete; \
	NO_API virtual ~UCookCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_24_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_28_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCookCommandlet;

// ********** End Class UCookCommandlet ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
