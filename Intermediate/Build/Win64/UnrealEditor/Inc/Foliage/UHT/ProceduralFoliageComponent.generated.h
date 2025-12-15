// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralFoliageComponent.h"

#ifdef FOLIAGE_ProceduralFoliageComponent_generated_h
#error "ProceduralFoliageComponent.generated.h already included, missing '#pragma once' in ProceduralFoliageComponent.h"
#endif
#define FOLIAGE_ProceduralFoliageComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProceduralFoliageComponent **********************************************
struct Z_Construct_UClass_UProceduralFoliageComponent_Statics;
FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister();

#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralFoliageComponent(); \
	friend struct ::Z_Construct_UClass_UProceduralFoliageComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FOLIAGE_API UClass* ::Z_Construct_UClass_UProceduralFoliageComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UProceduralFoliageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), Z_Construct_UClass_UProceduralFoliageComponent_NoRegister) \
	DECLARE_SERIALIZER(UProceduralFoliageComponent)


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API UProceduralFoliageComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, UProceduralFoliageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProceduralFoliageComponent(UProceduralFoliageComponent&&) = delete; \
	UProceduralFoliageComponent(const UProceduralFoliageComponent&) = delete; \
	FOLIAGE_API virtual ~UProceduralFoliageComponent();


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_41_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_44_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProceduralFoliageComponent;

// ********** End Class UProceduralFoliageComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
