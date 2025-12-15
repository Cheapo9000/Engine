// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementSphere.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementSphere_generated_h
#error "GizmoElementSphere.generated.h already included, missing '#pragma once' in GizmoElementSphere.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementSphere_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoElementSphere ******************************************************
struct Z_Construct_UClass_UGizmoElementSphere_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementSphere_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementSphere_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementSphere(); \
	friend struct ::Z_Construct_UClass_UGizmoElementSphere_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoElementSphere_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoElementSphere, UGizmoElementBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoElementSphere_NoRegister) \
	DECLARE_SERIALIZER(UGizmoElementSphere)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementSphere_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoElementSphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoElementSphere(UGizmoElementSphere&&) = delete; \
	UGizmoElementSphere(const UGizmoElementSphere&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementSphere); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoElementSphere) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementSphere();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementSphere_h_16_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementSphere_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementSphere_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementSphere_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoElementSphere;

// ********** End Class UGizmoElementSphere ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementSphere_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
