// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StateTreeComponentSchema.h"

#ifdef GAMEPLAYSTATETREEMODULE_StateTreeComponentSchema_generated_h
#error "StateTreeComponentSchema.generated.h already included, missing '#pragma once' in StateTreeComponentSchema.h"
#endif
#define GAMEPLAYSTATETREEMODULE_StateTreeComponentSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeComponentSchema ************************************************
struct Z_Construct_UClass_UStateTreeComponentSchema_Statics;
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeComponentSchema_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeComponentSchema(); \
	friend struct ::Z_Construct_UClass_UStateTreeComponentSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYSTATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeComponentSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeComponentSchema, UStateTreeSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayStateTreeModule"), Z_Construct_UClass_UStateTreeComponentSchema_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeComponentSchema)


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeComponentSchema(UStateTreeComponentSchema&&) = delete; \
	UStateTreeComponentSchema(const UStateTreeComponentSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYSTATETREEMODULE_API, UStateTreeComponentSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeComponentSchema); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateTreeComponentSchema) \
	GAMEPLAYSTATETREEMODULE_API virtual ~UStateTreeComponentSchema();


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeComponentSchema;

// ********** End Class UStateTreeComponentSchema **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h

// ********** Begin Enum EStateTreeComponentSchemaScheduledTickPolicy ******************************
#define FOREACH_ENUM_ESTATETREECOMPONENTSCHEMASCHEDULEDTICKPOLICY(op) \
	op(EStateTreeComponentSchemaScheduledTickPolicy::Default) \
	op(EStateTreeComponentSchemaScheduledTickPolicy::Allowed) \
	op(EStateTreeComponentSchemaScheduledTickPolicy::Denied) 

enum class EStateTreeComponentSchemaScheduledTickPolicy : uint8;
template<> struct TIsUEnumClass<EStateTreeComponentSchemaScheduledTickPolicy> { enum { Value = true }; };
template<> GAMEPLAYSTATETREEMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreeComponentSchemaScheduledTickPolicy>();
// ********** End Enum EStateTreeComponentSchemaScheduledTickPolicy ********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
