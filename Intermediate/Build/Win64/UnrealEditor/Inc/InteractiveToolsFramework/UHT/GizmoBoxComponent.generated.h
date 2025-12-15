// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoBoxComponent.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoBoxComponent_generated_h
#error "GizmoBoxComponent.generated.h already included, missing '#pragma once' in GizmoBoxComponent.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoBoxComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoBoxComponent *******************************************************
struct Z_Construct_UClass_UGizmoBoxComponent_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBoxComponent_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoBoxComponent(); \
	friend struct ::Z_Construct_UClass_UGizmoBoxComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoBoxComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoBoxComponent, UGizmoBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoBoxComponent_NoRegister) \
	DECLARE_SERIALIZER(UGizmoBoxComponent)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoBoxComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoBoxComponent(UGizmoBoxComponent&&) = delete; \
	UGizmoBoxComponent(const UGizmoBoxComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoBoxComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoBoxComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoBoxComponent) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoBoxComponent();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_14_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoBoxComponent;

// ********** End Class UGizmoBoxComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
