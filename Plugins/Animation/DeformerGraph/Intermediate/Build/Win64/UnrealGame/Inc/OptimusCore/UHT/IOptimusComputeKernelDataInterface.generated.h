// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusComputeKernelDataInterface.h"

#ifdef OPTIMUSCORE_IOptimusComputeKernelDataInterface_generated_h
#error "IOptimusComputeKernelDataInterface.generated.h already included, missing '#pragma once' in IOptimusComputeKernelDataInterface.h"
#endif
#define OPTIMUSCORE_IOptimusComputeKernelDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusComputeKernelDataInterface ***********************************
struct Z_Construct_UClass_UOptimusComputeKernelDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeKernelDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusComputeKernelDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusComputeKernelDataInterface(UOptimusComputeKernelDataInterface&&) = delete; \
	UOptimusComputeKernelDataInterface(const UOptimusComputeKernelDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusComputeKernelDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusComputeKernelDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusComputeKernelDataInterface) \
	virtual ~UOptimusComputeKernelDataInterface() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusComputeKernelDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusComputeKernelDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusComputeKernelDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusComputeKernelDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusComputeKernelDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusComputeKernelDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusComputeKernelDataInterface() {} \
public: \
	typedef UOptimusComputeKernelDataInterface UClassType; \
	typedef IOptimusComputeKernelDataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_11_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusComputeKernelDataInterface;

// ********** End Interface UOptimusComputeKernelDataInterface *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
