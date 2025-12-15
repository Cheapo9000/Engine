// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralFoliageSpawnerFactory.h"

#ifdef FOLIAGEEDIT_ProceduralFoliageSpawnerFactory_generated_h
#error "ProceduralFoliageSpawnerFactory.generated.h already included, missing '#pragma once' in ProceduralFoliageSpawnerFactory.h"
#endif
#define FOLIAGEEDIT_ProceduralFoliageSpawnerFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProceduralFoliageSpawnerFactory *****************************************
struct Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics;
FOLIAGEEDIT_API UClass* Z_Construct_UClass_UProceduralFoliageSpawnerFactory_NoRegister();

#define FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralFoliageSpawnerFactory(); \
	friend struct ::Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FOLIAGEEDIT_API UClass* ::Z_Construct_UClass_UProceduralFoliageSpawnerFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UProceduralFoliageSpawnerFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoliageEdit"), Z_Construct_UClass_UProceduralFoliageSpawnerFactory_NoRegister) \
	DECLARE_SERIALIZER(UProceduralFoliageSpawnerFactory)


#define FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageSpawnerFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageSpawnerFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageSpawnerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageSpawnerFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProceduralFoliageSpawnerFactory(UProceduralFoliageSpawnerFactory&&) = delete; \
	UProceduralFoliageSpawnerFactory(const UProceduralFoliageSpawnerFactory&) = delete; \
	NO_API virtual ~UProceduralFoliageSpawnerFactory();


#define FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_20_PROLOG
#define FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_23_INCLASS \
	FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProceduralFoliageSpawnerFactory;

// ********** End Class UProceduralFoliageSpawnerFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
