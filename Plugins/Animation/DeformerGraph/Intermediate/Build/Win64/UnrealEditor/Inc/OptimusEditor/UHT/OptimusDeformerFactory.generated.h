// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusDeformerFactory.h"

#ifdef OPTIMUSEDITOR_OptimusDeformerFactory_generated_h
#error "OptimusDeformerFactory.generated.h already included, missing '#pragma once' in OptimusDeformerFactory.h"
#endif
#define OPTIMUSEDITOR_OptimusDeformerFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusDeformerFactory **************************************************
struct Z_Construct_UClass_UOptimusDeformerFactory_Statics;
OPTIMUSEDITOR_API UClass* Z_Construct_UClass_UOptimusDeformerFactory_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusDeformerFactory(); \
	friend struct ::Z_Construct_UClass_UOptimusDeformerFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSEDITOR_API UClass* ::Z_Construct_UClass_UOptimusDeformerFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusDeformerFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusEditor"), Z_Construct_UClass_UOptimusDeformerFactory_NoRegister) \
	DECLARE_SERIALIZER(UOptimusDeformerFactory)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusDeformerFactory(UOptimusDeformerFactory&&) = delete; \
	UOptimusDeformerFactory(const UOptimusDeformerFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusDeformerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDeformerFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusDeformerFactory) \
	NO_API virtual ~UOptimusDeformerFactory();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h_13_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusDeformerFactory;

// ********** End Class UOptimusDeformerFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
