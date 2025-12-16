// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativeGizmos.h"

#ifdef XRCREATIVE_XRCreativeGizmos_generated_h
#error "XRCreativeGizmos.generated.h already included, missing '#pragma once' in XRCreativeGizmos.h"
#endif
#define XRCREATIVE_XRCreativeGizmos_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AXRCreativeAvatar;
class UXRCreativeGizmoMeshComponent;

// ********** Begin Class UXRCreativeGizmoBuilder **************************************************
struct Z_Construct_UClass_UXRCreativeGizmoBuilder_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeGizmoBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativeGizmoBuilder(); \
	friend struct ::Z_Construct_UClass_UXRCreativeGizmoBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_UXRCreativeGizmoBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRCreativeGizmoBuilder, UCombinedTransformGizmoBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_UXRCreativeGizmoBuilder_NoRegister) \
	DECLARE_SERIALIZER(UXRCreativeGizmoBuilder)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRCreativeGizmoBuilder(UXRCreativeGizmoBuilder&&) = delete; \
	UXRCreativeGizmoBuilder(const UXRCreativeGizmoBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativeGizmoBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativeGizmoBuilder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UXRCreativeGizmoBuilder) \
	NO_API virtual ~UXRCreativeGizmoBuilder();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRCreativeGizmoBuilder;

// ********** End Class UXRCreativeGizmoBuilder ****************************************************

// ********** Begin Class UXRCreativeGizmo *********************************************************
struct Z_Construct_UClass_UXRCreativeGizmo_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeGizmo_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativeGizmo(); \
	friend struct ::Z_Construct_UClass_UXRCreativeGizmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_UXRCreativeGizmo_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRCreativeGizmo, UCombinedTransformGizmo, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_UXRCreativeGizmo_NoRegister) \
	DECLARE_SERIALIZER(UXRCreativeGizmo)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRCreativeGizmo(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRCreativeGizmo(UXRCreativeGizmo&&) = delete; \
	UXRCreativeGizmo(const UXRCreativeGizmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativeGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativeGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UXRCreativeGizmo) \
	NO_API virtual ~UXRCreativeGizmo();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRCreativeGizmo;

// ********** End Class UXRCreativeGizmo ***********************************************************

// ********** Begin Class AXRCreativeCombinedTransformGizmoActor ***********************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOwnerAvatar);


struct Z_Construct_UClass_AXRCreativeCombinedTransformGizmoActor_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeCombinedTransformGizmoActor_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXRCreativeCombinedTransformGizmoActor(); \
	friend struct ::Z_Construct_UClass_AXRCreativeCombinedTransformGizmoActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_AXRCreativeCombinedTransformGizmoActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AXRCreativeCombinedTransformGizmoActor, ACombinedTransformGizmoActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_AXRCreativeCombinedTransformGizmoActor_NoRegister) \
	DECLARE_SERIALIZER(AXRCreativeCombinedTransformGizmoActor)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AXRCreativeCombinedTransformGizmoActor(AXRCreativeCombinedTransformGizmoActor&&) = delete; \
	AXRCreativeCombinedTransformGizmoActor(const AXRCreativeCombinedTransformGizmoActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXRCreativeCombinedTransformGizmoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXRCreativeCombinedTransformGizmoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AXRCreativeCombinedTransformGizmoActor) \
	NO_API virtual ~AXRCreativeCombinedTransformGizmoActor();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_61_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AXRCreativeCombinedTransformGizmoActor;

// ********** End Class AXRCreativeCombinedTransformGizmoActor *************************************

// ********** Begin Delegate FXRCreativeGizmoStateChanged ******************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_177_DELEGATE \
XRCREATIVE_API void FXRCreativeGizmoStateChanged_DelegateWrapper(const FMulticastScriptDelegate& XRCreativeGizmoStateChanged, UXRCreativeGizmoMeshComponent* Component, bool bNewState);


// ********** End Delegate FXRCreativeGizmoStateChanged ********************************************

// ********** Begin Class UXRCreativeGizmoMeshComponent ********************************************
struct Z_Construct_UClass_UXRCreativeGizmoMeshComponent_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeGizmoMeshComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativeGizmoMeshComponent(); \
	friend struct ::Z_Construct_UClass_UXRCreativeGizmoMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_UXRCreativeGizmoMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRCreativeGizmoMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_UXRCreativeGizmoMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UXRCreativeGizmoMeshComponent)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_183_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRCreativeGizmoMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRCreativeGizmoMeshComponent(UXRCreativeGizmoMeshComponent&&) = delete; \
	UXRCreativeGizmoMeshComponent(const UXRCreativeGizmoMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativeGizmoMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativeGizmoMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRCreativeGizmoMeshComponent) \
	NO_API virtual ~UXRCreativeGizmoMeshComponent();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_180_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_183_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_183_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRCreativeGizmoMeshComponent;

// ********** End Class UXRCreativeGizmoMeshComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
