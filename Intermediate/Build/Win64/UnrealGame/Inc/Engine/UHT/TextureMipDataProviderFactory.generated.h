// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureMipDataProviderFactory.h"

#ifdef ENGINE_TextureMipDataProviderFactory_generated_h
#error "TextureMipDataProviderFactory.generated.h already included, missing '#pragma once' in TextureMipDataProviderFactory.h"
#endif
#define ENGINE_TextureMipDataProviderFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureMipDataProviderFactory *******************************************
struct Z_Construct_UClass_UTextureMipDataProviderFactory_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTextureMipDataProviderFactory(); \
	friend struct ::Z_Construct_UClass_UTextureMipDataProviderFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureMipDataProviderFactory, UAssetUserData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister) \
	DECLARE_SERIALIZER(UTextureMipDataProviderFactory)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureMipDataProviderFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureMipDataProviderFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureMipDataProviderFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureMipDataProviderFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureMipDataProviderFactory(UTextureMipDataProviderFactory&&) = delete; \
	UTextureMipDataProviderFactory(const UTextureMipDataProviderFactory&) = delete; \
	ENGINE_API virtual ~UTextureMipDataProviderFactory();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureMipDataProviderFactory;

// ********** End Class UTextureMipDataProviderFactory *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
