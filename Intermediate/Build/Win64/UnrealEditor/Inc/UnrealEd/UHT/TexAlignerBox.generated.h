// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TexAligner/TexAlignerBox.h"

#ifdef UNREALED_TexAlignerBox_generated_h
#error "TexAlignerBox.generated.h already included, missing '#pragma once' in TexAlignerBox.h"
#endif
#define UNREALED_TexAlignerBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTexAlignerBox ***********************************************************
struct Z_Construct_UClass_UTexAlignerBox_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTexAlignerBox_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTexAlignerBox(); \
	friend struct ::Z_Construct_UClass_UTexAlignerBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTexAlignerBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UTexAlignerBox, UTexAligner, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTexAlignerBox_NoRegister) \
	DECLARE_SERIALIZER(UTexAlignerBox)


#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTexAlignerBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexAlignerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTexAlignerBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexAlignerBox); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTexAlignerBox(UTexAlignerBox&&) = delete; \
	UTexAlignerBox(const UTexAlignerBox&) = delete; \
	NO_API virtual ~UTexAlignerBox();


#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h_20_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h_23_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTexAlignerBox;

// ********** End Class UTexAlignerBox *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
