// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TexAligner/TexAlignerDefault.h"

#ifdef UNREALED_TexAlignerDefault_generated_h
#error "TexAlignerDefault.generated.h already included, missing '#pragma once' in TexAlignerDefault.h"
#endif
#define UNREALED_TexAlignerDefault_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTexAlignerDefault *******************************************************
struct Z_Construct_UClass_UTexAlignerDefault_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTexAlignerDefault_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTexAlignerDefault(); \
	friend struct ::Z_Construct_UClass_UTexAlignerDefault_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTexAlignerDefault_NoRegister(); \
public: \
	DECLARE_CLASS2(UTexAlignerDefault, UTexAligner, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTexAlignerDefault_NoRegister) \
	DECLARE_SERIALIZER(UTexAlignerDefault)


#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTexAlignerDefault(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexAlignerDefault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTexAlignerDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexAlignerDefault); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTexAlignerDefault(UTexAlignerDefault&&) = delete; \
	UTexAlignerDefault(const UTexAlignerDefault&) = delete; \
	NO_API virtual ~UTexAlignerDefault();


#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h_20_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h_23_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTexAlignerDefault;

// ********** End Class UTexAlignerDefault *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
