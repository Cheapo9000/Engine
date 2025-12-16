// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behavior/IAvaTransitionBehavior.h"

#ifdef AVALANCHETRANSITION_IAvaTransitionBehavior_generated_h
#error "IAvaTransitionBehavior.generated.h already included, missing '#pragma once' in IAvaTransitionBehavior.h"
#endif
#define AVALANCHETRANSITION_IAvaTransitionBehavior_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAvaTransitionBehavior ***********************************************
struct Z_Construct_UClass_UAvaTransitionBehavior_Statics;
AVALANCHETRANSITION_API UClass* Z_Construct_UClass_UAvaTransitionBehavior_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHETRANSITION_API UAvaTransitionBehavior(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTransitionBehavior(UAvaTransitionBehavior&&) = delete; \
	UAvaTransitionBehavior(const UAvaTransitionBehavior&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETRANSITION_API, UAvaTransitionBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionBehavior); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransitionBehavior) \
	virtual ~UAvaTransitionBehavior() = default;


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaTransitionBehavior(); \
	friend struct ::Z_Construct_UClass_UAvaTransitionBehavior_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHETRANSITION_API UClass* ::Z_Construct_UClass_UAvaTransitionBehavior_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTransitionBehavior, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), Z_Construct_UClass_UAvaTransitionBehavior_NoRegister) \
	DECLARE_SERIALIZER(UAvaTransitionBehavior)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaTransitionBehavior() {} \
public: \
	typedef UAvaTransitionBehavior UClassType; \
	typedef IAvaTransitionBehavior ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTransitionBehavior;

// ********** End Interface UAvaTransitionBehavior *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_Behavior_IAvaTransitionBehavior_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
