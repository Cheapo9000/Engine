// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositeActor.h"

#ifdef COMPOSITE_CompositeActor_generated_h
#error "CompositeActor.generated.h already included, missing '#pragma once' in CompositeActor.h"
#endif
#define COMPOSITE_CompositeActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCompositeLayerBase;
struct FComponentReference;

// ********** Begin Delegate FOnCompositeActorPostJoinMultiUserSession *****************************
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeActor_h_21_DELEGATE \
COMPOSITE_API void FOnCompositeActorPostJoinMultiUserSession_DelegateWrapper(const FMulticastScriptDelegate& OnCompositeActorPostJoinMultiUserSession);


// ********** End Delegate FOnCompositeActorPostJoinMultiUserSession *******************************

// ********** Begin ScriptStruct FSceneCaptureComponentArray ***************************************
struct Z_Construct_UScriptStruct_FSceneCaptureComponentArray_Statics;
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeActor_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSceneCaptureComponentArray_Statics; \
	COMPOSITE_API static class UScriptStruct* StaticStruct();


struct FSceneCaptureComponentArray;
// ********** End ScriptStruct FSceneCaptureComponentArray *****************************************

// ********** Begin Class ACompositeActor **********************************************************
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeActor_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCompositeLayers); \
	DECLARE_FUNCTION(execGetCompositeLayers); \
	DECLARE_FUNCTION(execSetCamera); \
	DECLARE_FUNCTION(execGetCamera); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive);


struct Z_Construct_UClass_ACompositeActor_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_ACompositeActor_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeActor_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompositeActor(); \
	friend struct ::Z_Construct_UClass_ACompositeActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_ACompositeActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACompositeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_ACompositeActor_NoRegister) \
	DECLARE_SERIALIZER(ACompositeActor)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeActor_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACompositeActor(ACompositeActor&&) = delete; \
	ACompositeActor(const ACompositeActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, ACompositeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompositeActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompositeActor)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeActor_h_53_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeActor_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeActor_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeActor_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeActor_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACompositeActor;

// ********** End Class ACompositeActor ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeActor_h

// ********** Begin Enum ECompositeMainRenderOutputMode ********************************************
#define FOREACH_ENUM_ECOMPOSITEMAINRENDEROUTPUTMODE(op) \
	op(ECompositeMainRenderOutputMode::Default) \
	op(ECompositeMainRenderOutputMode::FinalColorHDR) \
	op(ECompositeMainRenderOutputMode::FinalToneCurveHDR) 

enum class ECompositeMainRenderOutputMode : uint8;
template<> struct TIsUEnumClass<ECompositeMainRenderOutputMode> { enum { Value = true }; };
template<> COMPOSITE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositeMainRenderOutputMode>();
// ********** End Enum ECompositeMainRenderOutputMode **********************************************

// ********** Begin Enum ECompositeAllowedViewModes ************************************************
#define FOREACH_ENUM_ECOMPOSITEALLOWEDVIEWMODES(op) \
	op(ECompositeAllowedViewModes::Default) \
	op(ECompositeAllowedViewModes::MediaProfileUnknown) \
	op(ECompositeAllowedViewModes::AllViewModes) 

enum class ECompositeAllowedViewModes : uint8;
template<> struct TIsUEnumClass<ECompositeAllowedViewModes> { enum { Value = true }; };
template<> COMPOSITE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositeAllowedViewModes>();
// ********** End Enum ECompositeAllowedViewModes **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
