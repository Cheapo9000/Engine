// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusComputeKernelProvider.h"

#ifdef OPTIMUSCORE_IOptimusComputeKernelProvider_generated_h
#error "IOptimusComputeKernelProvider.generated.h already included, missing '#pragma once' in IOptimusComputeKernelProvider.h"
#endif
#define OPTIMUSCORE_IOptimusComputeKernelProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusComputeKernelProvider ****************************************
struct Z_Construct_UClass_UOptimusComputeKernelProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeKernelProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusComputeKernelProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusComputeKernelProvider(UOptimusComputeKernelProvider&&) = delete; \
	UOptimusComputeKernelProvider(const UOptimusComputeKernelProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusComputeKernelProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusComputeKernelProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusComputeKernelProvider) \
	virtual ~UOptimusComputeKernelProvider() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_63_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusComputeKernelProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusComputeKernelProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusComputeKernelProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusComputeKernelProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusComputeKernelProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusComputeKernelProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_63_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_63_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_63_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_63_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusComputeKernelProvider() {} \
public: \
	typedef UOptimusComputeKernelProvider UClassType; \
	typedef IOptimusComputeKernelProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_59_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_63_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusComputeKernelProvider;

// ********** End Interface UOptimusComputeKernelProvider ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
