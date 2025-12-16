// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusDeformerDynamicInstanceManager.h"

#ifdef OPTIMUSCORE_OptimusDeformerDynamicInstanceManager_generated_h
#error "OptimusDeformerDynamicInstanceManager.generated.h already included, missing '#pragma once' in OptimusDeformerDynamicInstanceManager.h"
#endif
#define OPTIMUSCORE_OptimusDeformerDynamicInstanceManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusDeformerDynamicInstanceManager ***********************************
struct Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusDeformerDynamicInstanceManager(); \
	friend struct ::Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusDeformerDynamicInstanceManager, UMeshDeformerInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_NoRegister) \
	DECLARE_SERIALIZER(UOptimusDeformerDynamicInstanceManager)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusDeformerDynamicInstanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusDeformerDynamicInstanceManager(UOptimusDeformerDynamicInstanceManager&&) = delete; \
	UOptimusDeformerDynamicInstanceManager(const UOptimusDeformerDynamicInstanceManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusDeformerDynamicInstanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDeformerDynamicInstanceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusDeformerDynamicInstanceManager) \
	OPTIMUSCORE_API virtual ~UOptimusDeformerDynamicInstanceManager();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_29_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusDeformerDynamicInstanceManager;

// ********** End Class UOptimusDeformerDynamicInstanceManager *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerDynamicInstanceManager_h

// ********** Begin Enum EOptimusDeformerExecutionPhase ********************************************
#define FOREACH_ENUM_EOPTIMUSDEFORMEREXECUTIONPHASE(op) \
	op(EOptimusDeformerExecutionPhase::AfterDefaultDeformer) \
	op(EOptimusDeformerExecutionPhase::OverrideDefaultDeformer) \
	op(EOptimusDeformerExecutionPhase::BeforeDefaultDeformer) 

enum class EOptimusDeformerExecutionPhase : uint8;
template<> struct TIsUEnumClass<EOptimusDeformerExecutionPhase> { enum { Value = true }; };
template<> OPTIMUSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOptimusDeformerExecutionPhase>();
// ********** End Enum EOptimusDeformerExecutionPhase **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
