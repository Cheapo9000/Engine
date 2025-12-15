// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/InterchangeFactoryBaseNode.h"

#ifdef INTERCHANGECORE_InterchangeFactoryBaseNode_generated_h
#error "InterchangeFactoryBaseNode.generated.h already included, missing '#pragma once' in InterchangeFactoryBaseNode.h"
#endif
#define INTERCHANGECORE_InterchangeFactoryBaseNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
enum class EReimportStrategyFlags : uint8;
struct FSoftObjectPath;

// ********** Begin Class UInterchangeFactoryBaseNode **********************************************
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_189_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsRuntimeImportAllowed); \
	DECLARE_FUNCTION(execUnsetForceNodeReimport); \
	DECLARE_FUNCTION(execSetForceNodeReimport); \
	DECLARE_FUNCTION(execShouldForceNodeReimport); \
	DECLARE_FUNCTION(execSetCustomReferenceObject); \
	DECLARE_FUNCTION(execGetCustomReferenceObject); \
	DECLARE_FUNCTION(execRemoveFactoryDependencyUid); \
	DECLARE_FUNCTION(execAddFactoryDependencyUid); \
	DECLARE_FUNCTION(execGetFactoryDependency); \
	DECLARE_FUNCTION(execGetFactoryDependencies); \
	DECLARE_FUNCTION(execGetFactoryDependenciesCount); \
	DECLARE_FUNCTION(execSetCustomLevelUid); \
	DECLARE_FUNCTION(execGetCustomLevelUid); \
	DECLARE_FUNCTION(execSetCustomSubPath); \
	DECLARE_FUNCTION(execGetCustomSubPath); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execUnsetSkipNodeImport); \
	DECLARE_FUNCTION(execSetSkipNodeImport); \
	DECLARE_FUNCTION(execShouldSkipNodeImport); \
	DECLARE_FUNCTION(execSetReimportStrategyFlags); \
	DECLARE_FUNCTION(execGetReimportStrategyFlags);


struct Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics;
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_189_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFactoryBaseNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGECORE_API UClass* ::Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeFactoryBaseNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeFactoryBaseNode)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_189_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeFactoryBaseNode(UInterchangeFactoryBaseNode&&) = delete; \
	UInterchangeFactoryBaseNode(const UInterchangeFactoryBaseNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeFactoryBaseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFactoryBaseNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeFactoryBaseNode) \
	INTERCHANGECORE_API virtual ~UInterchangeFactoryBaseNode();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_186_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_189_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_189_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_189_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_189_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeFactoryBaseNode;

// ********** End Class UInterchangeFactoryBaseNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h

// ********** Begin Enum EReimportStrategyFlags ****************************************************
#define FOREACH_ENUM_EREIMPORTSTRATEGYFLAGS(op) \
	op(EReimportStrategyFlags::ApplyNoProperties) \
	op(EReimportStrategyFlags::ApplyPipelineProperties) \
	op(EReimportStrategyFlags::ApplyEditorChangedProperties) 

enum class EReimportStrategyFlags : uint8;
template<> struct TIsUEnumClass<EReimportStrategyFlags> { enum { Value = true }; };
template<> INTERCHANGECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EReimportStrategyFlags>();
// ********** End Enum EReimportStrategyFlags ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
