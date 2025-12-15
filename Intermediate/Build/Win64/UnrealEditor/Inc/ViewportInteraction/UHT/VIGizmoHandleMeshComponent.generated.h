// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VIGizmoHandleMeshComponent.h"

#ifdef VIEWPORTINTERACTION_VIGizmoHandleMeshComponent_generated_h
#error "VIGizmoHandleMeshComponent.generated.h already included, missing '#pragma once' in VIGizmoHandleMeshComponent.h"
#endif
#define VIEWPORTINTERACTION_VIGizmoHandleMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoHandleMeshComponent ************************************************
struct Z_Construct_UClass_UGizmoHandleMeshComponent_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoHandleMeshComponent(); \
	friend struct ::Z_Construct_UClass_UGizmoHandleMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoHandleMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UGizmoHandleMeshComponent)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoHandleMeshComponent(UGizmoHandleMeshComponent&&) = delete; \
	UGizmoHandleMeshComponent(const UGizmoHandleMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoHandleMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoHandleMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoHandleMeshComponent) \
	NO_API virtual ~UGizmoHandleMeshComponent();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h_9_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoHandleMeshComponent;

// ********** End Class UGizmoHandleMeshComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
