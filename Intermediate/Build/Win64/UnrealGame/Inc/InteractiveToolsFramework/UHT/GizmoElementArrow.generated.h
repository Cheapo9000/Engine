// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementArrow.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementArrow_generated_h
#error "GizmoElementArrow.generated.h already included, missing '#pragma once' in GizmoElementArrow.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementArrow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoElementArrow *******************************************************
struct Z_Construct_UClass_UGizmoElementArrow_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementArrow_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementArrow(); \
	friend struct ::Z_Construct_UClass_UGizmoElementArrow_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoElementArrow_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoElementArrow, UGizmoElementGroupBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoElementArrow_NoRegister) \
	DECLARE_SERIALIZER(UGizmoElementArrow)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoElementArrow(UGizmoElementArrow&&) = delete; \
	UGizmoElementArrow(const UGizmoElementArrow&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementArrow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementArrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoElementArrow) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementArrow();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_23_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoElementArrow;

// ********** End Class UGizmoElementArrow *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
