// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeAudioSoundWaveNode.h"

#ifdef INTERCHANGENODES_InterchangeAudioSoundWaveNode_generated_h
#error "InterchangeAudioSoundWaveNode.generated.h already included, missing '#pragma once' in InterchangeAudioSoundWaveNode.h"
#endif
#define INTERCHANGENODES_InterchangeAudioSoundWaveNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeAudioSoundWaveNode *******************************************
struct Z_Construct_UClass_UInterchangeAudioSoundWaveNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAudioSoundWaveNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAudioSoundWaveNode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAudioSoundWaveNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeAudioSoundWaveNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeAudioSoundWaveNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAudioSoundWaveNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeAudioSoundWaveNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAudioSoundWaveNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAudioSoundWaveNode_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeAudioSoundWaveNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAudioSoundWaveNode(UInterchangeAudioSoundWaveNode&&) = delete; \
	UInterchangeAudioSoundWaveNode(const UInterchangeAudioSoundWaveNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeAudioSoundWaveNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAudioSoundWaveNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAudioSoundWaveNode) \
	INTERCHANGENODES_API virtual ~UInterchangeAudioSoundWaveNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAudioSoundWaveNode_h_21_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAudioSoundWaveNode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAudioSoundWaveNode_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAudioSoundWaveNode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAudioSoundWaveNode;

// ********** End Class UInterchangeAudioSoundWaveNode *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAudioSoundWaveNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
