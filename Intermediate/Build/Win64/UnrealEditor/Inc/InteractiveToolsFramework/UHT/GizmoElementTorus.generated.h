// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementTorus.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementTorus_generated_h
#error "GizmoElementTorus.generated.h already included, missing '#pragma once' in GizmoElementTorus.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementTorus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoElementTorus *******************************************************
struct Z_Construct_UClass_UGizmoElementTorus_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementTorus_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementTorus(); \
	friend struct ::Z_Construct_UClass_UGizmoElementTorus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoElementTorus_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoElementTorus, UGizmoElementCircleBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoElementTorus_NoRegister) \
	DECLARE_SERIALIZER(UGizmoElementTorus)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoElementTorus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoElementTorus(UGizmoElementTorus&&) = delete; \
	UGizmoElementTorus(const UGizmoElementTorus&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementTorus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementTorus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoElementTorus) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementTorus();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_21_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoElementTorus;

// ********** End Class UGizmoElementTorus *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
