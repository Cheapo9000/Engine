// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/PlayMoverMontageCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UMoverComponent;
class UPlayMoverMontageCallbackProxy;
#ifdef MOVER_PlayMoverMontageCallbackProxy_generated_h
#error "PlayMoverMontageCallbackProxy.generated.h already included, missing '#pragma once' in PlayMoverMontageCallbackProxy.h"
#endif
#define MOVER_PlayMoverMontageCallbackProxy_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnMoverMontageEnded); \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayMoverMontage);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPlayMoverMontageCallbackProxy(); \
	friend struct Z_Construct_UClass_UPlayMoverMontageCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UPlayMoverMontageCallbackProxy, UPlayMontageCallbackProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UPlayMoverMontageCallbackProxy)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayMoverMontageCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayMoverMontageCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayMoverMontageCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayMoverMontageCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayMoverMontageCallbackProxy(UPlayMoverMontageCallbackProxy&&); \
	UPlayMoverMontageCallbackProxy(const UPlayMoverMontageCallbackProxy&); \
public: \
	NO_API virtual ~UPlayMoverMontageCallbackProxy();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UPlayMoverMontageCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
