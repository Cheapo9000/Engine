// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassMovableVisualizationTrait.h"

#ifdef MASSREPRESENTATION_MassMovableVisualizationTrait_generated_h
#error "MassMovableVisualizationTrait.generated.h already included, missing '#pragma once' in MassMovableVisualizationTrait.h"
#endif
#define MASSREPRESENTATION_MassMovableVisualizationTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassMovableVisualizationTrait *******************************************
struct Z_Construct_UClass_UMassMovableVisualizationTrait_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassMovableVisualizationTrait_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassMovableVisualizationTrait(); \
	friend struct ::Z_Construct_UClass_UMassMovableVisualizationTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_UMassMovableVisualizationTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassMovableVisualizationTrait, UMassVisualizationTrait, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_UMassMovableVisualizationTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassMovableVisualizationTrait)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSREPRESENTATION_API UMassMovableVisualizationTrait(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassMovableVisualizationTrait(UMassMovableVisualizationTrait&&) = delete; \
	UMassMovableVisualizationTrait(const UMassMovableVisualizationTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, UMassMovableVisualizationTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassMovableVisualizationTrait); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassMovableVisualizationTrait) \
	MASSREPRESENTATION_API virtual ~UMassMovableVisualizationTrait();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassMovableVisualizationTrait;

// ********** End Class UMassMovableVisualizationTrait *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassMovableVisualizationTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
