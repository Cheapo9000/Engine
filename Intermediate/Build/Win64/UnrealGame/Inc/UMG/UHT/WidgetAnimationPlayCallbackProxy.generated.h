// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/WidgetAnimationPlayCallbackProxy.h"

#ifdef UMG_WidgetAnimationPlayCallbackProxy_generated_h
#error "WidgetAnimationPlayCallbackProxy.generated.h already included, missing '#pragma once' in WidgetAnimationPlayCallbackProxy.h"
#endif
#define UMG_WidgetAnimationPlayCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUMGSequencePlayer;
class UUserWidget;
class UWidgetAnimation;
class UWidgetAnimationPlayCallbackProxy;
struct FWidgetAnimationHandle;

// ********** Begin Delegate FWidgetAnimationResult ************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_15_DELEGATE \
UMG_API void FWidgetAnimationResult_DelegateWrapper(const FMulticastScriptDelegate& WidgetAnimationResult);


// ********** End Delegate FWidgetAnimationResult **************************************************

// ********** Begin Class UWidgetAnimationPlayCallbackProxy ****************************************
#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execNewPlayAnimationTimeRangeProxyObject); \
	DECLARE_FUNCTION(execCreatePlayAnimationTimeRangeProxyObject); \
	DECLARE_FUNCTION(execNewPlayAnimationProxyObject); \
	DECLARE_FUNCTION(execCreatePlayAnimationProxyObject);


struct Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics;
UMG_API UClass* Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetAnimationPlayCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetAnimationPlayCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UWidgetAnimationPlayCallbackProxy)


#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetAnimationPlayCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetAnimationPlayCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetAnimationPlayCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetAnimationPlayCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetAnimationPlayCallbackProxy(UWidgetAnimationPlayCallbackProxy&&) = delete; \
	UWidgetAnimationPlayCallbackProxy(const UWidgetAnimationPlayCallbackProxy&) = delete; \
	UMG_API virtual ~UWidgetAnimationPlayCallbackProxy();


#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetAnimationPlayCallbackProxy;

// ********** End Class UWidgetAnimationPlayCallbackProxy ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
