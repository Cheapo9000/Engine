// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Viewport/Interaction/IAvaSnapPointGenerator.h"

#ifdef AVALANCHE_IAvaSnapPointGenerator_generated_h
#error "IAvaSnapPointGenerator.generated.h already included, missing '#pragma once' in IAvaSnapPointGenerator.h"
#endif
#define AVALANCHE_IAvaSnapPointGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAvaSnapPointGenerator ***********************************************
struct Z_Construct_UClass_UAvaSnapPointGenerator_Statics;
AVALANCHE_API UClass* Z_Construct_UClass_UAvaSnapPointGenerator_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaSnapPointGenerator_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHE_API UAvaSnapPointGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSnapPointGenerator(UAvaSnapPointGenerator&&) = delete; \
	UAvaSnapPointGenerator(const UAvaSnapPointGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, UAvaSnapPointGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSnapPointGenerator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaSnapPointGenerator) \
	virtual ~UAvaSnapPointGenerator() = default;


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaSnapPointGenerator_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaSnapPointGenerator(); \
	friend struct ::Z_Construct_UClass_UAvaSnapPointGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHE_API UClass* ::Z_Construct_UClass_UAvaSnapPointGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSnapPointGenerator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Avalanche"), Z_Construct_UClass_UAvaSnapPointGenerator_NoRegister) \
	DECLARE_SERIALIZER(UAvaSnapPointGenerator)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaSnapPointGenerator_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaSnapPointGenerator_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaSnapPointGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaSnapPointGenerator_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaSnapPointGenerator() {} \
public: \
	typedef UAvaSnapPointGenerator UClassType; \
	typedef IAvaSnapPointGenerator ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaSnapPointGenerator_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaSnapPointGenerator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaSnapPointGenerator_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSnapPointGenerator;

// ********** End Interface UAvaSnapPointGenerator *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaSnapPointGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
