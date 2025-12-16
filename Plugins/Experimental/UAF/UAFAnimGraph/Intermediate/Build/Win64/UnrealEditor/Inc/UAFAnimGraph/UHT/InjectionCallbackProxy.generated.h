// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Injection/InjectionCallbackProxy.h"

#ifdef UAFANIMGRAPH_InjectionCallbackProxy_generated_h
#error "InjectionCallbackProxy.generated.h already included, missing '#pragma once' in InjectionCallbackProxy.h"
#endif
#define UAFANIMGRAPH_InjectionCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimNextComponent;
class UInjectionCallbackProxy;
class UObject;
enum class EUninjectionResult : uint8;
struct FAnimNextFactoryParams;
struct FAnimNextInjectionBlendSettings;
struct FAnimNextVariableReference;

// ********** Begin Delegate FOnInjectionDelegate **************************************************
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Injection_InjectionCallbackProxy_h_13_DELEGATE \
UAFANIMGRAPH_API void FOnInjectionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInjectionDelegate);


// ********** End Delegate FOnInjectionDelegate ****************************************************

// ********** Begin Class UInjectionCallbackProxy **************************************************
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Injection_InjectionCallbackProxy_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUninject); \
	DECLARE_FUNCTION(execCreateProxyObjectForInjection);


struct Z_Construct_UClass_UInjectionCallbackProxy_Statics;
	struct Z_Construct_UFunction_UInjectionCallbackProxy_SetVariable_Statics; \
UAFANIMGRAPH_API UClass* Z_Construct_UClass_UInjectionCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Injection_InjectionCallbackProxy_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInjectionCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UInjectionCallbackProxy_Statics; \
	friend struct ::Z_Construct_UFunction_UInjectionCallbackProxy_SetVariable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFANIMGRAPH_API UClass* ::Z_Construct_UClass_UInjectionCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UInjectionCallbackProxy, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFAnimGraph"), Z_Construct_UClass_UInjectionCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UInjectionCallbackProxy)


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Injection_InjectionCallbackProxy_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFANIMGRAPH_API UInjectionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInjectionCallbackProxy(UInjectionCallbackProxy&&) = delete; \
	UInjectionCallbackProxy(const UInjectionCallbackProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFANIMGRAPH_API, UInjectionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInjectionCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInjectionCallbackProxy) \
	UAFANIMGRAPH_API virtual ~UInjectionCallbackProxy();


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Injection_InjectionCallbackProxy_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Injection_InjectionCallbackProxy_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Injection_InjectionCallbackProxy_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Injection_InjectionCallbackProxy_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Injection_InjectionCallbackProxy_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInjectionCallbackProxy;

// ********** End Class UInjectionCallbackProxy ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_Injection_InjectionCallbackProxy_h

// ********** Begin Enum EUninjectionResult ********************************************************
#define FOREACH_ENUM_EUNINJECTIONRESULT(op) \
	op(EUninjectionResult::Succeeded) \
	op(EUninjectionResult::Failed) 

enum class EUninjectionResult : uint8;
template<> struct TIsUEnumClass<EUninjectionResult> { enum { Value = true }; };
template<> UAFANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EUninjectionResult>();
// ********** End Enum EUninjectionResult **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
