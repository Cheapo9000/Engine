// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PlayerStateComponent.h"

#ifdef MODULARGAMEPLAY_PlayerStateComponent_generated_h
#error "PlayerStateComponent.generated.h already included, missing '#pragma once' in PlayerStateComponent.h"
#endif
#define MODULARGAMEPLAY_PlayerStateComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlayerStateComponent ****************************************************
struct Z_Construct_UClass_UPlayerStateComponent_Statics;
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerStateComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerStateComponent(); \
	friend struct ::Z_Construct_UClass_UPlayerStateComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODULARGAMEPLAY_API UClass* ::Z_Construct_UClass_UPlayerStateComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerStateComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplay"), Z_Construct_UClass_UPlayerStateComponent_NoRegister) \
	DECLARE_SERIALIZER(UPlayerStateComponent)


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerStateComponent(UPlayerStateComponent&&) = delete; \
	UPlayerStateComponent(const UPlayerStateComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODULARGAMEPLAY_API, UPlayerStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStateComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStateComponent) \
	MODULARGAMEPLAY_API virtual ~UPlayerStateComponent();


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerStateComponent;

// ********** End Class UPlayerStateComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
