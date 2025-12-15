// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementCylinder.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementCylinder_generated_h
#error "GizmoElementCylinder.generated.h already included, missing '#pragma once' in GizmoElementCylinder.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementCylinder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoElementCylinder ****************************************************
struct Z_Construct_UClass_UGizmoElementCylinder_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCylinder_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementCylinder(); \
	friend struct ::Z_Construct_UClass_UGizmoElementCylinder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoElementCylinder_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoElementCylinder, UGizmoElementBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoElementCylinder_NoRegister) \
	DECLARE_SERIALIZER(UGizmoElementCylinder)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoElementCylinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoElementCylinder(UGizmoElementCylinder&&) = delete; \
	UGizmoElementCylinder(const UGizmoElementCylinder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementCylinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementCylinder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoElementCylinder) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementCylinder();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_16_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoElementCylinder;

// ********** End Class UGizmoElementCylinder ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
