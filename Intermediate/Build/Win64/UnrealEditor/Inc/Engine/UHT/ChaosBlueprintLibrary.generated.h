// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/ChaosBlueprintLibrary.h"

#ifdef ENGINE_ChaosBlueprintLibrary_generated_h
#error "ChaosBlueprintLibrary.generated.h already included, missing '#pragma once' in ChaosBlueprintLibrary.h"
#endif
#define ENGINE_ChaosBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChaosEventRelay;
class UObject;

// ********** Begin Class UChaosBlueprintLibrary ***************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEventRelayFromContext);


struct Z_Construct_UClass_UChaosBlueprintLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UChaosBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UChaosBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UChaosBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UChaosBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UChaosBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosBlueprintLibrary(UChaosBlueprintLibrary&&) = delete; \
	UChaosBlueprintLibrary(const UChaosBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosBlueprintLibrary) \
	NO_API virtual ~UChaosBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosBlueprintLibrary;

// ********** End Class UChaosBlueprintLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
