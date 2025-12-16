// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeFactory.h"

#ifdef STATETREEEDITORMODULE_StateTreeFactory_generated_h
#error "StateTreeFactory.generated.h already included, missing '#pragma once' in StateTreeFactory.h"
#endif
#define STATETREEEDITORMODULE_StateTreeFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeFactory ********************************************************
struct Z_Construct_UClass_UStateTreeFactory_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUStateTreeFactory(); \
	friend struct ::Z_Construct_UClass_UStateTreeFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeFactory_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeFactory)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEEDITORMODULE_API UStateTreeFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEEDITORMODULE_API, UStateTreeFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeFactory(UStateTreeFactory&&) = delete; \
	UStateTreeFactory(const UStateTreeFactory&) = delete; \
	STATETREEEDITORMODULE_API virtual ~UStateTreeFactory();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeFactory_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeFactory_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeFactory;

// ********** End Class UStateTreeFactory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
