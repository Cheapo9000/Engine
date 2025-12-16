// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusVariableDescription.h"

#ifdef OPTIMUSCORE_OptimusVariableDescription_generated_h
#error "OptimusVariableDescription.generated.h already included, missing '#pragma once' in OptimusVariableDescription.h"
#endif
#define OPTIMUSCORE_OptimusVariableDescription_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusVariableMetaDataEntry *************************************
struct Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusVariableMetaDataEntry;
// ********** End ScriptStruct FOptimusVariableMetaDataEntry ***************************************

// ********** Begin Class UOptimusVariableDescription **********************************************
struct Z_Construct_UClass_UOptimusVariableDescription_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusVariableDescription(); \
	friend struct ::Z_Construct_UClass_UOptimusVariableDescription_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusVariableDescription_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusVariableDescription, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusVariableDescription_NoRegister) \
	DECLARE_SERIALIZER(UOptimusVariableDescription)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusVariableDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusVariableDescription(UOptimusVariableDescription&&) = delete; \
	UOptimusVariableDescription(const UOptimusVariableDescription&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusVariableDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusVariableDescription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusVariableDescription) \
	OPTIMUSCORE_API virtual ~UOptimusVariableDescription();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_42_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusVariableDescription;

// ********** End Class UOptimusVariableDescription ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
