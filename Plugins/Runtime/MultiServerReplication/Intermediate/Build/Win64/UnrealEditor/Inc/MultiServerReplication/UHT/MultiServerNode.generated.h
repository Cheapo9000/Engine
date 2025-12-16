// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiServerNode.h"

#ifdef MULTISERVERREPLICATION_MultiServerNode_generated_h
#error "MultiServerNode.generated.h already included, missing '#pragma once' in MultiServerNode.h"
#endif
#define MULTISERVERREPLICATION_MultiServerNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMultiServerNode *********************************************************
struct Z_Construct_UClass_UMultiServerNode_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_UMultiServerNode_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerNode_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiServerNode(); \
	friend struct ::Z_Construct_UClass_UMultiServerNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_UMultiServerNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiServerNode, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_UMultiServerNode_NoRegister) \
	DECLARE_SERIALIZER(UMultiServerNode)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerNode_h_66_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiServerNode(UMultiServerNode&&) = delete; \
	UMultiServerNode(const UMultiServerNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiServerNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiServerNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiServerNode) \
	NO_API virtual ~UMultiServerNode();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerNode_h_63_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerNode_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerNode_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerNode_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiServerNode;

// ********** End Class UMultiServerNode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
