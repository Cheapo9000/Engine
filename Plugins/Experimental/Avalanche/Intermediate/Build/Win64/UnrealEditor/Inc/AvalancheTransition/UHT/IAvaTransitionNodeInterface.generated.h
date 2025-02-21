// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAvaTransitionNodeInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHETRANSITION_IAvaTransitionNodeInterface_generated_h
#error "IAvaTransitionNodeInterface.generated.h already included, missing '#pragma once' in IAvaTransitionNodeInterface.h"
#endif
#define AVALANCHETRANSITION_IAvaTransitionNodeInterface_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHETRANSITION_API UAvaTransitionNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTransitionNodeInterface(UAvaTransitionNodeInterface&&); \
	UAvaTransitionNodeInterface(const UAvaTransitionNodeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETRANSITION_API, UAvaTransitionNodeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionNodeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransitionNodeInterface) \
	AVALANCHETRANSITION_API virtual ~UAvaTransitionNodeInterface();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaTransitionNodeInterface(); \
	friend struct Z_Construct_UClass_UAvaTransitionNodeInterface_Statics; \
public: \
	DECLARE_CLASS(UAvaTransitionNodeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), AVALANCHETRANSITION_API) \
	DECLARE_SERIALIZER(UAvaTransitionNodeInterface)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaTransitionNodeInterface() {} \
public: \
	typedef UAvaTransitionNodeInterface UClassType; \
	typedef IAvaTransitionNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHETRANSITION_API UClass* StaticClass<class UAvaTransitionNodeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
