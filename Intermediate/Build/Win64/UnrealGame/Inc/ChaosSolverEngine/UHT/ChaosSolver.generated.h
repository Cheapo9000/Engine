// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosSolver.h"

#ifdef CHAOSSOLVERENGINE_ChaosSolver_generated_h
#error "ChaosSolver.generated.h already included, missing '#pragma once' in ChaosSolver.h"
#endif
#define CHAOSSOLVERENGINE_ChaosSolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosSolver *************************************************************
struct Z_Construct_UClass_UChaosSolver_Statics;
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolver_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUChaosSolver(); \
	friend struct ::Z_Construct_UClass_UChaosSolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSSOLVERENGINE_API UClass* ::Z_Construct_UClass_UChaosSolver_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosSolver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), Z_Construct_UClass_UChaosSolver_NoRegister) \
	DECLARE_SERIALIZER(UChaosSolver)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_19_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosSolver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSSOLVERENGINE_API, UChaosSolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosSolver); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosSolver(UChaosSolver&&) = delete; \
	UChaosSolver(const UChaosSolver&) = delete; \
	CHAOSSOLVERENGINE_API virtual ~UChaosSolver();


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_16_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_19_INCLASS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosSolver;

// ********** End Class UChaosSolver ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
