// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativeITFComponent.h"

#ifdef XRCREATIVE_XRCreativeITFComponent_generated_h
#error "XRCreativeITFComponent.generated.h already included, missing '#pragma once' in XRCreativeITFComponent.h"
#endif
#define XRCREATIVE_XRCreativeITFComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AXRCreativeCombinedTransformGizmoActor;
class UTypedElementSelectionSet;
enum class EToolContextCoordinateSystem : uint8;
enum class EToolContextTransformGizmoMode : uint8;

// ********** Begin Delegate FCanSelectActorPredicate **********************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_27_DELEGATE \
XRCREATIVE_API bool FCanSelectActorPredicate_DelegateWrapper(const FScriptDelegate& CanSelectActorPredicate, AActor* SelectionCandidate);


// ********** End Delegate FCanSelectActorPredicate ************************************************

// ********** Begin Delegate FOnUndoRedo ***********************************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_59_DELEGATE \
static void FOnUndoRedo_DelegateWrapper(const FMulticastScriptDelegate& OnUndoRedo);


// ********** End Delegate FOnUndoRedo *************************************************************

// ********** Begin Class UXRCreativeITFComponent **************************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGizmoActor); \
	DECLARE_FUNCTION(execSetCurrentTransformGizmoMode); \
	DECLARE_FUNCTION(execGetCurrentTransformGizmoMode); \
	DECLARE_FUNCTION(execSetCurrentCoordinateSystem); \
	DECLARE_FUNCTION(execGetCurrentCoordinateSystem); \
	DECLARE_FUNCTION(execHaveActiveTool); \
	DECLARE_FUNCTION(execGetSelectionSet); \
	DECLARE_FUNCTION(execLeftMouseReleased); \
	DECLARE_FUNCTION(execLeftMousePressed); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execCanRedo); \
	DECLARE_FUNCTION(execCanUndo);


struct Z_Construct_UClass_UXRCreativeITFComponent_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeITFComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativeITFComponent(); \
	friend struct ::Z_Construct_UClass_UXRCreativeITFComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_UXRCreativeITFComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRCreativeITFComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_UXRCreativeITFComponent_NoRegister) \
	DECLARE_SERIALIZER(UXRCreativeITFComponent)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRCreativeITFComponent(UXRCreativeITFComponent&&) = delete; \
	UXRCreativeITFComponent(const UXRCreativeITFComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativeITFComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativeITFComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UXRCreativeITFComponent) \
	NO_API virtual ~UXRCreativeITFComponent();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRCreativeITFComponent;

// ********** End Class UXRCreativeITFComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
