// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atmosphere/AtmosphericFog.h"

#ifdef ENGINE_AtmosphericFog_generated_h
#error "AtmosphericFog.generated.h already included, missing '#pragma once' in AtmosphericFog.h"
#endif
#define ENGINE_AtmosphericFog_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAtmosphericFog **********************************************************
struct Z_Construct_UClass_AAtmosphericFog_Statics;
ENGINE_API UClass* Z_Construct_UClass_AAtmosphericFog_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAAtmosphericFog(); \
	friend struct ::Z_Construct_UClass_AAtmosphericFog_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AAtmosphericFog_NoRegister(); \
public: \
	DECLARE_CLASS2(AAtmosphericFog, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AAtmosphericFog_NoRegister) \
	DECLARE_SERIALIZER(AAtmosphericFog)


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AAtmosphericFog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtmosphericFog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AAtmosphericFog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtmosphericFog); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAtmosphericFog(AAtmosphericFog&&) = delete; \
	AAtmosphericFog(const AAtmosphericFog&) = delete; \
	ENGINE_API virtual ~AAtmosphericFog();


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAtmosphericFog;

// ********** End Class AAtmosphericFog ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
