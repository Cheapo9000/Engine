// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralFoliageTile.h"

#ifdef FOLIAGE_ProceduralFoliageTile_generated_h
#error "ProceduralFoliageTile.generated.h already included, missing '#pragma once' in ProceduralFoliageTile.h"
#endif
#define FOLIAGE_ProceduralFoliageTile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProceduralFoliageTile ***************************************************
struct Z_Construct_UClass_UProceduralFoliageTile_Statics;
FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageTile_NoRegister();

#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralFoliageTile(); \
	friend struct ::Z_Construct_UClass_UProceduralFoliageTile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FOLIAGE_API UClass* ::Z_Construct_UClass_UProceduralFoliageTile_NoRegister(); \
public: \
	DECLARE_CLASS2(UProceduralFoliageTile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), Z_Construct_UClass_UProceduralFoliageTile_NoRegister) \
	DECLARE_SERIALIZER(UProceduralFoliageTile)


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API UProceduralFoliageTile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageTile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, UProceduralFoliageTile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageTile); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProceduralFoliageTile(UProceduralFoliageTile&&) = delete; \
	UProceduralFoliageTile(const UProceduralFoliageTile&) = delete; \
	FOLIAGE_API virtual ~UProceduralFoliageTile();


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_29_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProceduralFoliageTile;

// ********** End Class UProceduralFoliageTile *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
