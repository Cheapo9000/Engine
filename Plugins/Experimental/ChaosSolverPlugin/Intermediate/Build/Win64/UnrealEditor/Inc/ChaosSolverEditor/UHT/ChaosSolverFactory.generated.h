// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosSolverFactory.h"

#ifdef CHAOSSOLVEREDITOR_ChaosSolverFactory_generated_h
#error "ChaosSolverFactory.generated.h already included, missing '#pragma once' in ChaosSolverFactory.h"
#endif
#define CHAOSSOLVEREDITOR_ChaosSolverFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosSolverFactory ******************************************************
struct Z_Construct_UClass_UChaosSolverFactory_Statics;
CHAOSSOLVEREDITOR_API UClass* Z_Construct_UClass_UChaosSolverFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUChaosSolverFactory(); \
	friend struct ::Z_Construct_UClass_UChaosSolverFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSSOLVEREDITOR_API UClass* ::Z_Construct_UClass_UChaosSolverFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosSolverFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosSolverEditor"), Z_Construct_UClass_UChaosSolverFactory_NoRegister) \
	DECLARE_SERIALIZER(UChaosSolverFactory)


#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSSOLVEREDITOR_API UChaosSolverFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosSolverFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSSOLVEREDITOR_API, UChaosSolverFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosSolverFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosSolverFactory(UChaosSolverFactory&&) = delete; \
	UChaosSolverFactory(const UChaosSolverFactory&) = delete; \
	CHAOSSOLVEREDITOR_API virtual ~UChaosSolverFactory();


#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosSolverFactory;

// ********** End Class UChaosSolverFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Public_Chaos_ChaosSolverFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
