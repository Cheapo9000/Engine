// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoArrowComponent.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoArrowComponent_generated_h
#error "GizmoArrowComponent.generated.h already included, missing '#pragma once' in GizmoArrowComponent.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoArrowComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoArrowComponent *****************************************************
struct Z_Construct_UClass_UGizmoArrowComponent_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoArrowComponent_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoArrowComponent(); \
	friend struct ::Z_Construct_UClass_UGizmoArrowComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoArrowComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoArrowComponent, UGizmoBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoArrowComponent_NoRegister) \
	DECLARE_SERIALIZER(UGizmoArrowComponent)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoArrowComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoArrowComponent(UGizmoArrowComponent&&) = delete; \
	UGizmoArrowComponent(const UGizmoArrowComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoArrowComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoArrowComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoArrowComponent) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoArrowComponent();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h_14_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoArrowComponent;

// ********** End Class UGizmoArrowComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
