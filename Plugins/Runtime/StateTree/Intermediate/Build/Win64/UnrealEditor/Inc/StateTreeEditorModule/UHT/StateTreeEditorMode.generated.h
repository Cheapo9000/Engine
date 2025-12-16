// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEditorMode.h"

#ifdef STATETREEEDITORMODULE_StateTreeEditorMode_generated_h
#error "StateTreeEditorMode.generated.h already included, missing '#pragma once' in StateTreeEditorMode.h"
#endif
#define STATETREEEDITORMODULE_StateTreeEditorMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeEditorMode *****************************************************
struct Z_Construct_UClass_UStateTreeEditorMode_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorMode_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeEditorMode(); \
	friend struct ::Z_Construct_UClass_UStateTreeEditorMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeEditorMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeEditorMode, UEdMode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeEditorMode_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeEditorMode)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorMode_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeEditorMode(UStateTreeEditorMode&&) = delete; \
	UStateTreeEditorMode(const UStateTreeEditorMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEEDITORMODULE_API, UStateTreeEditorMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateTreeEditorMode) \
	STATETREEEDITORMODULE_API virtual ~UStateTreeEditorMode();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorMode_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorMode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeEditorMode;

// ********** End Class UStateTreeEditorMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
