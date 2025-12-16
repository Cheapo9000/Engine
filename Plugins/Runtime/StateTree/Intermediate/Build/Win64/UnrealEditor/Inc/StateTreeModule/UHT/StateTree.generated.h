// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTree.h"

#ifdef STATETREEMODULE_StateTree_generated_h
#error "StateTree.generated.h already included, missing '#pragma once' in StateTree.h"
#endif
#define STATETREEMODULE_StateTree_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UStateTreeExtension;

// ********** Begin Class UStateTree ***************************************************************
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_GetExtension);


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_117_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UStateTree, STATETREEMODULE_API)


struct Z_Construct_UClass_UStateTree_Statics;
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTree(); \
	friend struct ::Z_Construct_UClass_UStateTree_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTree_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTree, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeModule"), Z_Construct_UClass_UStateTree_NoRegister) \
	DECLARE_SERIALIZER(UStateTree) \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_117_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEMODULE_API UStateTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTree(UStateTree&&) = delete; \
	UStateTree(const UStateTree&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEMODULE_API, UStateTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTree) \
	STATETREEMODULE_API virtual ~UStateTree();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_114_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTree;

// ********** End Class UStateTree *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
