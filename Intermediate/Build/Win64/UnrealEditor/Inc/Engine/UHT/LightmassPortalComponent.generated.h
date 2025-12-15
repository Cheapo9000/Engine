// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LightmassPortalComponent.h"

#ifdef ENGINE_LightmassPortalComponent_generated_h
#error "LightmassPortalComponent.generated.h already included, missing '#pragma once' in LightmassPortalComponent.h"
#endif
#define ENGINE_LightmassPortalComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULightmassPortalComponent ************************************************
struct Z_Construct_UClass_ULightmassPortalComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULightmassPortalComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULightmassPortalComponent(); \
	friend struct ::Z_Construct_UClass_ULightmassPortalComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULightmassPortalComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightmassPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULightmassPortalComponent_NoRegister) \
	DECLARE_SERIALIZER(ULightmassPortalComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightmassPortalComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightmassPortalComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightmassPortalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightmassPortalComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightmassPortalComponent(ULightmassPortalComponent&&) = delete; \
	ULightmassPortalComponent(const ULightmassPortalComponent&) = delete; \
	ENGINE_API virtual ~ULightmassPortalComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightmassPortalComponent;

// ********** End Class ULightmassPortalComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
