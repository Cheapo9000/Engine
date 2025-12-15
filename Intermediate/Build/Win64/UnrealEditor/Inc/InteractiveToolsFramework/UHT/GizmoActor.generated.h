// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoActor.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoActor_generated_h
#error "GizmoActor.generated.h already included, missing '#pragma once' in GizmoActor.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGizmoActor **************************************************************
struct Z_Construct_UClass_AGizmoActor_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AGizmoActor_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGizmoActor(); \
	friend struct ::Z_Construct_UClass_AGizmoActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_AGizmoActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGizmoActor, AInternalToolFrameworkActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_AGizmoActor_NoRegister) \
	DECLARE_SERIALIZER(AGizmoActor)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGizmoActor(AGizmoActor&&) = delete; \
	AGizmoActor(const AGizmoActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, AGizmoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGizmoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGizmoActor) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~AGizmoActor();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h_22_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGizmoActor;

// ********** End Class AGizmoActor ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
