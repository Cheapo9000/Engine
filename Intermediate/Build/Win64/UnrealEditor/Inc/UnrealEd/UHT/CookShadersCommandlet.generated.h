// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/CookShadersCommandlet.h"

#ifdef UNREALED_CookShadersCommandlet_generated_h
#error "CookShadersCommandlet.generated.h already included, missing '#pragma once' in CookShadersCommandlet.h"
#endif
#define UNREALED_CookShadersCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCookShadersCommandlet ***************************************************
struct Z_Construct_UClass_UCookShadersCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCookShadersCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCookShadersCommandlet(); \
	friend struct ::Z_Construct_UClass_UCookShadersCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCookShadersCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCookShadersCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCookShadersCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCookShadersCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookShadersCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookShadersCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookShadersCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookShadersCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCookShadersCommandlet(UCookShadersCommandlet&&) = delete; \
	UCookShadersCommandlet(const UCookShadersCommandlet&) = delete; \
	NO_API virtual ~UCookShadersCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCookShadersCommandlet;

// ********** End Class UCookShadersCommandlet *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
