// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/Contexts/EnvQueryContext_Item.h"

#ifdef AIMODULE_EnvQueryContext_Item_generated_h
#error "EnvQueryContext_Item.generated.h already included, missing '#pragma once' in EnvQueryContext_Item.h"
#endif
#define AIMODULE_EnvQueryContext_Item_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQueryContext_Item ****************************************************
struct Z_Construct_UClass_UEnvQueryContext_Item_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_Item_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryContext_Item(); \
	friend struct ::Z_Construct_UClass_UEnvQueryContext_Item_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQueryContext_Item_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryContext_Item, UEnvQueryContext, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQueryContext_Item_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryContext_Item)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryContext_Item(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryContext_Item) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryContext_Item); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryContext_Item); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryContext_Item(UEnvQueryContext_Item&&) = delete; \
	UEnvQueryContext_Item(const UEnvQueryContext_Item&) = delete; \
	AIMODULE_API virtual ~UEnvQueryContext_Item();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h_10_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h_13_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryContext_Item;

// ********** End Class UEnvQueryContext_Item ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
