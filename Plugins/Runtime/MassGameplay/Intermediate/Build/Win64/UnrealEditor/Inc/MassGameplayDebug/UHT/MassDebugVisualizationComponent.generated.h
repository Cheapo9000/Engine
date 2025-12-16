// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassDebugVisualizationComponent.h"

#ifdef MASSGAMEPLAYDEBUG_MassDebugVisualizationComponent_generated_h
#error "MassDebugVisualizationComponent.generated.h already included, missing '#pragma once' in MassDebugVisualizationComponent.h"
#endif
#define MASSGAMEPLAYDEBUG_MassDebugVisualizationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassDebugVisualizationComponent *****************************************
struct Z_Construct_UClass_UMassDebugVisualizationComponent_Statics;
MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassDebugVisualizationComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassDebugVisualizationComponent(); \
	friend struct ::Z_Construct_UClass_UMassDebugVisualizationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSGAMEPLAYDEBUG_API UClass* ::Z_Construct_UClass_UMassDebugVisualizationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassDebugVisualizationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassGameplayDebug"), Z_Construct_UClass_UMassDebugVisualizationComponent_NoRegister) \
	DECLARE_SERIALIZER(UMassDebugVisualizationComponent)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSGAMEPLAYDEBUG_API UMassDebugVisualizationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassDebugVisualizationComponent(UMassDebugVisualizationComponent&&) = delete; \
	UMassDebugVisualizationComponent(const UMassDebugVisualizationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSGAMEPLAYDEBUG_API, UMassDebugVisualizationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassDebugVisualizationComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassDebugVisualizationComponent) \
	MASSGAMEPLAYDEBUG_API virtual ~UMassDebugVisualizationComponent();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassDebugVisualizationComponent;

// ********** End Class UMassDebugVisualizationComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
