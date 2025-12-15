// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/CombinedTransformGizmo.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_CombinedTransformGizmo_generated_h
#error "CombinedTransformGizmo.generated.h already included, missing '#pragma once' in CombinedTransformGizmo.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_CombinedTransformGizmo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACombinedTransformGizmoActor *********************************************
struct Z_Construct_UClass_ACombinedTransformGizmoActor_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ACombinedTransformGizmoActor_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombinedTransformGizmoActor(); \
	friend struct ::Z_Construct_UClass_ACombinedTransformGizmoActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_ACombinedTransformGizmoActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombinedTransformGizmoActor, AGizmoActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_ACombinedTransformGizmoActor_NoRegister) \
	DECLARE_SERIALIZER(ACombinedTransformGizmoActor)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombinedTransformGizmoActor(ACombinedTransformGizmoActor&&) = delete; \
	ACombinedTransformGizmoActor(const ACombinedTransformGizmoActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, ACombinedTransformGizmoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombinedTransformGizmoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombinedTransformGizmoActor) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~ACombinedTransformGizmoActor();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_47_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombinedTransformGizmoActor;

// ********** End Class ACombinedTransformGizmoActor ***********************************************

// ********** Begin Class UCombinedTransformGizmoBuilder *******************************************
struct Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_250_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombinedTransformGizmoBuilder(); \
	friend struct ::Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UCombinedTransformGizmoBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombinedTransformGizmoBuilder, UInteractiveGizmoBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UCombinedTransformGizmoBuilder_NoRegister) \
	DECLARE_SERIALIZER(UCombinedTransformGizmoBuilder)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_250_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UCombinedTransformGizmoBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombinedTransformGizmoBuilder(UCombinedTransformGizmoBuilder&&) = delete; \
	UCombinedTransformGizmoBuilder(const UCombinedTransformGizmoBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UCombinedTransformGizmoBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombinedTransformGizmoBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombinedTransformGizmoBuilder) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UCombinedTransformGizmoBuilder();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_247_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_250_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_250_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_250_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombinedTransformGizmoBuilder;

// ********** End Class UCombinedTransformGizmoBuilder *********************************************

// ********** Begin Class UCombinedTransformGizmo **************************************************
struct Z_Construct_UClass_UCombinedTransformGizmo_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_338_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombinedTransformGizmo(); \
	friend struct ::Z_Construct_UClass_UCombinedTransformGizmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UCombinedTransformGizmo_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombinedTransformGizmo, UInteractiveGizmo, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister) \
	DECLARE_SERIALIZER(UCombinedTransformGizmo)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_338_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UCombinedTransformGizmo(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombinedTransformGizmo(UCombinedTransformGizmo&&) = delete; \
	UCombinedTransformGizmo(const UCombinedTransformGizmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UCombinedTransformGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombinedTransformGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombinedTransformGizmo) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UCombinedTransformGizmo();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_335_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_338_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_338_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_338_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombinedTransformGizmo;

// ********** End Class UCombinedTransformGizmo ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
