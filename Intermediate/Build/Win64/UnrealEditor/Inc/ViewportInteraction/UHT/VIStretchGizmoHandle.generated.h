// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gizmo/VIStretchGizmoHandle.h"

#ifdef VIEWPORTINTERACTION_VIStretchGizmoHandle_generated_h
#error "VIStretchGizmoHandle.generated.h already included, missing '#pragma once' in VIStretchGizmoHandle.h"
#endif
#define VIEWPORTINTERACTION_VIStretchGizmoHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStretchGizmoHandleGroup *************************************************
struct Z_Construct_UClass_UStretchGizmoHandleGroup_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleGroup_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStretchGizmoHandleGroup(); \
	friend struct ::Z_Construct_UClass_UStretchGizmoHandleGroup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UStretchGizmoHandleGroup_NoRegister(); \
public: \
	DECLARE_CLASS2(UStretchGizmoHandleGroup, UGizmoHandleGroup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UStretchGizmoHandleGroup_NoRegister) \
	DECLARE_SERIALIZER(UStretchGizmoHandleGroup)


#define FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStretchGizmoHandleGroup(UStretchGizmoHandleGroup&&) = delete; \
	UStretchGizmoHandleGroup(const UStretchGizmoHandleGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UStretchGizmoHandleGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStretchGizmoHandleGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStretchGizmoHandleGroup) \
	VIEWPORTINTERACTION_API virtual ~UStretchGizmoHandleGroup();


#define FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_21_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStretchGizmoHandleGroup;

// ********** End Class UStretchGizmoHandleGroup ***************************************************

// ********** Begin Class UStretchGizmoHandleDragOperation *****************************************
struct Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleDragOperation_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStretchGizmoHandleDragOperation(); \
	friend struct ::Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UStretchGizmoHandleDragOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UStretchGizmoHandleDragOperation, UViewportDragOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UStretchGizmoHandleDragOperation_NoRegister) \
	DECLARE_SERIALIZER(UStretchGizmoHandleDragOperation)


#define FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStretchGizmoHandleDragOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStretchGizmoHandleDragOperation(UStretchGizmoHandleDragOperation&&) = delete; \
	UStretchGizmoHandleDragOperation(const UStretchGizmoHandleDragOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStretchGizmoHandleDragOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStretchGizmoHandleDragOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStretchGizmoHandleDragOperation) \
	NO_API virtual ~UStretchGizmoHandleDragOperation();


#define FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_42_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStretchGizmoHandleDragOperation;

// ********** End Class UStretchGizmoHandleDragOperation *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Private_Gizmo_VIStretchGizmoHandle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
