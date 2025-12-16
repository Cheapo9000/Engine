// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeSchema.h"

#ifdef STATETREEMODULE_StateTreeSchema_generated_h
#error "StateTreeSchema.generated.h already included, missing '#pragma once' in StateTreeSchema.h"
#endif
#define STATETREEMODULE_StateTreeSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeSchema *********************************************************
struct Z_Construct_UClass_UStateTreeSchema_Statics;
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeSchema(); \
	friend struct ::Z_Construct_UClass_UStateTreeSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeSchema, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeModule"), Z_Construct_UClass_UStateTreeSchema_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeSchema)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEMODULE_API UStateTreeSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeSchema(UStateTreeSchema&&) = delete; \
	UStateTreeSchema(const UStateTreeSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEMODULE_API, UStateTreeSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeSchema); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeSchema) \
	STATETREEMODULE_API virtual ~UStateTreeSchema();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeSchema;

// ********** End Class UStateTreeSchema ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
