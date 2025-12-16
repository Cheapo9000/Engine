// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StateTreeAIComponent.h"

#ifdef GAMEPLAYSTATETREEMODULE_StateTreeAIComponent_generated_h
#error "StateTreeAIComponent.generated.h already included, missing '#pragma once' in StateTreeAIComponent.h"
#endif
#define GAMEPLAYSTATETREEMODULE_StateTreeAIComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeAIComponent ****************************************************
struct Z_Construct_UClass_UStateTreeAIComponent_Statics;
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeAIComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeAIComponent(); \
	friend struct ::Z_Construct_UClass_UStateTreeAIComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYSTATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeAIComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeAIComponent, UStateTreeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayStateTreeModule"), Z_Construct_UClass_UStateTreeAIComponent_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeAIComponent)


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYSTATETREEMODULE_API UStateTreeAIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeAIComponent(UStateTreeAIComponent&&) = delete; \
	UStateTreeAIComponent(const UStateTreeAIComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYSTATETREEMODULE_API, UStateTreeAIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeAIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeAIComponent) \
	GAMEPLAYSTATETREEMODULE_API virtual ~UStateTreeAIComponent();


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponent_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeAIComponent;

// ********** End Class UStateTreeAIComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeAIComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
