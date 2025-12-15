// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VIGizmoHandle.h"

#ifdef VIEWPORTINTERACTION_VIGizmoHandle_generated_h
#error "VIGizmoHandle.generated.h already included, missing '#pragma once' in VIGizmoHandle.h"
#endif
#define VIEWPORTINTERACTION_VIGizmoHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGizmoHandle ******************************************************
struct Z_Construct_UScriptStruct_FGizmoHandle_Statics;
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGizmoHandle_Statics; \
	VIEWPORTINTERACTION_API static class UScriptStruct* StaticStruct();


struct FGizmoHandle;
// ********** End ScriptStruct FGizmoHandle ********************************************************

// ********** Begin Class UGizmoHandleGroup ********************************************************
struct Z_Construct_UClass_UGizmoHandleGroup_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleGroup_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoHandleGroup(); \
	friend struct ::Z_Construct_UClass_UGizmoHandleGroup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UGizmoHandleGroup_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoHandleGroup, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UGizmoHandleGroup_NoRegister) \
	DECLARE_SERIALIZER(UGizmoHandleGroup)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoHandleGroup(UGizmoHandleGroup&&) = delete; \
	UGizmoHandleGroup(const UGizmoHandleGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UGizmoHandleGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoHandleGroup); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGizmoHandleGroup) \
	VIEWPORTINTERACTION_API virtual ~UGizmoHandleGroup();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_38_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoHandleGroup;

// ********** End Class UGizmoHandleGroup **********************************************************

// ********** Begin Class UAxisGizmoHandleGroup ****************************************************
struct Z_Construct_UClass_UAxisGizmoHandleGroup_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UAxisGizmoHandleGroup_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAxisGizmoHandleGroup(); \
	friend struct ::Z_Construct_UClass_UAxisGizmoHandleGroup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UAxisGizmoHandleGroup_NoRegister(); \
public: \
	DECLARE_CLASS2(UAxisGizmoHandleGroup, UGizmoHandleGroup, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UAxisGizmoHandleGroup_NoRegister) \
	DECLARE_SERIALIZER(UAxisGizmoHandleGroup)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_150_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VIEWPORTINTERACTION_API UAxisGizmoHandleGroup(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAxisGizmoHandleGroup(UAxisGizmoHandleGroup&&) = delete; \
	UAxisGizmoHandleGroup(const UAxisGizmoHandleGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UAxisGizmoHandleGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxisGizmoHandleGroup); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAxisGizmoHandleGroup) \
	VIEWPORTINTERACTION_API virtual ~UAxisGizmoHandleGroup();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_147_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_150_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAxisGizmoHandleGroup;

// ********** End Class UAxisGizmoHandleGroup ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
