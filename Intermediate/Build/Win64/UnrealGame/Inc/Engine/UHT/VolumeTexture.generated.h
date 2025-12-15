// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/VolumeTexture.h"

#ifdef ENGINE_VolumeTexture_generated_h
#error "VolumeTexture.generated.h already included, missing '#pragma once' in VolumeTexture.h"
#endif
#define ENGINE_VolumeTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVolumeTexture ***********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVolumeTexture, ENGINE_API)


struct Z_Construct_UClass_UVolumeTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVolumeTexture(); \
	friend struct ::Z_Construct_UClass_UVolumeTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVolumeTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UVolumeTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVolumeTexture_NoRegister) \
	DECLARE_SERIALIZER(UVolumeTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVolumeTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVolumeTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVolumeTexture(UVolumeTexture&&) = delete; \
	UVolumeTexture(const UVolumeTexture&) = delete; \
	ENGINE_API virtual ~UVolumeTexture();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVolumeTexture;

// ********** End Class UVolumeTexture *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
