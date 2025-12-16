// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComponentSources/OptimusSkeletalMeshComponentSource.h"

#ifdef OPTIMUSCORE_OptimusSkeletalMeshComponentSource_generated_h
#error "OptimusSkeletalMeshComponentSource.generated.h already included, missing '#pragma once' in OptimusSkeletalMeshComponentSource.h"
#endif
#define OPTIMUSCORE_OptimusSkeletalMeshComponentSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusSkeletalMeshComponentSource **************************************
struct Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSkeletalMeshComponentSource(); \
	friend struct ::Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSkeletalMeshComponentSource, UOptimusSkinnedMeshComponentSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSkeletalMeshComponentSource)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSkeletalMeshComponentSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSkeletalMeshComponentSource(UOptimusSkeletalMeshComponentSource&&) = delete; \
	UOptimusSkeletalMeshComponentSource(const UOptimusSkeletalMeshComponentSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSkeletalMeshComponentSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSkeletalMeshComponentSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSkeletalMeshComponentSource) \
	NO_API virtual ~UOptimusSkeletalMeshComponentSource();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_10_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSkeletalMeshComponentSource;

// ********** End Class UOptimusSkeletalMeshComponentSource ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
