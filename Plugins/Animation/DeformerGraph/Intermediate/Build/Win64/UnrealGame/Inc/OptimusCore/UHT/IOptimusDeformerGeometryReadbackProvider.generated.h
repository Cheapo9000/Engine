// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusDeformerGeometryReadbackProvider.h"

#ifdef OPTIMUSCORE_IOptimusDeformerGeometryReadbackProvider_generated_h
#error "IOptimusDeformerGeometryReadbackProvider.generated.h already included, missing '#pragma once' in IOptimusDeformerGeometryReadbackProvider.h"
#endif
#define OPTIMUSCORE_IOptimusDeformerGeometryReadbackProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusDeformerGeometryReadbackProvider *****************************
struct Z_Construct_UClass_UOptimusDeformerGeometryReadbackProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerGeometryReadbackProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerGeometryReadbackProvider_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusDeformerGeometryReadbackProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusDeformerGeometryReadbackProvider(UOptimusDeformerGeometryReadbackProvider&&) = delete; \
	UOptimusDeformerGeometryReadbackProvider(const UOptimusDeformerGeometryReadbackProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusDeformerGeometryReadbackProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDeformerGeometryReadbackProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusDeformerGeometryReadbackProvider) \
	virtual ~UOptimusDeformerGeometryReadbackProvider() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerGeometryReadbackProvider_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusDeformerGeometryReadbackProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusDeformerGeometryReadbackProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusDeformerGeometryReadbackProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusDeformerGeometryReadbackProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusDeformerGeometryReadbackProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusDeformerGeometryReadbackProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerGeometryReadbackProvider_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerGeometryReadbackProvider_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerGeometryReadbackProvider_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerGeometryReadbackProvider_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusDeformerGeometryReadbackProvider() {} \
public: \
	typedef UOptimusDeformerGeometryReadbackProvider UClassType; \
	typedef IOptimusDeformerGeometryReadbackProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerGeometryReadbackProvider_h_12_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerGeometryReadbackProvider_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerGeometryReadbackProvider_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusDeformerGeometryReadbackProvider;

// ********** End Interface UOptimusDeformerGeometryReadbackProvider *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerGeometryReadbackProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
