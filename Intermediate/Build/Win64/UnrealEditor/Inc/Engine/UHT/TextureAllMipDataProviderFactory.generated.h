// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureAllMipDataProviderFactory.h"

#ifdef ENGINE_TextureAllMipDataProviderFactory_generated_h
#error "TextureAllMipDataProviderFactory.generated.h already included, missing '#pragma once' in TextureAllMipDataProviderFactory.h"
#endif
#define ENGINE_TextureAllMipDataProviderFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureAllMipDataProviderFactory ****************************************
struct Z_Construct_UClass_UTextureAllMipDataProviderFactory_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTextureAllMipDataProviderFactory_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureAllMipDataProviderFactory_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUTextureAllMipDataProviderFactory(); \
	friend struct ::Z_Construct_UClass_UTextureAllMipDataProviderFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTextureAllMipDataProviderFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureAllMipDataProviderFactory, UTextureMipDataProviderFactory, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTextureAllMipDataProviderFactory_NoRegister) \
	DECLARE_SERIALIZER(UTextureAllMipDataProviderFactory)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureAllMipDataProviderFactory_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureAllMipDataProviderFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureAllMipDataProviderFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureAllMipDataProviderFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureAllMipDataProviderFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureAllMipDataProviderFactory(UTextureAllMipDataProviderFactory&&) = delete; \
	UTextureAllMipDataProviderFactory(const UTextureAllMipDataProviderFactory&) = delete; \
	ENGINE_API virtual ~UTextureAllMipDataProviderFactory();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureAllMipDataProviderFactory_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureAllMipDataProviderFactory_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureAllMipDataProviderFactory_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureAllMipDataProviderFactory_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureAllMipDataProviderFactory;

// ********** End Class UTextureAllMipDataProviderFactory ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureAllMipDataProviderFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
