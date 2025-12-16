// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassVisualizationComponent.h"

#ifdef MASSREPRESENTATION_MassVisualizationComponent_generated_h
#error "MassVisualizationComponent.generated.h already included, missing '#pragma once' in MassVisualizationComponent.h"
#endif
#define MASSREPRESENTATION_MassVisualizationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassVisualizationComponent **********************************************
struct Z_Construct_UClass_UMassVisualizationComponent_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassVisualizationComponent(); \
	friend struct ::Z_Construct_UClass_UMassVisualizationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_UMassVisualizationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassVisualizationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_UMassVisualizationComponent_NoRegister) \
	DECLARE_SERIALIZER(UMassVisualizationComponent)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSREPRESENTATION_API UMassVisualizationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassVisualizationComponent(UMassVisualizationComponent&&) = delete; \
	UMassVisualizationComponent(const UMassVisualizationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, UMassVisualizationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassVisualizationComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassVisualizationComponent) \
	MASSREPRESENTATION_API virtual ~UMassVisualizationComponent();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassVisualizationComponent;

// ********** End Class UMassVisualizationComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
