// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassAssortedFragmentsTrait.h"

#ifdef MASSSPAWNER_MassAssortedFragmentsTrait_generated_h
#error "MassAssortedFragmentsTrait.generated.h already included, missing '#pragma once' in MassAssortedFragmentsTrait.h"
#endif
#define MASSSPAWNER_MassAssortedFragmentsTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassAssortedFragmentsTrait **********************************************
struct Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics;
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassAssortedFragmentsTrait_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassAssortedFragmentsTrait(); \
	friend struct ::Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSPAWNER_API UClass* ::Z_Construct_UClass_UMassAssortedFragmentsTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassAssortedFragmentsTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassSpawner"), Z_Construct_UClass_UMassAssortedFragmentsTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassAssortedFragmentsTrait)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSSPAWNER_API UMassAssortedFragmentsTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassAssortedFragmentsTrait(UMassAssortedFragmentsTrait&&) = delete; \
	UMassAssortedFragmentsTrait(const UMassAssortedFragmentsTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSPAWNER_API, UMassAssortedFragmentsTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassAssortedFragmentsTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassAssortedFragmentsTrait) \
	MASSSPAWNER_API virtual ~UMassAssortedFragmentsTrait();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassAssortedFragmentsTrait;

// ********** End Class UMassAssortedFragmentsTrait ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
