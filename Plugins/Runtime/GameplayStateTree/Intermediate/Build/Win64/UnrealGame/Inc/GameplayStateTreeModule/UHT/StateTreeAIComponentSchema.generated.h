// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StateTreeAIComponentSchema.h"

#ifdef GAMEPLAYSTATETREEMODULE_StateTreeAIComponentSchema_generated_h
#error "StateTreeAIComponentSchema.generated.h already included, missing '#pragma once' in StateTreeAIComponentSchema.h"
#endif
#define GAMEPLAYSTATETREEMODULE_StateTreeAIComponentSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeAIComponentSchema **********************************************
struct Z_Construct_UClass_UStateTreeAIComponentSchema_Statics;
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeAIComponentSchema_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponentSchema_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeAIComponentSchema(); \
	friend struct ::Z_Construct_UClass_UStateTreeAIComponentSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYSTATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeAIComponentSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeAIComponentSchema, UStateTreeComponentSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayStateTreeModule"), Z_Construct_UClass_UStateTreeAIComponentSchema_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeAIComponentSchema)


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponentSchema_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeAIComponentSchema(UStateTreeAIComponentSchema&&) = delete; \
	UStateTreeAIComponentSchema(const UStateTreeAIComponentSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYSTATETREEMODULE_API, UStateTreeAIComponentSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeAIComponentSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeAIComponentSchema) \
	GAMEPLAYSTATETREEMODULE_API virtual ~UStateTreeAIComponentSchema();


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponentSchema_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponentSchema_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponentSchema_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponentSchema_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeAIComponentSchema;

// ********** End Class UStateTreeAIComponentSchema ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponentSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
