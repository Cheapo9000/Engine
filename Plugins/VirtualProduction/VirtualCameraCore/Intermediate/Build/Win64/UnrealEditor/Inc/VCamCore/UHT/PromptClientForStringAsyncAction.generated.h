// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Util/PromptClientForStringAsyncAction.h"

#ifdef VCAMCORE_PromptClientForStringAsyncAction_generated_h
#error "PromptClientForStringAsyncAction.generated.h already included, missing '#pragma once' in PromptClientForStringAsyncAction.h"
#endif
#define VCAMCORE_PromptClientForStringAsyncAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPromptClientForStringAsyncAction;
class UVCamComponent;
struct FVCamStringPromptResponse;

// ********** Begin Delegate FStringPromptResponseDelegate *****************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_PromptClientForStringAsyncAction_h_21_DELEGATE \
static void FStringPromptResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& StringPromptResponseDelegate, FVCamStringPromptResponse const& Response);


// ********** End Delegate FStringPromptResponseDelegate *******************************************

// ********** Begin Class UPromptClientForStringAsyncAction ****************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_PromptClientForStringAsyncAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPromptClientForString);


struct Z_Construct_UClass_UPromptClientForStringAsyncAction_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UPromptClientForStringAsyncAction_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_PromptClientForStringAsyncAction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPromptClientForStringAsyncAction(); \
	friend struct ::Z_Construct_UClass_UPromptClientForStringAsyncAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UPromptClientForStringAsyncAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UPromptClientForStringAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UPromptClientForStringAsyncAction_NoRegister) \
	DECLARE_SERIALIZER(UPromptClientForStringAsyncAction)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_PromptClientForStringAsyncAction_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPromptClientForStringAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPromptClientForStringAsyncAction(UPromptClientForStringAsyncAction&&) = delete; \
	UPromptClientForStringAsyncAction(const UPromptClientForStringAsyncAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPromptClientForStringAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPromptClientForStringAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPromptClientForStringAsyncAction) \
	NO_API virtual ~UPromptClientForStringAsyncAction();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_PromptClientForStringAsyncAction_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_PromptClientForStringAsyncAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_PromptClientForStringAsyncAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_PromptClientForStringAsyncAction_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_PromptClientForStringAsyncAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPromptClientForStringAsyncAction;

// ********** End Class UPromptClientForStringAsyncAction ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_PromptClientForStringAsyncAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
