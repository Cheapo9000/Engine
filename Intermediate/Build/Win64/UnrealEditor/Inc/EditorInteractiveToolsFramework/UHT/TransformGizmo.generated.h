// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorGizmos/TransformGizmo.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_TransformGizmo_generated_h
#error "TransformGizmo.generated.h already included, missing '#pragma once' in TransformGizmo.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_TransformGizmo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGizmosParameters *************************************************
struct Z_Construct_UScriptStruct_FGizmosParameters_Statics;
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGizmosParameters_Statics; \
	EDITORINTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FGizmosParameters;
// ********** End ScriptStruct FGizmosParameters ***************************************************

// ********** Begin Class UTransformGizmo **********************************************************
struct Z_Construct_UClass_UTransformGizmo_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformGizmo_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformGizmo(); \
	friend struct ::Z_Construct_UClass_UTransformGizmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UTransformGizmo_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransformGizmo, UInteractiveGizmo, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UTransformGizmo_NoRegister) \
	DECLARE_SERIALIZER(UTransformGizmo)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_150_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UTransformGizmo(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransformGizmo(UTransformGizmo&&) = delete; \
	UTransformGizmo(const UTransformGizmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UTransformGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTransformGizmo) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UTransformGizmo();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_147_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_150_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransformGizmo;

// ********** End Class UTransformGizmo ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h

// ********** Begin Enum ETransformGizmoPartIdentifier *********************************************
#define FOREACH_ENUM_ETRANSFORMGIZMOPARTIDENTIFIER(op) \
	op(ETransformGizmoPartIdentifier::Default) \
	op(ETransformGizmoPartIdentifier::TranslateAll) \
	op(ETransformGizmoPartIdentifier::TranslateXAxis) \
	op(ETransformGizmoPartIdentifier::TranslateYAxis) \
	op(ETransformGizmoPartIdentifier::TranslateZAxis) \
	op(ETransformGizmoPartIdentifier::TranslateXYPlanar) \
	op(ETransformGizmoPartIdentifier::TranslateYZPlanar) \
	op(ETransformGizmoPartIdentifier::TranslateXZPlanar) \
	op(ETransformGizmoPartIdentifier::TranslateScreenSpace) \
	op(ETransformGizmoPartIdentifier::RotateAll) \
	op(ETransformGizmoPartIdentifier::RotateXAxis) \
	op(ETransformGizmoPartIdentifier::RotateYAxis) \
	op(ETransformGizmoPartIdentifier::RotateZAxis) \
	op(ETransformGizmoPartIdentifier::RotateScreenSpace) \
	op(ETransformGizmoPartIdentifier::RotateArcball) \
	op(ETransformGizmoPartIdentifier::RotateXGimbal) \
	op(ETransformGizmoPartIdentifier::RotateYGimbal) \
	op(ETransformGizmoPartIdentifier::RotateZGimbal) \
	op(ETransformGizmoPartIdentifier::ScaleAll) \
	op(ETransformGizmoPartIdentifier::ScaleXAxis) \
	op(ETransformGizmoPartIdentifier::ScaleYAxis) \
	op(ETransformGizmoPartIdentifier::ScaleZAxis) \
	op(ETransformGizmoPartIdentifier::ScaleXYPlanar) \
	op(ETransformGizmoPartIdentifier::ScaleYZPlanar) \
	op(ETransformGizmoPartIdentifier::ScaleXZPlanar) \
	op(ETransformGizmoPartIdentifier::ScaleUniform) \
	op(ETransformGizmoPartIdentifier::Max) 

enum class ETransformGizmoPartIdentifier;
template<> struct TIsUEnumClass<ETransformGizmoPartIdentifier> { enum { Value = true }; };
template<> EDITORINTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<ETransformGizmoPartIdentifier>();
// ********** End Enum ETransformGizmoPartIdentifier ***********************************************

// ********** Begin Enum EAxisRotateMode ***********************************************************
#define FOREACH_ENUM_EAXISROTATEMODE(op) \
	op(EAxisRotateMode::Pull) \
	op(EAxisRotateMode::Arc) \
	op(EAxisRotateMode::ScreenArc) 

namespace EAxisRotateMode { enum Type : uint8; }
template<> EDITORINTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EAxisRotateMode::Type>();
// ********** End Enum EAxisRotateMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
