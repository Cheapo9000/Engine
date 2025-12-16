// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PawnComponent.h"

#ifdef MODULARGAMEPLAY_PawnComponent_generated_h
#error "PawnComponent.generated.h already included, missing '#pragma once' in PawnComponent.h"
#endif
#define MODULARGAMEPLAY_PawnComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPawnComponent ***********************************************************
struct Z_Construct_UClass_UPawnComponent_Statics;
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnComponent(); \
	friend struct ::Z_Construct_UClass_UPawnComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODULARGAMEPLAY_API UClass* ::Z_Construct_UClass_UPawnComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPawnComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplay"), Z_Construct_UClass_UPawnComponent_NoRegister) \
	DECLARE_SERIALIZER(UPawnComponent)


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPawnComponent(UPawnComponent&&) = delete; \
	UPawnComponent(const UPawnComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODULARGAMEPLAY_API, UPawnComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnComponent) \
	MODULARGAMEPLAY_API virtual ~UPawnComponent();


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPawnComponent;

// ********** End Class UPawnComponent *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
