// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/RigVMEdGraph.h"

#ifdef RIGVMDEVELOPER_RigVMEdGraph_generated_h
#error "RigVMEdGraph.generated.h already included, missing '#pragma once' in RigVMEdGraph.h"
#endif
#define RIGVMDEVELOPER_RigVMEdGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMEdGraph ************************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_138_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMEdGraph, RIGVMDEVELOPER_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_138_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_URigVMEdGraph_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraph_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMEdGraph(); \
	friend struct ::Z_Construct_UClass_URigVMEdGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMEdGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMEdGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMEdGraph_NoRegister) \
	DECLARE_SERIALIZER(URigVMEdGraph) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_138_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<URigVMEdGraph*>(this); }


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_138_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMEdGraph(URigVMEdGraph&&) = delete; \
	URigVMEdGraph(const URigVMEdGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMEdGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMEdGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMEdGraph) \
	RIGVMDEVELOPER_API virtual ~URigVMEdGraph();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_135_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_138_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMEdGraph;

// ********** End Class URigVMEdGraph **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
