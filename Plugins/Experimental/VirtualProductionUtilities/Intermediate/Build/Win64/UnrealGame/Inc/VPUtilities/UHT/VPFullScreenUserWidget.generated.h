// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/VPFullScreenUserWidget.h"

#ifdef VPUTILITIES_VPFullScreenUserWidget_generated_h
#error "VPFullScreenUserWidget.generated.h already included, missing '#pragma once' in VPFullScreenUserWidget.h"
#endif
#define VPUTILITIES_VPFullScreenUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVPFullScreenUserWidget_Viewport **********************************
struct Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics;
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics; \
	VPUTILITIES_API static class UScriptStruct* StaticStruct();


struct FVPFullScreenUserWidget_Viewport;
// ********** End ScriptStruct FVPFullScreenUserWidget_Viewport ************************************

// ********** Begin Class UVPFullScreenUserWidget **************************************************
struct Z_Construct_UClass_UVPFullScreenUserWidget_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPFullScreenUserWidget(); \
	friend struct ::Z_Construct_UClass_UVPFullScreenUserWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPFullScreenUserWidget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister) \
	DECLARE_SERIALIZER(UVPFullScreenUserWidget)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_80_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPFullScreenUserWidget(UVPFullScreenUserWidget&&) = delete; \
	UVPFullScreenUserWidget(const UVPFullScreenUserWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPFullScreenUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPFullScreenUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPFullScreenUserWidget) \
	NO_API virtual ~UVPFullScreenUserWidget();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_77_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPFullScreenUserWidget;

// ********** End Class UVPFullScreenUserWidget ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h

// ********** Begin Enum EVPWidgetDisplayType ******************************************************
#define FOREACH_ENUM_EVPWIDGETDISPLAYTYPE(op) \
	op(EVPWidgetDisplayType::Inactive) \
	op(EVPWidgetDisplayType::Viewport) \
	op(EVPWidgetDisplayType::PostProcessWithBlendMaterial) \
	op(EVPWidgetDisplayType::Composure) \
	op(EVPWidgetDisplayType::PostProcessSceneViewExtension) 

enum class EVPWidgetDisplayType : uint8;
template<> struct TIsUEnumClass<EVPWidgetDisplayType> { enum { Value = true }; };
template<> VPUTILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EVPWidgetDisplayType>();
// ********** End Enum EVPWidgetDisplayType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
