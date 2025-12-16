// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/Kismet/RigVMBlueprintCompilerExtension.h"

#ifdef RIGVMEDITOR_RigVMBlueprintCompilerExtension_generated_h
#error "RigVMBlueprintCompilerExtension.generated.h already included, missing '#pragma once' in RigVMBlueprintCompilerExtension.h"
#endif
#define RIGVMEDITOR_RigVMBlueprintCompilerExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMBlueprintCompiledData ***************************************
struct Z_Construct_UScriptStruct_FRigVMBlueprintCompiledData_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Private_Editor_Kismet_RigVMBlueprintCompilerExtension_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMBlueprintCompiledData_Statics; \
	RIGVMEDITOR_API static class UScriptStruct* StaticStruct();


struct FRigVMBlueprintCompiledData;
// ********** End ScriptStruct FRigVMBlueprintCompiledData *****************************************

// ********** Begin Class URigVMBlueprintCompilerExtension *****************************************
struct Z_Construct_UClass_URigVMBlueprintCompilerExtension_Statics;
RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMBlueprintCompilerExtension_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Private_Editor_Kismet_RigVMBlueprintCompilerExtension_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMBlueprintCompilerExtension(); \
	friend struct ::Z_Construct_UClass_URigVMBlueprintCompilerExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMEDITOR_API UClass* ::Z_Construct_UClass_URigVMBlueprintCompilerExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMBlueprintCompilerExtension, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RigVMEditor"), Z_Construct_UClass_URigVMBlueprintCompilerExtension_NoRegister) \
	DECLARE_SERIALIZER(URigVMBlueprintCompilerExtension)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Private_Editor_Kismet_RigVMBlueprintCompilerExtension_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMBlueprintCompilerExtension(URigVMBlueprintCompilerExtension&&) = delete; \
	URigVMBlueprintCompilerExtension(const URigVMBlueprintCompilerExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMEDITOR_API, URigVMBlueprintCompilerExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMBlueprintCompilerExtension); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMBlueprintCompilerExtension) \
	RIGVMEDITOR_API virtual ~URigVMBlueprintCompilerExtension();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Private_Editor_Kismet_RigVMBlueprintCompilerExtension_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Private_Editor_Kismet_RigVMBlueprintCompilerExtension_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Private_Editor_Kismet_RigVMBlueprintCompilerExtension_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Private_Editor_Kismet_RigVMBlueprintCompilerExtension_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMBlueprintCompilerExtension;

// ********** End Class URigVMBlueprintCompilerExtension *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Private_Editor_Kismet_RigVMBlueprintCompilerExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
