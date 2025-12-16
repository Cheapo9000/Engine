// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomActor.h"

#ifdef HAIRSTRANDSCORE_GroomActor_generated_h
#error "GroomActor.generated.h already included, missing '#pragma once' in GroomActor.h"
#endif
#define HAIRSTRANDSCORE_GroomActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGroomActor **************************************************************
struct Z_Construct_UClass_AGroomActor_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_AGroomActor_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAGroomActor(); \
	friend struct ::Z_Construct_UClass_AGroomActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_AGroomActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGroomActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_AGroomActor_NoRegister) \
	DECLARE_SERIALIZER(AGroomActor)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API AGroomActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGroomActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, AGroomActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGroomActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGroomActor(AGroomActor&&) = delete; \
	AGroomActor(const AGroomActor&) = delete; \
	HAIRSTRANDSCORE_API virtual ~AGroomActor();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGroomActor;

// ********** End Class AGroomActor ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
