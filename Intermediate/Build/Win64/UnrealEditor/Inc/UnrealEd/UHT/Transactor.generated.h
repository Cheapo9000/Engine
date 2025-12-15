// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/Transactor.h"

#ifdef UNREALED_Transactor_generated_h
#error "Transactor.generated.h already included, missing '#pragma once' in Transactor.h"
#endif
#define UNREALED_Transactor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTransactor **************************************************************
struct Z_Construct_UClass_UTransactor_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTransactor_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_514_INCLASS \
private: \
	static void StaticRegisterNativesUTransactor(); \
	friend struct ::Z_Construct_UClass_UTransactor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTransactor_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransactor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTransactor_NoRegister) \
	DECLARE_SERIALIZER(UTransactor)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_514_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTransactor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransactor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTransactor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransactor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransactor(UTransactor&&) = delete; \
	UTransactor(const UTransactor&) = delete; \
	UNREALED_API virtual ~UTransactor();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_511_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_514_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_514_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_514_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransactor;

// ********** End Class UTransactor ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
