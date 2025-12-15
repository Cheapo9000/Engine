// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoCircleComponent.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoCircleComponent_generated_h
#error "GizmoCircleComponent.generated.h already included, missing '#pragma once' in GizmoCircleComponent.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoCircleComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoCircleComponent ****************************************************
struct Z_Construct_UClass_UGizmoCircleComponent_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoCircleComponent_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoCircleComponent(); \
	friend struct ::Z_Construct_UClass_UGizmoCircleComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoCircleComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoCircleComponent, UGizmoBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoCircleComponent_NoRegister) \
	DECLARE_SERIALIZER(UGizmoCircleComponent)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoCircleComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoCircleComponent(UGizmoCircleComponent&&) = delete; \
	UGizmoCircleComponent(const UGizmoCircleComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoCircleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoCircleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoCircleComponent) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoCircleComponent();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_14_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoCircleComponent;

// ********** End Class UGizmoCircleComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
