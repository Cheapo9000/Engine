// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DecalComponent.h"

#ifdef ENGINE_DecalComponent_generated_h
#error "DecalComponent.generated.h already included, missing '#pragma once' in DecalComponent.h"
#endif
#define ENGINE_DecalComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
struct FLinearColor;

// ********** Begin Class UDecalComponent **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetDecalMaterial); \
	DECLARE_FUNCTION(execSetDecalMaterial); \
	DECLARE_FUNCTION(execSetDecalColor); \
	DECLARE_FUNCTION(execSetSortOrder); \
	DECLARE_FUNCTION(execSetFadeScreenSize); \
	DECLARE_FUNCTION(execSetFadeIn); \
	DECLARE_FUNCTION(execSetFadeOut); \
	DECLARE_FUNCTION(execGetFadeInDuration); \
	DECLARE_FUNCTION(execGetFadeInStartDelay); \
	DECLARE_FUNCTION(execGetFadeDuration); \
	DECLARE_FUNCTION(execGetFadeStartDelay);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDecalComponent, ENGINE_API)


struct Z_Construct_UClass_UDecalComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUDecalComponent(); \
	friend struct ::Z_Construct_UClass_UDecalComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDecalComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDecalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDecalComponent_NoRegister) \
	DECLARE_SERIALIZER(UDecalComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDecalComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDecalComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDecalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecalComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDecalComponent(UDecalComponent&&) = delete; \
	UDecalComponent(const UDecalComponent&) = delete; \
	ENGINE_API virtual ~UDecalComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDecalComponent;

// ********** End Class UDecalComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
