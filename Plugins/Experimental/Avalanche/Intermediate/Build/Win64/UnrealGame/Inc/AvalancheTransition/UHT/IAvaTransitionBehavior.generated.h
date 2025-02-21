// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behavior/IAvaTransitionBehavior.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHETRANSITION_IAvaTransitionBehavior_generated_h
#error "IAvaTransitionBehavior.generated.h already included, missing '#pragma once' in IAvaTransitionBehavior.h"
#endif
#define AVALANCHETRANSITION_IAvaTransitionBehavior_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHETRANSITION_API UAvaTransitionBehavior(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTransitionBehavior(UAvaTransitionBehavior&&); \
	UAvaTransitionBehavior(const UAvaTransitionBehavior&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETRANSITION_API, UAvaTransitionBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionBehavior); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransitionBehavior) \
	AVALANCHETRANSITION_API virtual ~UAvaTransitionBehavior();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaTransitionBehavior(); \
	friend struct Z_Construct_UClass_UAvaTransitionBehavior_Statics; \
public: \
	DECLARE_CLASS(UAvaTransitionBehavior, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), AVALANCHETRANSITION_API) \
	DECLARE_SERIALIZER(UAvaTransitionBehavior)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaTransitionBehavior() {} \
public: \
	typedef UAvaTransitionBehavior UClassType; \
	typedef IAvaTransitionBehavior ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHETRANSITION_API UClass* StaticClass<class UAvaTransitionBehavior>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
