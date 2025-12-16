// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/NodeSpawners/RigVMEdGraphNodeSpawner.h"

#ifdef RIGVMEDITOR_RigVMEdGraphNodeSpawner_generated_h
#error "RigVMEdGraphNodeSpawner.generated.h already included, missing '#pragma once' in RigVMEdGraphNodeSpawner.h"
#endif
#define RIGVMEDITOR_RigVMEdGraphNodeSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMEdGraphNodeBlueprintSpawner ****************************************
struct Z_Construct_UClass_URigVMEdGraphNodeBlueprintSpawner_Statics;
RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEdGraphNodeBlueprintSpawner_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMEdGraphNodeBlueprintSpawner(); \
	friend struct ::Z_Construct_UClass_URigVMEdGraphNodeBlueprintSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMEDITOR_API UClass* ::Z_Construct_UClass_URigVMEdGraphNodeBlueprintSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMEdGraphNodeBlueprintSpawner, UBlueprintNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RigVMEditor"), Z_Construct_UClass_URigVMEdGraphNodeBlueprintSpawner_NoRegister) \
	DECLARE_SERIALIZER(URigVMEdGraphNodeBlueprintSpawner)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMEDITOR_API URigVMEdGraphNodeBlueprintSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMEdGraphNodeBlueprintSpawner(URigVMEdGraphNodeBlueprintSpawner&&) = delete; \
	URigVMEdGraphNodeBlueprintSpawner(const URigVMEdGraphNodeBlueprintSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMEDITOR_API, URigVMEdGraphNodeBlueprintSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMEdGraphNodeBlueprintSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMEdGraphNodeBlueprintSpawner) \
	RIGVMEDITOR_API virtual ~URigVMEdGraphNodeBlueprintSpawner();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h_70_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMEdGraphNodeBlueprintSpawner;

// ********** End Class URigVMEdGraphNodeBlueprintSpawner ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_EdGraph_NodeSpawners_RigVMEdGraphNodeSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
