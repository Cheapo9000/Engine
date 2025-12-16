// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextController.h"

#ifdef UAFANIMGRAPHUNCOOKEDONLY_AnimNextController_generated_h
#error "AnimNextController.generated.h already included, missing '#pragma once' in AnimNextController.h"
#endif
#define UAFANIMGRAPHUNCOOKEDONLY_AnimNextController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVMUnitNode;
struct FAnimNextTraitSharedData;
struct FInstancedStruct;

// ********** Begin Class UAnimNextController ******************************************************
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Internal_AnimNextController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTraitPinIndex); \
	DECLARE_FUNCTION(execSwapTraitByName); \
	DECLARE_FUNCTION(execRemoveTraitByName); \
	DECLARE_FUNCTION(execAddTraitByName); \
	DECLARE_FUNCTION(execAddTraitStruct);


struct Z_Construct_UClass_UAnimNextController_Statics;
UAFANIMGRAPHUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextController_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Internal_AnimNextController_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextController(); \
	friend struct ::Z_Construct_UClass_UAnimNextController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFANIMGRAPHUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UAnimNextController_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextController, UAnimNextControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFAnimGraphUncookedOnly"), Z_Construct_UClass_UAnimNextController_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextController)


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Internal_AnimNextController_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFANIMGRAPHUNCOOKEDONLY_API UAnimNextController(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextController(UAnimNextController&&) = delete; \
	UAnimNextController(const UAnimNextController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFANIMGRAPHUNCOOKEDONLY_API, UAnimNextController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimNextController) \
	UAFANIMGRAPHUNCOOKEDONLY_API virtual ~UAnimNextController();


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Internal_AnimNextController_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Internal_AnimNextController_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Internal_AnimNextController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Internal_AnimNextController_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Internal_AnimNextController_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextController;

// ********** End Class UAnimNextController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphUncookedOnly_Internal_AnimNextController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
