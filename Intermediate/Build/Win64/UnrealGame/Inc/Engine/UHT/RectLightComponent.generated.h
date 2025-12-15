// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RectLightComponent.h"

#ifdef ENGINE_RectLightComponent_generated_h
#error "RectLightComponent.generated.h already included, missing '#pragma once' in RectLightComponent.h"
#endif
#define ENGINE_RectLightComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FAssetData;

// ********** Begin Class URectLightComponent ******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetBarnDoorLength); \
	DECLARE_FUNCTION(execSetBarnDoorAngle); \
	DECLARE_FUNCTION(execSetSourceHeight); \
	DECLARE_FUNCTION(execSetSourceWidth); \
	DECLARE_FUNCTION(execSetSourceTexture);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execShouldFilterSourceTexture);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URectLightComponent, ENGINE_API)


struct Z_Construct_UClass_URectLightComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_URectLightComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesURectLightComponent(); \
	friend struct ::Z_Construct_UClass_URectLightComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URectLightComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URectLightComponent, ULocalLightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URectLightComponent_NoRegister) \
	DECLARE_SERIALIZER(URectLightComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URectLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URectLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URectLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URectLightComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URectLightComponent(URectLightComponent&&) = delete; \
	URectLightComponent(const URectLightComponent&) = delete; \
	ENGINE_API virtual ~URectLightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URectLightComponent;

// ********** End Class URectLightComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
