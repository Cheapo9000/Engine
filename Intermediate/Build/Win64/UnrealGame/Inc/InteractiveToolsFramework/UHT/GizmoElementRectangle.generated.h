// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementRectangle.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementRectangle_generated_h
#error "GizmoElementRectangle.generated.h already included, missing '#pragma once' in GizmoElementRectangle.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementRectangle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoElementRectangle ***************************************************
struct Z_Construct_UClass_UGizmoElementRectangle_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementRectangle_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementRectangle(); \
	friend struct ::Z_Construct_UClass_UGizmoElementRectangle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoElementRectangle_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoElementRectangle, UGizmoElementLineBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoElementRectangle_NoRegister) \
	DECLARE_SERIALIZER(UGizmoElementRectangle)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoElementRectangle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoElementRectangle(UGizmoElementRectangle&&) = delete; \
	UGizmoElementRectangle(const UGizmoElementRectangle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementRectangle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementRectangle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoElementRectangle) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementRectangle();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_18_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoElementRectangle;

// ********** End Class UGizmoElementRectangle *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
