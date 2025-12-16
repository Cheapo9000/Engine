// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IStateTreeEditorHost.h"

#ifdef STATETREEEDITORMODULE_IStateTreeEditorHost_generated_h
#error "IStateTreeEditorHost.generated.h already included, missing '#pragma once' in IStateTreeEditorHost.h"
#endif
#define STATETREEEDITORMODULE_IStateTreeEditorHost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeEditorContext **************************************************
struct Z_Construct_UClass_UStateTreeEditorContext_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorContext_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_IStateTreeEditorHost_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeEditorContext(); \
	friend struct ::Z_Construct_UClass_UStateTreeEditorContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeEditorContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeEditorContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeEditorContext_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeEditorContext)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_IStateTreeEditorHost_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEEDITORMODULE_API UStateTreeEditorContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeEditorContext(UStateTreeEditorContext&&) = delete; \
	UStateTreeEditorContext(const UStateTreeEditorContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEEDITORMODULE_API, UStateTreeEditorContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeEditorContext) \
	STATETREEEDITORMODULE_API virtual ~UStateTreeEditorContext();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_IStateTreeEditorHost_h_39_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_IStateTreeEditorHost_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_IStateTreeEditorHost_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_IStateTreeEditorHost_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeEditorContext;

// ********** End Class UStateTreeEditorContext ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_IStateTreeEditorHost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
