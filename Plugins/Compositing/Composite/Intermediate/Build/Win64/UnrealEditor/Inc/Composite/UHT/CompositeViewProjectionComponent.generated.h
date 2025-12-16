// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CompositeViewProjectionComponent.h"

#ifdef COMPOSITE_CompositeViewProjectionComponent_generated_h
#error "CompositeViewProjectionComponent.generated.h already included, missing '#pragma once' in CompositeViewProjectionComponent.h"
#endif
#define COMPOSITE_CompositeViewProjectionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FComponentReference;

// ********** Begin Class UCompositeViewProjectionComponent ****************************************
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeViewProjectionComponent_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetTargetComponent); \
	DECLARE_FUNCTION(execGetTargetComponent); \
	DECLARE_FUNCTION(execForceUpdate);


struct Z_Construct_UClass_UCompositeViewProjectionComponent_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositeViewProjectionComponent_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeViewProjectionComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCompositeViewProjectionComponent(); \
	friend struct ::Z_Construct_UClass_UCompositeViewProjectionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositeViewProjectionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeViewProjectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositeViewProjectionComponent_NoRegister) \
	DECLARE_SERIALIZER(UCompositeViewProjectionComponent)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeViewProjectionComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSITE_API UCompositeViewProjectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeViewProjectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositeViewProjectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeViewProjectionComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeViewProjectionComponent(UCompositeViewProjectionComponent&&) = delete; \
	UCompositeViewProjectionComponent(const UCompositeViewProjectionComponent&) = delete; \
	COMPOSITE_API virtual ~UCompositeViewProjectionComponent();


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeViewProjectionComponent_h_17_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeViewProjectionComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeViewProjectionComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeViewProjectionComponent_h_20_INCLASS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeViewProjectionComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeViewProjectionComponent;

// ********** End Class UCompositeViewProjectionComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeViewProjectionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
