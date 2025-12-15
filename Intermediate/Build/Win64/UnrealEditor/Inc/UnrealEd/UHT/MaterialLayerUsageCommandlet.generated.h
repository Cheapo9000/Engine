// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/MaterialLayerUsageCommandlet.h"

#ifdef UNREALED_MaterialLayerUsageCommandlet_generated_h
#error "MaterialLayerUsageCommandlet.generated.h already included, missing '#pragma once' in MaterialLayerUsageCommandlet.h"
#endif
#define UNREALED_MaterialLayerUsageCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialLayerUsageCommandlet ********************************************
struct Z_Construct_UClass_UMaterialLayerUsageCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialLayerUsageCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MaterialLayerUsageCommandlet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialLayerUsageCommandlet(); \
	friend struct ::Z_Construct_UClass_UMaterialLayerUsageCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialLayerUsageCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialLayerUsageCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialLayerUsageCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UMaterialLayerUsageCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MaterialLayerUsageCommandlet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialLayerUsageCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialLayerUsageCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialLayerUsageCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialLayerUsageCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialLayerUsageCommandlet(UMaterialLayerUsageCommandlet&&) = delete; \
	UMaterialLayerUsageCommandlet(const UMaterialLayerUsageCommandlet&) = delete; \
	NO_API virtual ~UMaterialLayerUsageCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MaterialLayerUsageCommandlet_h_9_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MaterialLayerUsageCommandlet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MaterialLayerUsageCommandlet_h_12_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MaterialLayerUsageCommandlet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialLayerUsageCommandlet;

// ********** End Class UMaterialLayerUsageCommandlet **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MaterialLayerUsageCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
