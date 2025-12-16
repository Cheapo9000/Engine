// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusDeprecatedExecutionDataInterface.h"

#ifdef OPTIMUSCORE_IOptimusDeprecatedExecutionDataInterface_generated_h
#error "IOptimusDeprecatedExecutionDataInterface.generated.h already included, missing '#pragma once' in IOptimusDeprecatedExecutionDataInterface.h"
#endif
#define OPTIMUSCORE_IOptimusDeprecatedExecutionDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusDeprecatedExecutionDataInterface *****************************
struct Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusDeprecatedExecutionDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusDeprecatedExecutionDataInterface(UOptimusDeprecatedExecutionDataInterface&&) = delete; \
	UOptimusDeprecatedExecutionDataInterface(const UOptimusDeprecatedExecutionDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusDeprecatedExecutionDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDeprecatedExecutionDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusDeprecatedExecutionDataInterface) \
	virtual ~UOptimusDeprecatedExecutionDataInterface() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusDeprecatedExecutionDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusDeprecatedExecutionDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusDeprecatedExecutionDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusDeprecatedExecutionDataInterface() {} \
public: \
	typedef UOptimusDeprecatedExecutionDataInterface UClassType; \
	typedef IOptimusDeprecatedExecutionDataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_11_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusDeprecatedExecutionDataInterface;

// ********** End Interface UOptimusDeprecatedExecutionDataInterface *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
