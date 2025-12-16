// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeFunctionLibrary.h"

#ifdef STATETREEMODULE_StateTreeFunctionLibrary_generated_h
#error "StateTreeFunctionLibrary.generated.h already included, missing '#pragma once' in StateTreeFunctionLibrary.h"
#endif
#define STATETREEMODULE_StateTreeFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStateTree;
struct FGuid;
struct FStateTreeReference;

// ********** Begin Class UStateTreeFunctionLibrary ************************************************
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeStateTreeReference); \
	DECLARE_FUNCTION(execSetStateTree);


struct Z_Construct_UClass_UStateTreeFunctionLibrary_Statics;
	struct Z_Construct_UFunction_UStateTreeFunctionLibrary_K2_SetParametersProperty_Statics; \
	struct Z_Construct_UFunction_UStateTreeFunctionLibrary_K2_GetParametersProperty_Statics; \
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UStateTreeFunctionLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_UStateTreeFunctionLibrary_K2_SetParametersProperty_Statics; \
	friend struct ::Z_Construct_UFunction_UStateTreeFunctionLibrary_K2_GetParametersProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeModule"), Z_Construct_UClass_UStateTreeFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeFunctionLibrary)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEMODULE_API UStateTreeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeFunctionLibrary(UStateTreeFunctionLibrary&&) = delete; \
	UStateTreeFunctionLibrary(const UStateTreeFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEMODULE_API, UStateTreeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeFunctionLibrary); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeFunctionLibrary) \
	STATETREEMODULE_API virtual ~UStateTreeFunctionLibrary();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeFunctionLibrary;

// ********** End Class UStateTreeFunctionLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
