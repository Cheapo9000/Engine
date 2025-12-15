// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BoundsCopyComponent.h"

#ifdef ENGINE_BoundsCopyComponent_generated_h
#error "BoundsCopyComponent.generated.h already included, missing '#pragma once' in BoundsCopyComponent.h"
#endif
#define ENGINE_BoundsCopyComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBoundsCopyComponent *****************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execSetTransformToBounds); \
	DECLARE_FUNCTION(execSetRotation);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UBoundsCopyComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBoundsCopyComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBoundsCopyComponent(); \
	friend struct ::Z_Construct_UClass_UBoundsCopyComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBoundsCopyComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoundsCopyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBoundsCopyComponent_NoRegister) \
	DECLARE_SERIALIZER(UBoundsCopyComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBoundsCopyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoundsCopyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBoundsCopyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoundsCopyComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoundsCopyComponent(UBoundsCopyComponent&&) = delete; \
	UBoundsCopyComponent(const UBoundsCopyComponent&) = delete; \
	ENGINE_API virtual ~UBoundsCopyComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoundsCopyComponent;

// ********** End Class UBoundsCopyComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
