// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextControllerBase.h"

#ifdef UAFUNCOOKEDONLY_AnimNextControllerBase_generated_h
#error "AnimNextControllerBase.generated.h already included, missing '#pragma once' in AnimNextControllerBase.h"
#endif
#define UAFUNCOOKEDONLY_AnimNextControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimNextSharedVariableNode;
class UAnimNextSharedVariables;
class UObject;
class UScriptStruct;

// ********** Begin Class UAnimNextControllerBase **************************************************
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextControllerBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddSharedVariableNode); \
	DECLARE_FUNCTION(execRefreshSharedVariableNode); \
	DECLARE_FUNCTION(execAddStructSharedVariableNode); \
	DECLARE_FUNCTION(execAddAssetSharedVariableNode);


struct Z_Construct_UClass_UAnimNextControllerBase_Statics;
UAFUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextControllerBase_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextControllerBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextControllerBase(); \
	friend struct ::Z_Construct_UClass_UAnimNextControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UAnimNextControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextControllerBase, URigVMController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFUncookedOnly"), Z_Construct_UClass_UAnimNextControllerBase_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextControllerBase)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextControllerBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFUNCOOKEDONLY_API UAnimNextControllerBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextControllerBase(UAnimNextControllerBase&&) = delete; \
	UAnimNextControllerBase(const UAnimNextControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFUNCOOKEDONLY_API, UAnimNextControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimNextControllerBase) \
	UAFUNCOOKEDONLY_API virtual ~UAnimNextControllerBase();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextControllerBase_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextControllerBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextControllerBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextControllerBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextControllerBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextControllerBase;

// ********** End Class UAnimNextControllerBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
