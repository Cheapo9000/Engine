// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureCubeArray.h"

#ifdef ENGINE_TextureCubeArray_generated_h
#error "TextureCubeArray.generated.h already included, missing '#pragma once' in TextureCubeArray.h"
#endif
#define ENGINE_TextureCubeArray_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureCubeArray ********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureCubeArray, ENGINE_API)


struct Z_Construct_UClass_UTextureCubeArray_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTextureCubeArray_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTextureCubeArray(); \
	friend struct ::Z_Construct_UClass_UTextureCubeArray_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTextureCubeArray_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureCubeArray, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTextureCubeArray_NoRegister) \
	DECLARE_SERIALIZER(UTextureCubeArray) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureCubeArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureCubeArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureCubeArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureCubeArray); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureCubeArray(UTextureCubeArray&&) = delete; \
	UTextureCubeArray(const UTextureCubeArray&) = delete; \
	ENGINE_API virtual ~UTextureCubeArray();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureCubeArray;

// ********** End Class UTextureCubeArray **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
