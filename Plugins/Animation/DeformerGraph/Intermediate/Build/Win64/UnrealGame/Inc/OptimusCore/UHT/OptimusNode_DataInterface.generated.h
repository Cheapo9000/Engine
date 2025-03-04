// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/OptimusNode_DataInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusNode_DataInterface_generated_h
#error "OptimusNode_DataInterface.generated.h already included, missing '#pragma once' in OptimusNode_DataInterface.h"
#endif
#define OPTIMUSCORE_OptimusNode_DataInterface_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusNode_DataInterface, NO_API)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode_DataInterface(); \
	friend struct Z_Construct_UClass_UOptimusNode_DataInterface_Statics; \
public: \
	DECLARE_CLASS(UOptimusNode_DataInterface, UOptimusNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusNode_DataInterface) \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_28_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNode_DataInterface*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusNode_DataInterface(UOptimusNode_DataInterface&&); \
	UOptimusNode_DataInterface(const UOptimusNode_DataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode_DataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode_DataInterface); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode_DataInterface) \
	NO_API virtual ~UOptimusNode_DataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_20_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusNode_DataInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
