// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ControllerComponent.h"

#ifdef MODULARGAMEPLAY_ControllerComponent_generated_h
#error "ControllerComponent.generated.h already included, missing '#pragma once' in ControllerComponent.h"
#endif
#define MODULARGAMEPLAY_ControllerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControllerComponent *****************************************************
struct Z_Construct_UClass_UControllerComponent_Statics;
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControllerComponent(); \
	friend struct ::Z_Construct_UClass_UControllerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODULARGAMEPLAY_API UClass* ::Z_Construct_UClass_UControllerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UControllerComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplay"), Z_Construct_UClass_UControllerComponent_NoRegister) \
	DECLARE_SERIALIZER(UControllerComponent)


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControllerComponent(UControllerComponent&&) = delete; \
	UControllerComponent(const UControllerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODULARGAMEPLAY_API, UControllerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControllerComponent) \
	MODULARGAMEPLAY_API virtual ~UControllerComponent();


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControllerComponent;

// ********** End Class UControllerComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
