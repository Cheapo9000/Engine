// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/UnsetUVsAction.h"

#ifdef UVEDITOR_UnsetUVsAction_generated_h
#error "UnsetUVsAction.generated.h already included, missing '#pragma once' in UnsetUVsAction.h"
#endif
#define UVEDITOR_UnsetUVsAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnsetUVsAction **********************************************************
struct Z_Construct_UClass_UUnsetUVsAction_Statics;
UVEDITOR_API UClass* Z_Construct_UClass_UUnsetUVsAction_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Private_Actions_UnsetUVsAction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnsetUVsAction(); \
	friend struct ::Z_Construct_UClass_UUnsetUVsAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITOR_API UClass* ::Z_Construct_UClass_UUnsetUVsAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnsetUVsAction, UUVToolAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditor"), Z_Construct_UClass_UUnsetUVsAction_NoRegister) \
	DECLARE_SERIALIZER(UUnsetUVsAction)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Private_Actions_UnsetUVsAction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnsetUVsAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnsetUVsAction(UUnsetUVsAction&&) = delete; \
	UUnsetUVsAction(const UUnsetUVsAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnsetUVsAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnsetUVsAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnsetUVsAction) \
	NO_API virtual ~UUnsetUVsAction();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Private_Actions_UnsetUVsAction_h_12_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Private_Actions_UnsetUVsAction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Private_Actions_UnsetUVsAction_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Private_Actions_UnsetUVsAction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnsetUVsAction;

// ********** End Class UUnsetUVsAction ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Private_Actions_UnsetUVsAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
