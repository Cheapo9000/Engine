// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayAnim/PlayAnimCallbackProxy.h"

#ifdef UAFANIMGRAPH_PlayAnimCallbackProxy_generated_h
#error "PlayAnimCallbackProxy.generated.h already included, missing '#pragma once' in PlayAnimCallbackProxy.h"
#endif
#define UAFANIMGRAPH_PlayAnimCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimNextComponent;
class UAnimSequence;
class UObject;
class UPlayAnimCallbackProxy;
struct FAnimNextInjectionBlendSettings;
struct FInstancedStruct;

// ********** Begin Delegate FOnPlayAnimPlayDelegate ***********************************************
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_12_DELEGATE \
UAFANIMGRAPH_API void FOnPlayAnimPlayDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayAnimPlayDelegate);


// ********** End Delegate FOnPlayAnimPlayDelegate *************************************************

// ********** Begin Class UPlayAnimCallbackProxy ***************************************************
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayAsset); \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayAnim);


struct Z_Construct_UClass_UPlayAnimCallbackProxy_Statics;
UAFANIMGRAPH_API UClass* Z_Construct_UClass_UPlayAnimCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlayAnimCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UPlayAnimCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFANIMGRAPH_API UClass* ::Z_Construct_UClass_UPlayAnimCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayAnimCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFAnimGraph"), Z_Construct_UClass_UPlayAnimCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UPlayAnimCallbackProxy)


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFANIMGRAPH_API UPlayAnimCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayAnimCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFANIMGRAPH_API, UPlayAnimCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayAnimCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayAnimCallbackProxy(UPlayAnimCallbackProxy&&) = delete; \
	UPlayAnimCallbackProxy(const UPlayAnimCallbackProxy&) = delete; \
	UAFANIMGRAPH_API virtual ~UPlayAnimCallbackProxy();


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayAnimCallbackProxy;

// ********** End Class UPlayAnimCallbackProxy *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_PlayAnim_PlayAnimCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
