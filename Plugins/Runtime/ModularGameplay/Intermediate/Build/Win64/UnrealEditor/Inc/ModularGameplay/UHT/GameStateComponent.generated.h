// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GameStateComponent.h"

#ifdef MODULARGAMEPLAY_GameStateComponent_generated_h
#error "GameStateComponent.generated.h already included, missing '#pragma once' in GameStateComponent.h"
#endif
#define MODULARGAMEPLAY_GameStateComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameStateComponent ******************************************************
struct Z_Construct_UClass_UGameStateComponent_Statics;
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameStateComponent(); \
	friend struct ::Z_Construct_UClass_UGameStateComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODULARGAMEPLAY_API UClass* ::Z_Construct_UClass_UGameStateComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameStateComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplay"), Z_Construct_UClass_UGameStateComponent_NoRegister) \
	DECLARE_SERIALIZER(UGameStateComponent)


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameStateComponent(UGameStateComponent&&) = delete; \
	UGameStateComponent(const UGameStateComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODULARGAMEPLAY_API, UGameStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStateComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStateComponent) \
	MODULARGAMEPLAY_API virtual ~UGameStateComponent();


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameStateComponent;

// ********** End Class UGameStateComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
