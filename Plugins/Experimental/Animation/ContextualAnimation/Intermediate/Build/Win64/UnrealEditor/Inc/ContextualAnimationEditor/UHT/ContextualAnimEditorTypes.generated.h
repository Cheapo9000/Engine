// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimEditorTypes.h"

#ifdef CONTEXTUALANIMATIONEDITOR_ContextualAnimEditorTypes_generated_h
#error "ContextualAnimEditorTypes.generated.h already included, missing '#pragma once' in ContextualAnimEditorTypes.h"
#endif
#define CONTEXTUALANIMATIONEDITOR_ContextualAnimEditorTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UContextualAnimNewIKTargetParams *****************************************
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetRoleOptions);


struct Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics;
CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimNewIKTargetParams_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimNewIKTargetParams(); \
	friend struct ::Z_Construct_UClass_UContextualAnimNewIKTargetParams_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATIONEDITOR_API UClass* ::Z_Construct_UClass_UContextualAnimNewIKTargetParams_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimNewIKTargetParams, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimationEditor"), Z_Construct_UClass_UContextualAnimNewIKTargetParams_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimNewIKTargetParams) \
	virtual UObject* _getUObject() const override { return const_cast<UContextualAnimNewIKTargetParams*>(this); }


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimNewIKTargetParams(UContextualAnimNewIKTargetParams&&) = delete; \
	UContextualAnimNewIKTargetParams(const UContextualAnimNewIKTargetParams&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimNewIKTargetParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimNewIKTargetParams); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimNewIKTargetParams) \
	NO_API virtual ~UContextualAnimNewIKTargetParams();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimNewIKTargetParams;

// ********** End Class UContextualAnimNewIKTargetParams *******************************************

// ********** Begin ScriptStruct FContextualAnimNewAnimSetData *************************************
struct Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimNewAnimSetData_Statics; \
	CONTEXTUALANIMATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FContextualAnimNewAnimSetData;
// ********** End ScriptStruct FContextualAnimNewAnimSetData ***************************************

// ********** Begin ScriptStruct FContextualAnimNewAnimSetParams ***********************************
struct Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics;
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextualAnimNewAnimSetParams_Statics; \
	CONTEXTUALANIMATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FContextualAnimNewAnimSetParams;
// ********** End ScriptStruct FContextualAnimNewAnimSetParams *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimEditorTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
