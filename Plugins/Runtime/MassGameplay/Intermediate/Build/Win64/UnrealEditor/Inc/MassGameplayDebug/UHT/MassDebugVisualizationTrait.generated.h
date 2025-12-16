// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassDebugVisualizationTrait.h"

#ifdef MASSGAMEPLAYDEBUG_MassDebugVisualizationTrait_generated_h
#error "MassDebugVisualizationTrait.generated.h already included, missing '#pragma once' in MassDebugVisualizationTrait.h"
#endif
#define MASSGAMEPLAYDEBUG_MassDebugVisualizationTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassDebugVisualizationTrait *********************************************
struct Z_Construct_UClass_UMassDebugVisualizationTrait_Statics;
MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassDebugVisualizationTrait_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassDebugVisualizationTrait(); \
	friend struct ::Z_Construct_UClass_UMassDebugVisualizationTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSGAMEPLAYDEBUG_API UClass* ::Z_Construct_UClass_UMassDebugVisualizationTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassDebugVisualizationTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassGameplayDebug"), Z_Construct_UClass_UMassDebugVisualizationTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassDebugVisualizationTrait)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSGAMEPLAYDEBUG_API UMassDebugVisualizationTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassDebugVisualizationTrait(UMassDebugVisualizationTrait&&) = delete; \
	UMassDebugVisualizationTrait(const UMassDebugVisualizationTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSGAMEPLAYDEBUG_API, UMassDebugVisualizationTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassDebugVisualizationTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassDebugVisualizationTrait) \
	MASSGAMEPLAYDEBUG_API virtual ~UMassDebugVisualizationTrait();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassDebugVisualizationTrait;

// ********** End Class UMassDebugVisualizationTrait ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
