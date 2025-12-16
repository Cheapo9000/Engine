// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Templates/UAFGraphNodeTemplate.h"

#ifdef UAFANIMGRAPHUNCOOKEDONLY_UAFGraphNodeTemplate_generated_h
#error "UAFGraphNodeTemplate.generated.h already included, missing '#pragma once' in UAFGraphNodeTemplate.h"
#endif
#define UAFANIMGRAPHUNCOOKEDONLY_UAFGraphNodeTemplate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimNextController;
class UObject;
class URigVMPin;
class URigVMUnitNode;
struct FLinearColor;
struct FRigVMNodeLayout;
struct FSlateBrush;

// ********** Begin Class UUAFGraphNodeTemplate ****************************************************
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Public_Templates_UAFGraphNodeTemplate_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCategoryForPinsInLayout); \
	DECLARE_FUNCTION(execSetDisplayNameForPinInLayout); \
	DECLARE_FUNCTION(execGetPerTraitCategoriesLayout); \
	DECLARE_FUNCTION(execGetDefaultCategoryLayout); \
	DECLARE_FUNCTION(execHandlePinDefaultValueChanged); \
	DECLARE_FUNCTION(execHandleAssetDropped); \
	DECLARE_FUNCTION(execGetNodeLayout); \
	DECLARE_FUNCTION(execConfigureNewNode); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetMenuDescription); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetTooltipText); \
	DECLARE_FUNCTION(execGetSubTitle); \
	DECLARE_FUNCTION(execGetTitle);


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Public_Templates_UAFGraphNodeTemplate_h_35_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UUAFGraphNodeTemplate_Statics;
UAFANIMGRAPHUNCOOKEDONLY_API UClass* Z_Construct_UClass_UUAFGraphNodeTemplate_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Public_Templates_UAFGraphNodeTemplate_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUAFGraphNodeTemplate(); \
	friend struct ::Z_Construct_UClass_UUAFGraphNodeTemplate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFANIMGRAPHUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UUAFGraphNodeTemplate_NoRegister(); \
public: \
	DECLARE_CLASS2(UUAFGraphNodeTemplate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFAnimGraphUncookedOnly"), Z_Construct_UClass_UUAFGraphNodeTemplate_NoRegister) \
	DECLARE_SERIALIZER(UUAFGraphNodeTemplate)


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Public_Templates_UAFGraphNodeTemplate_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUAFGraphNodeTemplate(UUAFGraphNodeTemplate&&) = delete; \
	UUAFGraphNodeTemplate(const UUAFGraphNodeTemplate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFANIMGRAPHUNCOOKEDONLY_API, UUAFGraphNodeTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUAFGraphNodeTemplate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUAFGraphNodeTemplate) \
	UAFANIMGRAPHUNCOOKEDONLY_API virtual ~UUAFGraphNodeTemplate();


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Public_Templates_UAFGraphNodeTemplate_h_32_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Public_Templates_UAFGraphNodeTemplate_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Public_Templates_UAFGraphNodeTemplate_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Public_Templates_UAFGraphNodeTemplate_h_35_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Public_Templates_UAFGraphNodeTemplate_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Public_Templates_UAFGraphNodeTemplate_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUAFGraphNodeTemplate;

// ********** End Class UUAFGraphNodeTemplate ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Public_Templates_UAFGraphNodeTemplate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
