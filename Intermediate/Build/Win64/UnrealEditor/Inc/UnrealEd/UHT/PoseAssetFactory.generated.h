// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PoseAssetFactory.h"

#ifdef UNREALED_PoseAssetFactory_generated_h
#error "PoseAssetFactory.generated.h already included, missing '#pragma once' in PoseAssetFactory.h"
#endif
#define UNREALED_PoseAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPoseAssetFactory ********************************************************
struct Z_Construct_UClass_UPoseAssetFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPoseAssetFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPoseAssetFactory(); \
	friend struct ::Z_Construct_UClass_UPoseAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPoseAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPoseAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UPoseAssetFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPoseAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseAssetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPoseAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseAssetFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseAssetFactory(UPoseAssetFactory&&) = delete; \
	UPoseAssetFactory(const UPoseAssetFactory&) = delete; \
	UNREALED_API virtual ~UPoseAssetFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseAssetFactory;

// ********** End Class UPoseAssetFactory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
