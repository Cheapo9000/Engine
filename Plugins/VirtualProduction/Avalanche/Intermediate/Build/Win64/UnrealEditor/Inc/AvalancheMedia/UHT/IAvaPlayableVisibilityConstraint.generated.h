// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playable/IAvaPlayableVisibilityConstraint.h"

#ifdef AVALANCHEMEDIA_IAvaPlayableVisibilityConstraint_generated_h
#error "IAvaPlayableVisibilityConstraint.generated.h already included, missing '#pragma once' in IAvaPlayableVisibilityConstraint.h"
#endif
#define AVALANCHEMEDIA_IAvaPlayableVisibilityConstraint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAvaPlayableVisibilityConstraint *************************************
struct Z_Construct_UClass_UAvaPlayableVisibilityConstraint_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlayableVisibilityConstraint_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_IAvaPlayableVisibilityConstraint_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMEDIA_API UAvaPlayableVisibilityConstraint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlayableVisibilityConstraint(UAvaPlayableVisibilityConstraint&&) = delete; \
	UAvaPlayableVisibilityConstraint(const UAvaPlayableVisibilityConstraint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMEDIA_API, UAvaPlayableVisibilityConstraint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlayableVisibilityConstraint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlayableVisibilityConstraint) \
	virtual ~UAvaPlayableVisibilityConstraint() = default;


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_IAvaPlayableVisibilityConstraint_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaPlayableVisibilityConstraint(); \
	friend struct ::Z_Construct_UClass_UAvaPlayableVisibilityConstraint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlayableVisibilityConstraint_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlayableVisibilityConstraint, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlayableVisibilityConstraint_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlayableVisibilityConstraint)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_IAvaPlayableVisibilityConstraint_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_IAvaPlayableVisibilityConstraint_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_IAvaPlayableVisibilityConstraint_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_IAvaPlayableVisibilityConstraint_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaPlayableVisibilityConstraint() {} \
public: \
	typedef UAvaPlayableVisibilityConstraint UClassType; \
	typedef IAvaPlayableVisibilityConstraint ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_IAvaPlayableVisibilityConstraint_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_IAvaPlayableVisibilityConstraint_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_IAvaPlayableVisibilityConstraint_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlayableVisibilityConstraint;

// ********** End Interface UAvaPlayableVisibilityConstraint ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playable_IAvaPlayableVisibilityConstraint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
