// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lightmass/PrecomputedVisibilityOverrideVolume.h"

#ifdef ENGINE_PrecomputedVisibilityOverrideVolume_generated_h
#error "PrecomputedVisibilityOverrideVolume.generated.h already included, missing '#pragma once' in PrecomputedVisibilityOverrideVolume.h"
#endif
#define ENGINE_PrecomputedVisibilityOverrideVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APrecomputedVisibilityOverrideVolume *************************************
struct Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPrecomputedVisibilityOverrideVolume(); \
	friend struct ::Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(APrecomputedVisibilityOverrideVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_NoRegister) \
	DECLARE_SERIALIZER(APrecomputedVisibilityOverrideVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APrecomputedVisibilityOverrideVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrecomputedVisibilityOverrideVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APrecomputedVisibilityOverrideVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrecomputedVisibilityOverrideVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APrecomputedVisibilityOverrideVolume(APrecomputedVisibilityOverrideVolume&&) = delete; \
	APrecomputedVisibilityOverrideVolume(const APrecomputedVisibilityOverrideVolume&) = delete; \
	ENGINE_API virtual ~APrecomputedVisibilityOverrideVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APrecomputedVisibilityOverrideVolume;

// ********** End Class APrecomputedVisibilityOverrideVolume ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityOverrideVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
