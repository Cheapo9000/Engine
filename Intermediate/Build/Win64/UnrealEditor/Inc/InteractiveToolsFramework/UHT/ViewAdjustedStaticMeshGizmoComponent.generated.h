// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/ViewAdjustedStaticMeshGizmoComponent.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_ViewAdjustedStaticMeshGizmoComponent_generated_h
#error "ViewAdjustedStaticMeshGizmoComponent.generated.h already included, missing '#pragma once' in ViewAdjustedStaticMeshGizmoComponent.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_ViewAdjustedStaticMeshGizmoComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UViewAdjustedStaticMeshGizmoComponent ************************************
struct Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewAdjustedStaticMeshGizmoComponent(); \
	friend struct ::Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewAdjustedStaticMeshGizmoComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_NoRegister) \
	DECLARE_SERIALIZER(UViewAdjustedStaticMeshGizmoComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UViewAdjustedStaticMeshGizmoComponent*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UViewAdjustedStaticMeshGizmoComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewAdjustedStaticMeshGizmoComponent(UViewAdjustedStaticMeshGizmoComponent&&) = delete; \
	UViewAdjustedStaticMeshGizmoComponent(const UViewAdjustedStaticMeshGizmoComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UViewAdjustedStaticMeshGizmoComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewAdjustedStaticMeshGizmoComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewAdjustedStaticMeshGizmoComponent) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UViewAdjustedStaticMeshGizmoComponent();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h_23_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewAdjustedStaticMeshGizmoComponent;

// ********** End Class UViewAdjustedStaticMeshGizmoComponent **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ViewAdjustedStaticMeshGizmoComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
