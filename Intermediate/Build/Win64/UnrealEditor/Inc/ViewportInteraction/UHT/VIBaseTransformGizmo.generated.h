// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VIBaseTransformGizmo.h"

#ifdef VIEWPORTINTERACTION_VIBaseTransformGizmo_generated_h
#error "VIBaseTransformGizmo.generated.h already included, missing '#pragma once' in VIBaseTransformGizmo.h"
#endif
#define VIEWPORTINTERACTION_VIBaseTransformGizmo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTransformGizmoMeasurement ****************************************
struct Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics;
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics; \
	VIEWPORTINTERACTION_API static class UScriptStruct* StaticStruct();


struct FTransformGizmoMeasurement;
// ********** End ScriptStruct FTransformGizmoMeasurement ******************************************

// ********** Begin Class ABaseTransformGizmo ******************************************************
struct Z_Construct_UClass_ABaseTransformGizmo_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_ABaseTransformGizmo_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseTransformGizmo(); \
	friend struct ::Z_Construct_UClass_ABaseTransformGizmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_ABaseTransformGizmo_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseTransformGizmo, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_ABaseTransformGizmo_NoRegister) \
	DECLARE_SERIALIZER(ABaseTransformGizmo)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_49_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseTransformGizmo(ABaseTransformGizmo&&) = delete; \
	ABaseTransformGizmo(const ABaseTransformGizmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, ABaseTransformGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTransformGizmo); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABaseTransformGizmo) \
	VIEWPORTINTERACTION_API virtual ~ABaseTransformGizmo();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_46_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseTransformGizmo;

// ********** End Class ABaseTransformGizmo ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h

// ********** Begin Enum EGizmoHandleTypes *********************************************************
#define FOREACH_ENUM_EGIZMOHANDLETYPES(op) \
	op(EGizmoHandleTypes::All) \
	op(EGizmoHandleTypes::Translate) \
	op(EGizmoHandleTypes::Rotate) \
	op(EGizmoHandleTypes::Scale) 

enum class EGizmoHandleTypes : uint8;
template<> struct TIsUEnumClass<EGizmoHandleTypes> { enum { Value = true }; };
template<> VIEWPORTINTERACTION_NON_ATTRIBUTED_API UEnum* StaticEnum<EGizmoHandleTypes>();
// ********** End Enum EGizmoHandleTypes ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
