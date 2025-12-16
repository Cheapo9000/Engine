// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DirectionalLightGizmo.h"

#ifdef LIGHTGIZMOS_DirectionalLightGizmo_generated_h
#error "DirectionalLightGizmo.generated.h already included, missing '#pragma once' in DirectionalLightGizmo.h"
#endif
#define LIGHTGIZMOS_DirectionalLightGizmo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDirectionalLightGizmoBuilder ********************************************
struct Z_Construct_UClass_UDirectionalLightGizmoBuilder_Statics;
LIGHTGIZMOS_API UClass* Z_Construct_UClass_UDirectionalLightGizmoBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectionalLightGizmoBuilder(); \
	friend struct ::Z_Construct_UClass_UDirectionalLightGizmoBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTGIZMOS_API UClass* ::Z_Construct_UClass_UDirectionalLightGizmoBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UDirectionalLightGizmoBuilder, UInteractiveGizmoBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LightGizmos"), Z_Construct_UClass_UDirectionalLightGizmoBuilder_NoRegister) \
	DECLARE_SERIALIZER(UDirectionalLightGizmoBuilder)


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDirectionalLightGizmoBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDirectionalLightGizmoBuilder(UDirectionalLightGizmoBuilder&&) = delete; \
	UDirectionalLightGizmoBuilder(const UDirectionalLightGizmoBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectionalLightGizmoBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectionalLightGizmoBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDirectionalLightGizmoBuilder) \
	NO_API virtual ~UDirectionalLightGizmoBuilder();


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDirectionalLightGizmoBuilder;

// ********** End Class UDirectionalLightGizmoBuilder **********************************************

// ********** Begin Class ADirectionalLightGizmoActor **********************************************
struct Z_Construct_UClass_ADirectionalLightGizmoActor_Statics;
LIGHTGIZMOS_API UClass* Z_Construct_UClass_ADirectionalLightGizmoActor_NoRegister();

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADirectionalLightGizmoActor(); \
	friend struct ::Z_Construct_UClass_ADirectionalLightGizmoActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTGIZMOS_API UClass* ::Z_Construct_UClass_ADirectionalLightGizmoActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADirectionalLightGizmoActor, AGizmoActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightGizmos"), Z_Construct_UClass_ADirectionalLightGizmoActor_NoRegister) \
	DECLARE_SERIALIZER(ADirectionalLightGizmoActor)


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADirectionalLightGizmoActor(ADirectionalLightGizmoActor&&) = delete; \
	ADirectionalLightGizmoActor(const ADirectionalLightGizmoActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADirectionalLightGizmoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADirectionalLightGizmoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADirectionalLightGizmoActor) \
	NO_API virtual ~ADirectionalLightGizmoActor();


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADirectionalLightGizmoActor;

// ********** End Class ADirectionalLightGizmoActor ************************************************

// ********** Begin Class UDirectionalLightGizmo ***************************************************
struct Z_Construct_UClass_UDirectionalLightGizmo_Statics;
LIGHTGIZMOS_API UClass* Z_Construct_UClass_UDirectionalLightGizmo_NoRegister();

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectionalLightGizmo(); \
	friend struct ::Z_Construct_UClass_UDirectionalLightGizmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTGIZMOS_API UClass* ::Z_Construct_UClass_UDirectionalLightGizmo_NoRegister(); \
public: \
	DECLARE_CLASS2(UDirectionalLightGizmo, UInteractiveGizmo, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LightGizmos"), Z_Construct_UClass_UDirectionalLightGizmo_NoRegister) \
	DECLARE_SERIALIZER(UDirectionalLightGizmo)


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDirectionalLightGizmo(UDirectionalLightGizmo&&) = delete; \
	UDirectionalLightGizmo(const UDirectionalLightGizmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectionalLightGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectionalLightGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDirectionalLightGizmo) \
	NO_API virtual ~UDirectionalLightGizmo();


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_51_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDirectionalLightGizmo;

// ********** End Class UDirectionalLightGizmo *****************************************************

// ********** Begin Class UDirectionalLightGizmoInputBehavior **************************************
struct Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_Statics;
LIGHTGIZMOS_API UClass* Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_NoRegister();

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectionalLightGizmoInputBehavior(); \
	friend struct ::Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTGIZMOS_API UClass* ::Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_NoRegister(); \
public: \
	DECLARE_CLASS2(UDirectionalLightGizmoInputBehavior, UAnyButtonInputBehavior, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LightGizmos"), Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_NoRegister) \
	DECLARE_SERIALIZER(UDirectionalLightGizmoInputBehavior)


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_157_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDirectionalLightGizmoInputBehavior(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDirectionalLightGizmoInputBehavior(UDirectionalLightGizmoInputBehavior&&) = delete; \
	UDirectionalLightGizmoInputBehavior(const UDirectionalLightGizmoInputBehavior&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectionalLightGizmoInputBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectionalLightGizmoInputBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDirectionalLightGizmoInputBehavior) \
	NO_API virtual ~UDirectionalLightGizmoInputBehavior();


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_154_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_157_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDirectionalLightGizmoInputBehavior;

// ********** End Class UDirectionalLightGizmoInputBehavior ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
