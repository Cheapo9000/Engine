// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/Items/EnvQueryItemType_ActorBase.h"

#ifdef AIMODULE_EnvQueryItemType_ActorBase_generated_h
#error "EnvQueryItemType_ActorBase.generated.h already included, missing '#pragma once' in EnvQueryItemType_ActorBase.h"
#endif
#define AIMODULE_EnvQueryItemType_ActorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQueryItemType_ActorBase **********************************************
struct Z_Construct_UClass_UEnvQueryItemType_ActorBase_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryItemType_ActorBase(); \
	friend struct ::Z_Construct_UClass_UEnvQueryItemType_ActorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQueryItemType_ActorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryItemType_ActorBase, UEnvQueryItemType_VectorBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQueryItemType_ActorBase_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryItemType_ActorBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryItemType_ActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryItemType_ActorBase(UEnvQueryItemType_ActorBase&&) = delete; \
	UEnvQueryItemType_ActorBase(const UEnvQueryItemType_ActorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryItemType_ActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryItemType_ActorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryItemType_ActorBase) \
	AIMODULE_API virtual ~UEnvQueryItemType_ActorBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryItemType_ActorBase;

// ********** End Class UEnvQueryItemType_ActorBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
