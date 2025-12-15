// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeTextureStorageProvider.h"

#ifdef LANDSCAPE_LandscapeTextureStorageProvider_generated_h
#error "LandscapeTextureStorageProvider.generated.h already included, missing '#pragma once' in LandscapeTextureStorageProvider.h"
#endif
#define LANDSCAPE_LandscapeTextureStorageProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLandscapeTexture2DMipMap *****************************************
struct Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeTexture2DMipMap;
// ********** End ScriptStruct FLandscapeTexture2DMipMap *******************************************

// ********** Begin Class ULandscapeTextureMipEdgeOverrideFactory **********************************
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_137_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeTextureMipEdgeOverrideFactory, LANDSCAPE_API)


struct Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_137_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeTextureMipEdgeOverrideFactory(); \
	friend struct ::Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeTextureMipEdgeOverrideFactory, UTextureMipDataProviderFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeTextureMipEdgeOverrideFactory) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_137_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UTexture2D)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeTextureMipEdgeOverrideFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeTextureMipEdgeOverrideFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeTextureMipEdgeOverrideFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeTextureMipEdgeOverrideFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeTextureMipEdgeOverrideFactory(ULandscapeTextureMipEdgeOverrideFactory&&) = delete; \
	ULandscapeTextureMipEdgeOverrideFactory(const ULandscapeTextureMipEdgeOverrideFactory&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeTextureMipEdgeOverrideFactory();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_134_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_137_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeTextureMipEdgeOverrideFactory;

// ********** End Class ULandscapeTextureMipEdgeOverrideFactory ************************************

// ********** Begin Class ULandscapeTextureStorageProviderFactory **********************************
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_175_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeTextureStorageProviderFactory, LANDSCAPE_API)


struct Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_175_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeTextureStorageProviderFactory(); \
	friend struct ::Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeTextureStorageProviderFactory, UTextureAllMipDataProviderFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeTextureStorageProviderFactory) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_175_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UTexture2D)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_175_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeTextureStorageProviderFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeTextureStorageProviderFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeTextureStorageProviderFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeTextureStorageProviderFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeTextureStorageProviderFactory(ULandscapeTextureStorageProviderFactory&&) = delete; \
	ULandscapeTextureStorageProviderFactory(const ULandscapeTextureStorageProviderFactory&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeTextureStorageProviderFactory();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_172_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_175_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_175_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_175_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeTextureStorageProviderFactory;

// ********** End Class ULandscapeTextureStorageProviderFactory ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
