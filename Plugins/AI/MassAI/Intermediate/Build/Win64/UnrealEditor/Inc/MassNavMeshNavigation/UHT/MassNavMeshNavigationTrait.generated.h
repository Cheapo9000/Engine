// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassNavMeshNavigationTrait.h"

#ifdef MASSNAVMESHNAVIGATION_MassNavMeshNavigationTrait_generated_h
#error "MassNavMeshNavigationTrait.generated.h already included, missing '#pragma once' in MassNavMeshNavigationTrait.h"
#endif
#define MASSNAVMESHNAVIGATION_MassNavMeshNavigationTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassNavMeshNavigationTrait **********************************************
struct Z_Construct_UClass_UMassNavMeshNavigationTrait_Statics;
MASSNAVMESHNAVIGATION_API UClass* Z_Construct_UClass_UMassNavMeshNavigationTrait_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationTrait_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassNavMeshNavigationTrait(); \
	friend struct ::Z_Construct_UClass_UMassNavMeshNavigationTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSNAVMESHNAVIGATION_API UClass* ::Z_Construct_UClass_UMassNavMeshNavigationTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassNavMeshNavigationTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassNavMeshNavigation"), Z_Construct_UClass_UMassNavMeshNavigationTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassNavMeshNavigationTrait)


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationTrait_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSNAVMESHNAVIGATION_API UMassNavMeshNavigationTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassNavMeshNavigationTrait(UMassNavMeshNavigationTrait&&) = delete; \
	UMassNavMeshNavigationTrait(const UMassNavMeshNavigationTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSNAVMESHNAVIGATION_API, UMassNavMeshNavigationTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassNavMeshNavigationTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassNavMeshNavigationTrait) \
	MASSNAVMESHNAVIGATION_API virtual ~UMassNavMeshNavigationTrait();


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationTrait_h_10_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationTrait_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationTrait_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationTrait_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassNavMeshNavigationTrait;

// ********** End Class UMassNavMeshNavigationTrait ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassNavMeshNavigation_Public_MassNavMeshNavigationTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
