// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureRenderTarget.h"

#ifdef ENGINE_TextureRenderTarget_generated_h
#error "TextureRenderTarget.generated.h already included, missing '#pragma once' in TextureRenderTarget.h"
#endif
#define ENGINE_TextureRenderTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureRenderTarget *****************************************************
struct Z_Construct_UClass_UTextureRenderTarget_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTextureRenderTarget(); \
	friend struct ::Z_Construct_UClass_UTextureRenderTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTextureRenderTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureRenderTarget, UTexture, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTextureRenderTarget_NoRegister) \
	DECLARE_SERIALIZER(UTextureRenderTarget)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureRenderTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureRenderTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureRenderTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureRenderTarget); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureRenderTarget(UTextureRenderTarget&&) = delete; \
	UTextureRenderTarget(const UTextureRenderTarget&) = delete; \
	ENGINE_API virtual ~UTextureRenderTarget();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureRenderTarget;

// ********** End Class UTextureRenderTarget *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
