// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preview/AvaTransitionPreviewManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHETRANSITION_AvaTransitionPreviewManager_generated_h
#error "AvaTransitionPreviewManager.generated.h already included, missing '#pragma once' in AvaTransitionPreviewManager.h"
#endif
#define AVALANCHETRANSITION_AvaTransitionPreviewManager_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransitionStop); \
	DECLARE_FUNCTION(execTakeOut); \
	DECLARE_FUNCTION(execTakeNext);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaTransitionPreviewManager(); \
	friend struct Z_Construct_UClass_AAvaTransitionPreviewManager_Statics; \
public: \
	DECLARE_CLASS(AAvaTransitionPreviewManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), NO_API) \
	DECLARE_SERIALIZER(AAvaTransitionPreviewManager)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAvaTransitionPreviewManager(AAvaTransitionPreviewManager&&); \
	AAvaTransitionPreviewManager(const AAvaTransitionPreviewManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAvaTransitionPreviewManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaTransitionPreviewManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvaTransitionPreviewManager) \
	NO_API virtual ~AAvaTransitionPreviewManager();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHETRANSITION_API UClass* StaticClass<class AAvaTransitionPreviewManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
