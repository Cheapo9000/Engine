// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComponentSources/OptimusSceneComponentSource.h"

#ifdef OPTIMUSCORE_OptimusSceneComponentSource_generated_h
#error "OptimusSceneComponentSource.generated.h already included, missing '#pragma once' in OptimusSceneComponentSource.h"
#endif
#define OPTIMUSCORE_OptimusSceneComponentSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusSceneComponentSource *********************************************
struct Z_Construct_UClass_UOptimusSceneComponentSource_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSceneComponentSource_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSceneComponentSource_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSceneComponentSource(); \
	friend struct ::Z_Construct_UClass_UOptimusSceneComponentSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusSceneComponentSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSceneComponentSource, UOptimusComponentSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusSceneComponentSource_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSceneComponentSource)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSceneComponentSource_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSceneComponentSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSceneComponentSource(UOptimusSceneComponentSource&&) = delete; \
	UOptimusSceneComponentSource(const UOptimusSceneComponentSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSceneComponentSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSceneComponentSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSceneComponentSource) \
	NO_API virtual ~UOptimusSceneComponentSource();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSceneComponentSource_h_10_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSceneComponentSource_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSceneComponentSource_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSceneComponentSource_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSceneComponentSource;

// ********** End Class UOptimusSceneComponentSource ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSceneComponentSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
