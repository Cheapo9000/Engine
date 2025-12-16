// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/HTNBrainComponent.h"

#ifdef HTNPLANNER_HTNBrainComponent_generated_h
#error "HTNBrainComponent.generated.h already included, missing '#pragma once' in HTNBrainComponent.h"
#endif
#define HTNPLANNER_HTNBrainComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHTNBrainComponent *******************************************************
struct Z_Construct_UClass_UHTNBrainComponent_Statics;
HTNPLANNER_API UClass* Z_Construct_UClass_UHTNBrainComponent_NoRegister();

#define FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHTNBrainComponent(); \
	friend struct ::Z_Construct_UClass_UHTNBrainComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HTNPLANNER_API UClass* ::Z_Construct_UClass_UHTNBrainComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHTNBrainComponent, UBrainComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HTNPlanner"), Z_Construct_UClass_UHTNBrainComponent_NoRegister) \
	DECLARE_SERIALIZER(UHTNBrainComponent)


#define FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHTNBrainComponent(UHTNBrainComponent&&) = delete; \
	UHTNBrainComponent(const UHTNBrainComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHTNBrainComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHTNBrainComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHTNBrainComponent) \
	NO_API virtual ~UHTNBrainComponent();


#define FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h_12_PROLOG
#define FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHTNBrainComponent;

// ********** End Class UHTNBrainComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
