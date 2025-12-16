// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/AvaGizmoComponent.h"

#ifdef AVALANCHE_AvaGizmoComponent_generated_h
#error "AvaGizmoComponent.generated.h already included, missing '#pragma once' in AvaGizmoComponent.h"
#endif
#define AVALANCHE_AvaGizmoComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaGizmoComponentPrimitiveValues *********************************
struct Z_Construct_UScriptStruct_FAvaGizmoComponentPrimitiveValues_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaGizmoComponentPrimitiveValues_Statics; \
	AVALANCHE_API static class UScriptStruct* StaticStruct();


struct FAvaGizmoComponentPrimitiveValues;
// ********** End ScriptStruct FAvaGizmoComponentPrimitiveValues ***********************************

// ********** Begin Class UAvaGizmoComponent *******************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h_83_ACCESSORS \
static void GetbIsGizmoEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsGizmoEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetbApplyToChildActors_WrapperImpl(const void* Object, void* OutValue); \
static void SetbApplyToChildActors_WrapperImpl(void* Object, const void* InValue); \
static void GetMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetbCastShadow_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCastShadow_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsVisibleInEditor_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsVisibleInEditor_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsHiddenInGame_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsHiddenInGame_WrapperImpl(void* Object, const void* InValue); \
static void GetbRenderInMainPass_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRenderInMainPass_WrapperImpl(void* Object, const void* InValue); \
static void GetbRenderDepth_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRenderDepth_WrapperImpl(void* Object, const void* InValue); \
static void GetbDrawWireframe_WrapperImpl(const void* Object, void* OutValue); \
static void SetbDrawWireframe_WrapperImpl(void* Object, const void* InValue); \
static void GetWireframeColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetWireframeColor_WrapperImpl(void* Object, const void* InValue); \
static void GetbSetStencil_WrapperImpl(const void* Object, void* OutValue); \
static void SetbSetStencil_WrapperImpl(void* Object, const void* InValue); \
static void GetStencilId_WrapperImpl(const void* Object, void* OutValue); \
static void SetStencilId_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaGizmoComponent_Statics;
AVALANCHE_API UClass* Z_Construct_UClass_UAvaGizmoComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaGizmoComponent(); \
	friend struct ::Z_Construct_UClass_UAvaGizmoComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHE_API UClass* ::Z_Construct_UClass_UAvaGizmoComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaGizmoComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Avalanche"), Z_Construct_UClass_UAvaGizmoComponent_NoRegister) \
	DECLARE_SERIALIZER(UAvaGizmoComponent)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h_83_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaGizmoComponent(UAvaGizmoComponent&&) = delete; \
	UAvaGizmoComponent(const UAvaGizmoComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaGizmoComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaGizmoComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaGizmoComponent) \
	NO_API virtual ~UAvaGizmoComponent();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h_83_AUTOGETTERSETTER_DECLS \
	const FLinearColor GetWireframeColor() const;


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h_80_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h_83_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h_83_AUTOGETTERSETTER_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaGizmoComponent;

// ********** End Class UAvaGizmoComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_AvaGizmoComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
