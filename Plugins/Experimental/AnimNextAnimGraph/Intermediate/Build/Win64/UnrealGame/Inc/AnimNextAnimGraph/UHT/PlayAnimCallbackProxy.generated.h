// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayAnim/PlayAnimCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimNextComponent;
class UAnimSequence;
class UObject;
class UPlayAnimCallbackProxy;
struct FAnimNextPlayAnimBlendSettings;
struct FInstancedStruct;
#ifdef ANIMNEXTANIMGRAPH_PlayAnimCallbackProxy_generated_h
#error "PlayAnimCallbackProxy.generated.h already included, missing '#pragma once' in PlayAnimCallbackProxy.h"
#endif
#define ANIMNEXTANIMGRAPH_PlayAnimCallbackProxy_generated_h

#define FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_9_DELEGATE \
ANIMNEXTANIMGRAPH_API void FOnPlayAnimPlayDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayAnimPlayDelegate);


#define FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayAsset); \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayAnim);


#define FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPlayAnimCallbackProxy(); \
	friend struct Z_Construct_UClass_UPlayAnimCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UPlayAnimCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNextAnimGraph"), ANIMNEXTANIMGRAPH_API) \
	DECLARE_SERIALIZER(UPlayAnimCallbackProxy)


#define FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMNEXTANIMGRAPH_API UPlayAnimCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayAnimCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMNEXTANIMGRAPH_API, UPlayAnimCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayAnimCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayAnimCallbackProxy(UPlayAnimCallbackProxy&&); \
	UPlayAnimCallbackProxy(const UPlayAnimCallbackProxy&); \
public: \
	ANIMNEXTANIMGRAPH_API virtual ~UPlayAnimCallbackProxy();


#define FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_14_INCLASS \
	FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXTANIMGRAPH_API UClass* StaticClass<class UPlayAnimCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
