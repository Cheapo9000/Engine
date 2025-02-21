// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/AvaTransitionTaskBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHETRANSITION_AvaTransitionTaskBlueprint_generated_h
#error "AvaTransitionTaskBlueprint.generated.h already included, missing '#pragma once' in AvaTransitionTaskBlueprint.h"
#endif
#define AVALANCHETRANSITION_AvaTransitionTaskBlueprint_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Tasks_AvaTransitionTaskBlueprint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTransitionTaskBlueprint(); \
	friend struct Z_Construct_UClass_UAvaTransitionTaskBlueprint_Statics; \
public: \
	DECLARE_CLASS(UAvaTransitionTaskBlueprint, UStateTreeTaskBlueprintBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), AVALANCHETRANSITION_API) \
	DECLARE_SERIALIZER(UAvaTransitionTaskBlueprint) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaTransitionTaskBlueprint*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Tasks_AvaTransitionTaskBlueprint_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHETRANSITION_API UAvaTransitionTaskBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTransitionTaskBlueprint(UAvaTransitionTaskBlueprint&&); \
	UAvaTransitionTaskBlueprint(const UAvaTransitionTaskBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETRANSITION_API, UAvaTransitionTaskBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionTaskBlueprint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransitionTaskBlueprint) \
	AVALANCHETRANSITION_API virtual ~UAvaTransitionTaskBlueprint();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Tasks_AvaTransitionTaskBlueprint_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Tasks_AvaTransitionTaskBlueprint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Tasks_AvaTransitionTaskBlueprint_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Tasks_AvaTransitionTaskBlueprint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHETRANSITION_API UClass* StaticClass<class UAvaTransitionTaskBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Tasks_AvaTransitionTaskBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
