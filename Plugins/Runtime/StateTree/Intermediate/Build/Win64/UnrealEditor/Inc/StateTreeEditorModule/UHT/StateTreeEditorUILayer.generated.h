// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEditorUILayer.h"

#ifdef STATETREEEDITORMODULE_StateTreeEditorUILayer_generated_h
#error "StateTreeEditorUILayer.generated.h already included, missing '#pragma once' in StateTreeEditorUILayer.h"
#endif
#define STATETREEEDITORMODULE_StateTreeEditorUILayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeEditorUISubsystem **********************************************
struct Z_Construct_UClass_UStateTreeEditorUISubsystem_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorUISubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUILayer_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeEditorUISubsystem(); \
	friend struct ::Z_Construct_UClass_UStateTreeEditorUISubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeEditorUISubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeEditorUISubsystem, UAssetEditorUISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeEditorUISubsystem_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeEditorUISubsystem)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUILayer_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTreeEditorUISubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeEditorUISubsystem(UStateTreeEditorUISubsystem&&) = delete; \
	UStateTreeEditorUISubsystem(const UStateTreeEditorUISubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeEditorUISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorUISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateTreeEditorUISubsystem) \
	NO_API virtual ~UStateTreeEditorUISubsystem();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUILayer_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUILayer_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUILayer_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUILayer_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeEditorUISubsystem;

// ********** End Class UStateTreeEditorUISubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUILayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
