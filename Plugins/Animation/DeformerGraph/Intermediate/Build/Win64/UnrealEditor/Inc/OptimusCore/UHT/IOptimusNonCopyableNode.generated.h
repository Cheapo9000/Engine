// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusNonCopyableNode.h"

#ifdef OPTIMUSCORE_IOptimusNonCopyableNode_generated_h
#error "IOptimusNonCopyableNode.generated.h already included, missing '#pragma once' in IOptimusNonCopyableNode.h"
#endif
#define OPTIMUSCORE_IOptimusNonCopyableNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusNonCopyableNode **********************************************
struct Z_Construct_UClass_UOptimusNonCopyableNode_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNonCopyableNode_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusNonCopyableNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNonCopyableNode(UOptimusNonCopyableNode&&) = delete; \
	UOptimusNonCopyableNode(const UOptimusNonCopyableNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusNonCopyableNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNonCopyableNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusNonCopyableNode) \
	virtual ~UOptimusNonCopyableNode() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusNonCopyableNode(); \
	friend struct ::Z_Construct_UClass_UOptimusNonCopyableNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNonCopyableNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNonCopyableNode, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNonCopyableNode_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNonCopyableNode)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusNonCopyableNode() {} \
public: \
	typedef UOptimusNonCopyableNode UClassType; \
	typedef IOptimusNonCopyableNode ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_9_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNonCopyableNode;

// ********** End Interface UOptimusNonCopyableNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
