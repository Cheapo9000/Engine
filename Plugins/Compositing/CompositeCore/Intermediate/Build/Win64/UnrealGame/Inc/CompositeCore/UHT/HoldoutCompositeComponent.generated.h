// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoldoutCompositeComponent.h"

#ifdef COMPOSITECORE_HoldoutCompositeComponent_generated_h
#error "HoldoutCompositeComponent.generated.h already included, missing '#pragma once' in HoldoutCompositeComponent.h"
#endif
#define COMPOSITECORE_HoldoutCompositeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoldoutCompositeComponent ***********************************************
#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled);


struct Z_Construct_UClass_UHoldoutCompositeComponent_Statics;
COMPOSITECORE_API UClass* Z_Construct_UClass_UHoldoutCompositeComponent_NoRegister();

#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHoldoutCompositeComponent(); \
	friend struct ::Z_Construct_UClass_UHoldoutCompositeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITECORE_API UClass* ::Z_Construct_UClass_UHoldoutCompositeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoldoutCompositeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompositeCore"), Z_Construct_UClass_UHoldoutCompositeComponent_NoRegister) \
	DECLARE_SERIALIZER(UHoldoutCompositeComponent)


#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSITECORE_API UHoldoutCompositeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoldoutCompositeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITECORE_API, UHoldoutCompositeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoldoutCompositeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoldoutCompositeComponent(UHoldoutCompositeComponent&&) = delete; \
	UHoldoutCompositeComponent(const UHoldoutCompositeComponent&) = delete; \
	COMPOSITECORE_API virtual ~UHoldoutCompositeComponent();


#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h_14_PROLOG
#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h_17_INCLASS \
	FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoldoutCompositeComponent;

// ********** End Class UHoldoutCompositeComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
