// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HierarchicalLODVolume.h"

#ifdef UNREALED_HierarchicalLODVolume_generated_h
#error "HierarchicalLODVolume.generated.h already included, missing '#pragma once' in HierarchicalLODVolume.h"
#endif
#define UNREALED_HierarchicalLODVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHierarchicalLODVolume ***************************************************
struct Z_Construct_UClass_AHierarchicalLODVolume_Statics;
UNREALED_API UClass* Z_Construct_UClass_AHierarchicalLODVolume_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAHierarchicalLODVolume(); \
	friend struct ::Z_Construct_UClass_AHierarchicalLODVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_AHierarchicalLODVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(AHierarchicalLODVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_AHierarchicalLODVolume_NoRegister) \
	DECLARE_SERIALIZER(AHierarchicalLODVolume)


#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API AHierarchicalLODVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHierarchicalLODVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, AHierarchicalLODVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHierarchicalLODVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHierarchicalLODVolume(AHierarchicalLODVolume&&) = delete; \
	AHierarchicalLODVolume(const AHierarchicalLODVolume&) = delete; \
	UNREALED_API virtual ~AHierarchicalLODVolume();


#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHierarchicalLODVolume;

// ********** End Class AHierarchicalLODVolume *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
