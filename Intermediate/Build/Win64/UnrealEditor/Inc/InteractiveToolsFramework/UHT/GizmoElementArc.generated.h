// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementArc.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementArc_generated_h
#error "GizmoElementArc.generated.h already included, missing '#pragma once' in GizmoElementArc.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementArc_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoElementArc *********************************************************
struct Z_Construct_UClass_UGizmoElementArc_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementArc_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementArc(); \
	friend struct ::Z_Construct_UClass_UGizmoElementArc_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoElementArc_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoElementArc, UGizmoElementCircleBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoElementArc_NoRegister) \
	DECLARE_SERIALIZER(UGizmoElementArc)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoElementArc(UGizmoElementArc&&) = delete; \
	UGizmoElementArc(const UGizmoElementArc&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementArc); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementArc); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoElementArc) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementArc();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_18_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoElementArc;

// ********** End Class UGizmoElementArc ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
