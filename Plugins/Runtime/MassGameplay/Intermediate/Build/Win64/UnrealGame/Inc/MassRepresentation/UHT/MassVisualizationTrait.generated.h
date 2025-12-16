// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassVisualizationTrait.h"

#ifdef MASSREPRESENTATION_MassVisualizationTrait_generated_h
#error "MassVisualizationTrait.generated.h already included, missing '#pragma once' in MassVisualizationTrait.h"
#endif
#define MASSREPRESENTATION_MassVisualizationTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassVisualizationTrait **************************************************
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMassVisualizationTrait, MASSREPRESENTATION_API)


struct Z_Construct_UClass_UMassVisualizationTrait_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationTrait_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassVisualizationTrait(); \
	friend struct ::Z_Construct_UClass_UMassVisualizationTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_UMassVisualizationTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassVisualizationTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_UMassVisualizationTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassVisualizationTrait) \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_21_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassVisualizationTrait(UMassVisualizationTrait&&) = delete; \
	UMassVisualizationTrait(const UMassVisualizationTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, UMassVisualizationTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassVisualizationTrait); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassVisualizationTrait) \
	MASSREPRESENTATION_API virtual ~UMassVisualizationTrait();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassVisualizationTrait;

// ********** End Class UMassVisualizationTrait ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
