// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementLineStrip.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementLineStrip_generated_h
#error "GizmoElementLineStrip.generated.h already included, missing '#pragma once' in GizmoElementLineStrip.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementLineStrip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoElementLineStrip ***************************************************
struct Z_Construct_UClass_UGizmoElementLineStrip_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineStrip_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementLineStrip(); \
	friend struct ::Z_Construct_UClass_UGizmoElementLineStrip_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoElementLineStrip_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoElementLineStrip, UGizmoElementLineBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoElementLineStrip_NoRegister) \
	DECLARE_SERIALIZER(UGizmoElementLineStrip)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoElementLineStrip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoElementLineStrip(UGizmoElementLineStrip&&) = delete; \
	UGizmoElementLineStrip(const UGizmoElementLineStrip&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementLineStrip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementLineStrip); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoElementLineStrip) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementLineStrip();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h_18_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoElementLineStrip;

// ********** End Class UGizmoElementLineStrip *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
