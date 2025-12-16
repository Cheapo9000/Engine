// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeLevelSequenceFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeLevelSequenceFactoryNode_generated_h
#error "InterchangeLevelSequenceFactoryNode.generated.h already included, missing '#pragma once' in InterchangeLevelSequenceFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeLevelSequenceFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeLevelSequenceFactoryNode *************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomFrameRate); \
	DECLARE_FUNCTION(execSetCustomFrameRate); \
	DECLARE_FUNCTION(execRemoveCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execAddCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUids); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUidCount);


struct Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLevelSequenceFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeLevelSequenceFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeLevelSequenceFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeLevelSequenceFactoryNode(UInterchangeLevelSequenceFactoryNode&&) = delete; \
	UInterchangeLevelSequenceFactoryNode(const UInterchangeLevelSequenceFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeLevelSequenceFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLevelSequenceFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeLevelSequenceFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeLevelSequenceFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_12_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeLevelSequenceFactoryNode;

// ********** End Class UInterchangeLevelSequenceFactoryNode ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
