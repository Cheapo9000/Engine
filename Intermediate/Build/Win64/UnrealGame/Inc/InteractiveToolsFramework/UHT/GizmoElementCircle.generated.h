// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementCircle.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementCircle_generated_h
#error "GizmoElementCircle.generated.h already included, missing '#pragma once' in GizmoElementCircle.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementCircle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoElementCircle ******************************************************
struct Z_Construct_UClass_UGizmoElementCircle_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCircle_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementCircle(); \
	friend struct ::Z_Construct_UClass_UGizmoElementCircle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoElementCircle_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoElementCircle, UGizmoElementCircleBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoElementCircle_NoRegister) \
	DECLARE_SERIALIZER(UGizmoElementCircle)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoElementCircle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoElementCircle(UGizmoElementCircle&&) = delete; \
	UGizmoElementCircle(const UGizmoElementCircle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementCircle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementCircle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoElementCircle) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementCircle();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h_17_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoElementCircle;

// ********** End Class UGizmoElementCircle ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
