// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREditorWidgetComponent.h"

#ifdef VREDITOR_VREditorWidgetComponent_generated_h
#error "VREditorWidgetComponent.generated.h already included, missing '#pragma once' in VREditorWidgetComponent.h"
#endif
#define VREDITOR_VREditorWidgetComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVREditorWidgetComponent *************************************************
struct Z_Construct_UClass_UVREditorWidgetComponent_Statics;
VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Private_VREditorWidgetComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorWidgetComponent(); \
	friend struct ::Z_Construct_UClass_UVREditorWidgetComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_UVREditorWidgetComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVREditorWidgetComponent, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_UVREditorWidgetComponent_NoRegister) \
	DECLARE_SERIALIZER(UVREditorWidgetComponent)


#define FID_Engine_Source_Editor_VREditor_Private_VREditorWidgetComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVREditorWidgetComponent(UVREditorWidgetComponent&&) = delete; \
	UVREditorWidgetComponent(const UVREditorWidgetComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorWidgetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorWidgetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVREditorWidgetComponent) \
	NO_API virtual ~UVREditorWidgetComponent();


#define FID_Engine_Source_Editor_VREditor_Private_VREditorWidgetComponent_h_20_PROLOG
#define FID_Engine_Source_Editor_VREditor_Private_VREditorWidgetComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Private_VREditorWidgetComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Private_VREditorWidgetComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVREditorWidgetComponent;

// ********** End Class UVREditorWidgetComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Private_VREditorWidgetComponent_h

// ********** Begin Enum EVREditorWidgetDrawingPolicy **********************************************
#define FOREACH_ENUM_EVREDITORWIDGETDRAWINGPOLICY(op) \
	op(EVREditorWidgetDrawingPolicy::Always) \
	op(EVREditorWidgetDrawingPolicy::Hovering) 

enum class EVREditorWidgetDrawingPolicy : uint8;
template<> struct TIsUEnumClass<EVREditorWidgetDrawingPolicy> { enum { Value = true }; };
template<> VREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EVREditorWidgetDrawingPolicy>();
// ********** End Enum EVREditorWidgetDrawingPolicy ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
