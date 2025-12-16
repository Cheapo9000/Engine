// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusComputeDataInterface.h"

#ifdef OPTIMUSCORE_OptimusComputeDataInterface_generated_h
#error "OptimusComputeDataInterface.generated.h already included, missing '#pragma once' in OptimusComputeDataInterface.h"
#endif
#define OPTIMUSCORE_OptimusComputeDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusComputeDataInterface *********************************************
struct Z_Construct_UClass_UOptimusComputeDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComputeDataInterface_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusComputeDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusComputeDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusComputeDataInterface, UComputeDataInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusComputeDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComputeDataInterface_h_149_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusComputeDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusComputeDataInterface(UOptimusComputeDataInterface&&) = delete; \
	UOptimusComputeDataInterface(const UOptimusComputeDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusComputeDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusComputeDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusComputeDataInterface) \
	OPTIMUSCORE_API virtual ~UOptimusComputeDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComputeDataInterface_h_146_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComputeDataInterface_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComputeDataInterface_h_149_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComputeDataInterface_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusComputeDataInterface;

// ********** End Class UOptimusComputeDataInterface ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusComputeDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
