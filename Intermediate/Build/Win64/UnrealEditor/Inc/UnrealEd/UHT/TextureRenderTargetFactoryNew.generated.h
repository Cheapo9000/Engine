// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/TextureRenderTargetFactoryNew.h"

#ifdef UNREALED_TextureRenderTargetFactoryNew_generated_h
#error "TextureRenderTargetFactoryNew.generated.h already included, missing '#pragma once' in TextureRenderTargetFactoryNew.h"
#endif
#define UNREALED_TextureRenderTargetFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureRenderTargetFactoryNew *******************************************
struct Z_Construct_UClass_UTextureRenderTargetFactoryNew_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTextureRenderTargetFactoryNew_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTextureRenderTargetFactoryNew(); \
	friend struct ::Z_Construct_UClass_UTextureRenderTargetFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTextureRenderTargetFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureRenderTargetFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTextureRenderTargetFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UTextureRenderTargetFactoryNew)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTextureRenderTargetFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureRenderTargetFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTextureRenderTargetFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureRenderTargetFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureRenderTargetFactoryNew(UTextureRenderTargetFactoryNew&&) = delete; \
	UTextureRenderTargetFactoryNew(const UTextureRenderTargetFactoryNew&) = delete; \
	UNREALED_API virtual ~UTextureRenderTargetFactoryNew();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetFactoryNew_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetFactoryNew_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureRenderTargetFactoryNew;

// ********** End Class UTextureRenderTargetFactoryNew *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
