// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DetectOrphanedLocalizedAssetsCommandlet.h"

#ifdef UNREALED_DetectOrphanedLocalizedAssetsCommandlet_generated_h
#error "DetectOrphanedLocalizedAssetsCommandlet.generated.h already included, missing '#pragma once' in DetectOrphanedLocalizedAssetsCommandlet.h"
#endif
#define UNREALED_DetectOrphanedLocalizedAssetsCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDetectOrphanedLocalizedAssetsCommandlet *********************************
struct Z_Construct_UClass_UDetectOrphanedLocalizedAssetsCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDetectOrphanedLocalizedAssetsCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_DetectOrphanedLocalizedAssetsCommandlet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDetectOrphanedLocalizedAssetsCommandlet(); \
	friend struct ::Z_Construct_UClass_UDetectOrphanedLocalizedAssetsCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDetectOrphanedLocalizedAssetsCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDetectOrphanedLocalizedAssetsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDetectOrphanedLocalizedAssetsCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDetectOrphanedLocalizedAssetsCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_DetectOrphanedLocalizedAssetsCommandlet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetectOrphanedLocalizedAssetsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetectOrphanedLocalizedAssetsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetectOrphanedLocalizedAssetsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetectOrphanedLocalizedAssetsCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDetectOrphanedLocalizedAssetsCommandlet(UDetectOrphanedLocalizedAssetsCommandlet&&) = delete; \
	UDetectOrphanedLocalizedAssetsCommandlet(const UDetectOrphanedLocalizedAssetsCommandlet&) = delete; \
	NO_API virtual ~UDetectOrphanedLocalizedAssetsCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_DetectOrphanedLocalizedAssetsCommandlet_h_9_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_DetectOrphanedLocalizedAssetsCommandlet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_DetectOrphanedLocalizedAssetsCommandlet_h_12_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_DetectOrphanedLocalizedAssetsCommandlet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDetectOrphanedLocalizedAssetsCommandlet;

// ********** End Class UDetectOrphanedLocalizedAssetsCommandlet ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_DetectOrphanedLocalizedAssetsCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
