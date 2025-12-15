// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/SimpleSingleClickGizmo.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_SimpleSingleClickGizmo_generated_h
#error "SimpleSingleClickGizmo.generated.h already included, missing '#pragma once' in SimpleSingleClickGizmo.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SimpleSingleClickGizmo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USimpleSingleClickGizmo **************************************************
struct Z_Construct_UClass_USimpleSingleClickGizmo_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USimpleSingleClickGizmo_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleSingleClickGizmo(); \
	friend struct ::Z_Construct_UClass_USimpleSingleClickGizmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_USimpleSingleClickGizmo_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleSingleClickGizmo, UInteractiveGizmo, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_USimpleSingleClickGizmo_NoRegister) \
	DECLARE_SERIALIZER(USimpleSingleClickGizmo)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USimpleSingleClickGizmo(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleSingleClickGizmo(USimpleSingleClickGizmo&&) = delete; \
	USimpleSingleClickGizmo(const USimpleSingleClickGizmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USimpleSingleClickGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleSingleClickGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USimpleSingleClickGizmo) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USimpleSingleClickGizmo();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h_17_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleSingleClickGizmo;

// ********** End Class USimpleSingleClickGizmo ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_SimpleSingleClickGizmo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
