// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactoryProceduralFoliage.h"

#ifdef FOLIAGEEDIT_ActorFactoryProceduralFoliage_generated_h
#error "ActorFactoryProceduralFoliage.generated.h already included, missing '#pragma once' in ActorFactoryProceduralFoliage.h"
#endif
#define FOLIAGEEDIT_ActorFactoryProceduralFoliage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryProceduralFoliage *******************************************
struct Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics;
FOLIAGEEDIT_API UClass* Z_Construct_UClass_UActorFactoryProceduralFoliage_NoRegister();

#define FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryProceduralFoliage(); \
	friend struct ::Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FOLIAGEEDIT_API UClass* ::Z_Construct_UClass_UActorFactoryProceduralFoliage_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryProceduralFoliage, UActorFactoryBoxVolume, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FoliageEdit"), Z_Construct_UClass_UActorFactoryProceduralFoliage_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryProceduralFoliage)


#define FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGEEDIT_API UActorFactoryProceduralFoliage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryProceduralFoliage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGEEDIT_API, UActorFactoryProceduralFoliage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryProceduralFoliage); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryProceduralFoliage(UActorFactoryProceduralFoliage&&) = delete; \
	UActorFactoryProceduralFoliage(const UActorFactoryProceduralFoliage&) = delete; \
	FOLIAGEEDIT_API virtual ~UActorFactoryProceduralFoliage();


#define FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h_18_PROLOG
#define FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h_21_INCLASS \
	FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryProceduralFoliage;

// ********** End Class UActorFactoryProceduralFoliage *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
