// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosSolverFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSSOLVEREDITOR_ChaosSolverFactory_generated_h
#error "ChaosSolverFactory.generated.h already included, missing '#pragma once' in ChaosSolverFactory.h"
#endif
#define CHAOSSOLVEREDITOR_ChaosSolverFactory_generated_h

#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUChaosSolverFactory(); \
	friend struct Z_Construct_UClass_UChaosSolverFactory_Statics; \
public: \
	DECLARE_CLASS(UChaosSolverFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosSolverEditor"), NO_API) \
	DECLARE_SERIALIZER(UChaosSolverFactory)


#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosSolverFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosSolverFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosSolverFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosSolverFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosSolverFactory(UChaosSolverFactory&&); \
	UChaosSolverFactory(const UChaosSolverFactory&); \
public: \
	NO_API virtual ~UChaosSolverFactory();


#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSSOLVEREDITOR_API UClass* StaticClass<class UChaosSolverFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
