// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/Items/EnvQueryItemType_VectorBase.h"

#ifdef AIMODULE_EnvQueryItemType_VectorBase_generated_h
#error "EnvQueryItemType_VectorBase.generated.h already included, missing '#pragma once' in EnvQueryItemType_VectorBase.h"
#endif
#define AIMODULE_EnvQueryItemType_VectorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQueryItemType_VectorBase *********************************************
struct Z_Construct_UClass_UEnvQueryItemType_VectorBase_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryItemType_VectorBase(); \
	friend struct ::Z_Construct_UClass_UEnvQueryItemType_VectorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQueryItemType_VectorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryItemType_VectorBase, UEnvQueryItemType, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQueryItemType_VectorBase_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryItemType_VectorBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryItemType_VectorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryItemType_VectorBase(UEnvQueryItemType_VectorBase&&) = delete; \
	UEnvQueryItemType_VectorBase(const UEnvQueryItemType_VectorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryItemType_VectorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryItemType_VectorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryItemType_VectorBase) \
	AIMODULE_API virtual ~UEnvQueryItemType_VectorBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h_13_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryItemType_VectorBase;

// ********** End Class UEnvQueryItemType_VectorBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
