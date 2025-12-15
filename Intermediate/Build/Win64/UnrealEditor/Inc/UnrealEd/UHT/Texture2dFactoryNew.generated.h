// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/Texture2dFactoryNew.h"

#ifdef UNREALED_Texture2dFactoryNew_generated_h
#error "Texture2dFactoryNew.generated.h already included, missing '#pragma once' in Texture2dFactoryNew.h"
#endif
#define UNREALED_Texture2dFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTexture2DFactoryNew *****************************************************
struct Z_Construct_UClass_UTexture2DFactoryNew_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTexture2DFactoryNew_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTexture2DFactoryNew(); \
	friend struct ::Z_Construct_UClass_UTexture2DFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTexture2DFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UTexture2DFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTexture2DFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UTexture2DFactoryNew)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTexture2DFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture2DFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTexture2DFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture2DFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTexture2DFactoryNew(UTexture2DFactoryNew&&) = delete; \
	UTexture2DFactoryNew(const UTexture2DFactoryNew&) = delete; \
	UNREALED_API virtual ~UTexture2DFactoryNew();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTexture2DFactoryNew;

// ********** End Class UTexture2DFactoryNew *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
