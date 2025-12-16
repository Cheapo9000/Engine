// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preview/AvaTransitionPreviewManager.h"

#ifdef AVALANCHETRANSITION_AvaTransitionPreviewManager_generated_h
#error "AvaTransitionPreviewManager.generated.h already included, missing '#pragma once' in AvaTransitionPreviewManager.h"
#endif
#define AVALANCHETRANSITION_AvaTransitionPreviewManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAvaTransitionPreviewManager *********************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransitionStop); \
	DECLARE_FUNCTION(execTakeOut); \
	DECLARE_FUNCTION(execTakeNext);


struct Z_Construct_UClass_AAvaTransitionPreviewManager_Statics;
AVALANCHETRANSITION_API UClass* Z_Construct_UClass_AAvaTransitionPreviewManager_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaTransitionPreviewManager(); \
	friend struct ::Z_Construct_UClass_AAvaTransitionPreviewManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHETRANSITION_API UClass* ::Z_Construct_UClass_AAvaTransitionPreviewManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AAvaTransitionPreviewManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), Z_Construct_UClass_AAvaTransitionPreviewManager_NoRegister) \
	DECLARE_SERIALIZER(AAvaTransitionPreviewManager)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAvaTransitionPreviewManager(AAvaTransitionPreviewManager&&) = delete; \
	AAvaTransitionPreviewManager(const AAvaTransitionPreviewManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAvaTransitionPreviewManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaTransitionPreviewManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvaTransitionPreviewManager) \
	NO_API virtual ~AAvaTransitionPreviewManager();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_24_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAvaTransitionPreviewManager;

// ********** End Class AAvaTransitionPreviewManager ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Preview_AvaTransitionPreviewManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
