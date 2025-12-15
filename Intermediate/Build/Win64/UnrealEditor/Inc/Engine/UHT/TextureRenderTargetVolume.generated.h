// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureRenderTargetVolume.h"

#ifdef ENGINE_TextureRenderTargetVolume_generated_h
#error "TextureRenderTargetVolume.generated.h already included, missing '#pragma once' in TextureRenderTargetVolume.h"
#endif
#define ENGINE_TextureRenderTargetVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureRenderTargetVolume ***********************************************
struct Z_Construct_UClass_UTextureRenderTargetVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTextureRenderTargetVolume(); \
	friend struct ::Z_Construct_UClass_UTextureRenderTargetVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureRenderTargetVolume, UTextureRenderTarget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister) \
	DECLARE_SERIALIZER(UTextureRenderTargetVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureRenderTargetVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureRenderTargetVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureRenderTargetVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureRenderTargetVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureRenderTargetVolume(UTextureRenderTargetVolume&&) = delete; \
	UTextureRenderTargetVolume(const UTextureRenderTargetVolume&) = delete; \
	ENGINE_API virtual ~UTextureRenderTargetVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureRenderTargetVolume;

// ********** End Class UTextureRenderTargetVolume *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
