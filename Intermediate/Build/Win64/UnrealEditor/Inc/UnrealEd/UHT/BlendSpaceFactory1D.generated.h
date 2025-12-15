// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BlendSpaceFactory1D.h"

#ifdef UNREALED_BlendSpaceFactory1D_generated_h
#error "BlendSpaceFactory1D.generated.h already included, missing '#pragma once' in BlendSpaceFactory1D.h"
#endif
#define UNREALED_BlendSpaceFactory1D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlendSpaceFactory1D *****************************************************
struct Z_Construct_UClass_UBlendSpaceFactory1D_Statics;
UNREALED_API UClass* Z_Construct_UClass_UBlendSpaceFactory1D_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUBlendSpaceFactory1D(); \
	friend struct ::Z_Construct_UClass_UBlendSpaceFactory1D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UBlendSpaceFactory1D_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendSpaceFactory1D, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UBlendSpaceFactory1D_NoRegister) \
	DECLARE_SERIALIZER(UBlendSpaceFactory1D)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UBlendSpaceFactory1D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpaceFactory1D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBlendSpaceFactory1D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpaceFactory1D); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendSpaceFactory1D(UBlendSpaceFactory1D&&) = delete; \
	UBlendSpaceFactory1D(const UBlendSpaceFactory1D&) = delete; \
	UNREALED_API virtual ~UBlendSpaceFactory1D();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendSpaceFactory1D;

// ********** End Class UBlendSpaceFactory1D *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlendSpaceFactory1D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
