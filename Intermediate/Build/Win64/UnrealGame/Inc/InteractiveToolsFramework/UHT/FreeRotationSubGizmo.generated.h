// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/FreeRotationSubGizmo.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_FreeRotationSubGizmo_generated_h
#error "FreeRotationSubGizmo.generated.h already included, missing '#pragma once' in FreeRotationSubGizmo.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_FreeRotationSubGizmo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFreeRotationSubGizmo ****************************************************
struct Z_Construct_UClass_UFreeRotationSubGizmo_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UFreeRotationSubGizmo_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Private_BaseGizmos_FreeRotationSubGizmo_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFreeRotationSubGizmo(); \
	friend struct ::Z_Construct_UClass_UFreeRotationSubGizmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UFreeRotationSubGizmo_NoRegister(); \
public: \
	DECLARE_CLASS2(UFreeRotationSubGizmo, UInteractiveGizmo, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UFreeRotationSubGizmo_NoRegister) \
	DECLARE_SERIALIZER(UFreeRotationSubGizmo)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Private_BaseGizmos_FreeRotationSubGizmo_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UFreeRotationSubGizmo(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFreeRotationSubGizmo(UFreeRotationSubGizmo&&) = delete; \
	UFreeRotationSubGizmo(const UFreeRotationSubGizmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UFreeRotationSubGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFreeRotationSubGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFreeRotationSubGizmo) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UFreeRotationSubGizmo();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Private_BaseGizmos_FreeRotationSubGizmo_h_26_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Private_BaseGizmos_FreeRotationSubGizmo_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Private_BaseGizmos_FreeRotationSubGizmo_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Private_BaseGizmos_FreeRotationSubGizmo_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFreeRotationSubGizmo;

// ********** End Class UFreeRotationSubGizmo ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Private_BaseGizmos_FreeRotationSubGizmo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
