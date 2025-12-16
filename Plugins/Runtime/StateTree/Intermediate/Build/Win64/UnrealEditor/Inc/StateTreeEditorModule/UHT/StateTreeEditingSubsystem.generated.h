// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEditingSubsystem.h"

#ifdef STATETREEEDITORMODULE_StateTreeEditingSubsystem_generated_h
#error "StateTreeEditingSubsystem.generated.h already included, missing '#pragma once' in StateTreeEditingSubsystem.h"
#endif
#define STATETREEEDITORMODULE_StateTreeEditingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeEditingSubsystem ***********************************************
struct Z_Construct_UClass_UStateTreeEditingSubsystem_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditingSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditingSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeEditingSubsystem(); \
	friend struct ::Z_Construct_UClass_UStateTreeEditingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeEditingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeEditingSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeEditingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeEditingSubsystem)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditingSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeEditingSubsystem(UStateTreeEditingSubsystem&&) = delete; \
	UStateTreeEditingSubsystem(const UStateTreeEditingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEEDITORMODULE_API, UStateTreeEditingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateTreeEditingSubsystem) \
	STATETREEEDITORMODULE_API virtual ~UStateTreeEditingSubsystem();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditingSubsystem_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditingSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditingSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditingSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeEditingSubsystem;

// ********** End Class UStateTreeEditingSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
