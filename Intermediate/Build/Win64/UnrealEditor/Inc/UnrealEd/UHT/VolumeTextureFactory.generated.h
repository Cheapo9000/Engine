// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/VolumeTextureFactory.h"

#ifdef UNREALED_VolumeTextureFactory_generated_h
#error "VolumeTextureFactory.generated.h already included, missing '#pragma once' in VolumeTextureFactory.h"
#endif
#define UNREALED_VolumeTextureFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVolumeTextureFactory ****************************************************
struct Z_Construct_UClass_UVolumeTextureFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UVolumeTextureFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVolumeTextureFactory(); \
	friend struct ::Z_Construct_UClass_UVolumeTextureFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UVolumeTextureFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UVolumeTextureFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UVolumeTextureFactory_NoRegister) \
	DECLARE_SERIALIZER(UVolumeTextureFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UVolumeTextureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeTextureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UVolumeTextureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeTextureFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVolumeTextureFactory(UVolumeTextureFactory&&) = delete; \
	UVolumeTextureFactory(const UVolumeTextureFactory&) = delete; \
	UNREALED_API virtual ~UVolumeTextureFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVolumeTextureFactory;

// ********** End Class UVolumeTextureFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
