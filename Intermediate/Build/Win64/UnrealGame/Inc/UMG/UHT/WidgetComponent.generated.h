// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WidgetComponent.h"

#ifdef UMG_WidgetComponent_generated_h
#error "WidgetComponent.generated.h already included, missing '#pragma once' in WidgetComponent.h"
#endif
#define UMG_WidgetComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULocalPlayer;
class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;
class UUserWidget;
enum class ETickMode : uint8;
enum class EWidgetGeometryMode : uint8;
enum class EWidgetSpace : uint8;
enum class EWindowVisibility : uint8;
struct FLinearColor;

// ********** Begin Class UWidgetComponent *********************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_96_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsWidgetVisible); \
	DECLARE_FUNCTION(execSetTickMode); \
	DECLARE_FUNCTION(execSetWindowVisibility); \
	DECLARE_FUNCTION(execGetWindowVisiblility); \
	DECLARE_FUNCTION(execSetWindowFocusable); \
	DECLARE_FUNCTION(execGetWindowFocusable); \
	DECLARE_FUNCTION(execSetCylinderArcAngle); \
	DECLARE_FUNCTION(execGetCylinderArcAngle); \
	DECLARE_FUNCTION(execSetGeometryMode); \
	DECLARE_FUNCTION(execGetGeometryMode); \
	DECLARE_FUNCTION(execSetWidgetSpace); \
	DECLARE_FUNCTION(execGetWidgetSpace); \
	DECLARE_FUNCTION(execSetRedrawTime); \
	DECLARE_FUNCTION(execGetRedrawTime); \
	DECLARE_FUNCTION(execSetDrawAtDesiredSize); \
	DECLARE_FUNCTION(execGetDrawAtDesiredSize); \
	DECLARE_FUNCTION(execSetPivot); \
	DECLARE_FUNCTION(execGetPivot); \
	DECLARE_FUNCTION(execSetTintColorAndOpacity); \
	DECLARE_FUNCTION(execSetBackgroundColor); \
	DECLARE_FUNCTION(execSetTickWhenOffscreen); \
	DECLARE_FUNCTION(execGetTickWhenOffscreen); \
	DECLARE_FUNCTION(execSetTwoSided); \
	DECLARE_FUNCTION(execGetTwoSided); \
	DECLARE_FUNCTION(execRequestRenderUpdate); \
	DECLARE_FUNCTION(execRequestRedraw); \
	DECLARE_FUNCTION(execSetDrawSize); \
	DECLARE_FUNCTION(execGetCurrentDrawSize); \
	DECLARE_FUNCTION(execGetDrawSize); \
	DECLARE_FUNCTION(execGetOwnerPlayer); \
	DECLARE_FUNCTION(execSetManuallyRedraw); \
	DECLARE_FUNCTION(execGetManuallyRedraw); \
	DECLARE_FUNCTION(execSetOwnerPlayer); \
	DECLARE_FUNCTION(execSetWidget); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execGetMaterialInstance); \
	DECLARE_FUNCTION(execGetRenderTarget); \
	DECLARE_FUNCTION(execGetUserWidgetObject);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_96_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetComponent, UMG_API)


struct Z_Construct_UClass_UWidgetComponent_Statics;
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetComponent(); \
	friend struct ::Z_Construct_UClass_UWidgetComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWidgetComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWidgetComponent_NoRegister) \
	DECLARE_SERIALIZER(UWidgetComponent) \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_96_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetComponent(UWidgetComponent&&) = delete; \
	UWidgetComponent(const UWidgetComponent&) = delete; \
	UMG_API virtual ~UWidgetComponent();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_93_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_96_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_96_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetComponent;

// ********** End Class UWidgetComponent ***********************************************************

// ********** Begin ScriptStruct FWidgetComponentInstanceData **************************************
struct Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_685_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics; \
	UMG_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


struct FWidgetComponentInstanceData;
// ********** End ScriptStruct FWidgetComponentInstanceData ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h

// ********** Begin Enum EWidgetSpace **************************************************************
#define FOREACH_ENUM_EWIDGETSPACE(op) \
	op(EWidgetSpace::World) \
	op(EWidgetSpace::Screen) 

enum class EWidgetSpace : uint8;
template<> struct TIsUEnumClass<EWidgetSpace> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<EWidgetSpace>();
// ********** End Enum EWidgetSpace ****************************************************************

// ********** Begin Enum EWidgetTimingPolicy *******************************************************
#define FOREACH_ENUM_EWIDGETTIMINGPOLICY(op) \
	op(EWidgetTimingPolicy::RealTime) \
	op(EWidgetTimingPolicy::GameTime) 

enum class EWidgetTimingPolicy : uint8;
template<> struct TIsUEnumClass<EWidgetTimingPolicy> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<EWidgetTimingPolicy>();
// ********** End Enum EWidgetTimingPolicy *********************************************************

// ********** Begin Enum EWidgetBlendMode **********************************************************
#define FOREACH_ENUM_EWIDGETBLENDMODE(op) \
	op(EWidgetBlendMode::Opaque) \
	op(EWidgetBlendMode::Masked) \
	op(EWidgetBlendMode::Transparent) 

enum class EWidgetBlendMode : uint8;
template<> struct TIsUEnumClass<EWidgetBlendMode> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<EWidgetBlendMode>();
// ********** End Enum EWidgetBlendMode ************************************************************

// ********** Begin Enum EWidgetGeometryMode *******************************************************
#define FOREACH_ENUM_EWIDGETGEOMETRYMODE(op) \
	op(EWidgetGeometryMode::Plane) \
	op(EWidgetGeometryMode::Cylinder) 

enum class EWidgetGeometryMode : uint8;
template<> struct TIsUEnumClass<EWidgetGeometryMode> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<EWidgetGeometryMode>();
// ********** End Enum EWidgetGeometryMode *********************************************************

// ********** Begin Enum EWindowVisibility *********************************************************
#define FOREACH_ENUM_EWINDOWVISIBILITY(op) \
	op(EWindowVisibility::Visible) \
	op(EWindowVisibility::SelfHitTestInvisible) 

enum class EWindowVisibility : uint8;
template<> struct TIsUEnumClass<EWindowVisibility> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<EWindowVisibility>();
// ********** End Enum EWindowVisibility ***********************************************************

// ********** Begin Enum ETickMode *****************************************************************
#define FOREACH_ENUM_ETICKMODE(op) \
	op(ETickMode::Disabled) \
	op(ETickMode::Enabled) \
	op(ETickMode::Automatic) 

enum class ETickMode : uint8;
template<> struct TIsUEnumClass<ETickMode> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<ETickMode>();
// ********** End Enum ETickMode *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
