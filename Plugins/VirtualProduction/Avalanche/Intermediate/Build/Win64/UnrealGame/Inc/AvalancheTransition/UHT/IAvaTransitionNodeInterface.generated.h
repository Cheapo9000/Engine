// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAvaTransitionNodeInterface.h"

#ifdef AVALANCHETRANSITION_IAvaTransitionNodeInterface_generated_h
#error "IAvaTransitionNodeInterface.generated.h already included, missing '#pragma once' in IAvaTransitionNodeInterface.h"
#endif
#define AVALANCHETRANSITION_IAvaTransitionNodeInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAvaTransitionNodeInterface ******************************************
struct Z_Construct_UClass_UAvaTransitionNodeInterface_Statics;
AVALANCHETRANSITION_API UClass* Z_Construct_UClass_UAvaTransitionNodeInterface_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHETRANSITION_API UAvaTransitionNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTransitionNodeInterface(UAvaTransitionNodeInterface&&) = delete; \
	UAvaTransitionNodeInterface(const UAvaTransitionNodeInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETRANSITION_API, UAvaTransitionNodeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionNodeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransitionNodeInterface) \
	virtual ~UAvaTransitionNodeInterface() = default;


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaTransitionNodeInterface(); \
	friend struct ::Z_Construct_UClass_UAvaTransitionNodeInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHETRANSITION_API UClass* ::Z_Construct_UClass_UAvaTransitionNodeInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTransitionNodeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), Z_Construct_UClass_UAvaTransitionNodeInterface_NoRegister) \
	DECLARE_SERIALIZER(UAvaTransitionNodeInterface)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaTransitionNodeInterface() {} \
public: \
	typedef UAvaTransitionNodeInterface UClassType; \
	typedef IAvaTransitionNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTransitionNodeInterface;

// ********** End Interface UAvaTransitionNodeInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_IAvaTransitionNodeInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
