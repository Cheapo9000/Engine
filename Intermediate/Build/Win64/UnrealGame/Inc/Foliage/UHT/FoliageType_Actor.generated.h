// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FoliageType_Actor.h"

#ifdef FOLIAGE_FoliageType_Actor_generated_h
#error "FoliageType_Actor.generated.h already included, missing '#pragma once' in FoliageType_Actor.h"
#endif
#define FOLIAGE_FoliageType_Actor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFoliageType_Actor *******************************************************
struct Z_Construct_UClass_UFoliageType_Actor_Statics;
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_Actor_NoRegister();

#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFoliageType_Actor(); \
	friend struct ::Z_Construct_UClass_UFoliageType_Actor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FOLIAGE_API UClass* ::Z_Construct_UClass_UFoliageType_Actor_NoRegister(); \
public: \
	DECLARE_CLASS2(UFoliageType_Actor, UFoliageType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), Z_Construct_UClass_UFoliageType_Actor_NoRegister) \
	DECLARE_SERIALIZER(UFoliageType_Actor)


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API UFoliageType_Actor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageType_Actor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, UFoliageType_Actor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageType_Actor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFoliageType_Actor(UFoliageType_Actor&&) = delete; \
	UFoliageType_Actor(const UFoliageType_Actor&) = delete; \
	FOLIAGE_API virtual ~UFoliageType_Actor();


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_10_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_13_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFoliageType_Actor;

// ********** End Class UFoliageType_Actor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
