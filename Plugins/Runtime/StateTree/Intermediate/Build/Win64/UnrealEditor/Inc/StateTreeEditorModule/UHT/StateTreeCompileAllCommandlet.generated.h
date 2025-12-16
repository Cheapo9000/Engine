// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/StateTreeCompileAllCommandlet.h"

#ifdef STATETREEEDITORMODULE_StateTreeCompileAllCommandlet_generated_h
#error "StateTreeCompileAllCommandlet.generated.h already included, missing '#pragma once' in StateTreeCompileAllCommandlet.h"
#endif
#define STATETREEEDITORMODULE_StateTreeCompileAllCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeCompileAllCommandlet *******************************************
struct Z_Construct_UClass_UStateTreeCompileAllCommandlet_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeCompileAllCommandlet_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeCompileAllCommandlet(); \
	friend struct ::Z_Construct_UClass_UStateTreeCompileAllCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeCompileAllCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeCompileAllCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeCompileAllCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeCompileAllCommandlet)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeCompileAllCommandlet(UStateTreeCompileAllCommandlet&&) = delete; \
	UStateTreeCompileAllCommandlet(const UStateTreeCompileAllCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeCompileAllCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeCompileAllCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeCompileAllCommandlet) \
	NO_API virtual ~UStateTreeCompileAllCommandlet();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeCompileAllCommandlet;

// ********** End Class UStateTreeCompileAllCommandlet *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
