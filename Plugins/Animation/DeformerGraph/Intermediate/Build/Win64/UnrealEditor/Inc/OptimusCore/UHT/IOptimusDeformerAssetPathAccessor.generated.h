// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusDeformerAssetPathAccessor.h"

#ifdef OPTIMUSCORE_IOptimusDeformerAssetPathAccessor_generated_h
#error "IOptimusDeformerAssetPathAccessor.generated.h already included, missing '#pragma once' in IOptimusDeformerAssetPathAccessor.h"
#endif
#define OPTIMUSCORE_IOptimusDeformerAssetPathAccessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusDeformerAssetPathAccessor ************************************
struct Z_Construct_UClass_UOptimusDeformerAssetPathAccessor_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerAssetPathAccessor_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerAssetPathAccessor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusDeformerAssetPathAccessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusDeformerAssetPathAccessor(UOptimusDeformerAssetPathAccessor&&) = delete; \
	UOptimusDeformerAssetPathAccessor(const UOptimusDeformerAssetPathAccessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusDeformerAssetPathAccessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDeformerAssetPathAccessor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusDeformerAssetPathAccessor) \
	virtual ~UOptimusDeformerAssetPathAccessor() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerAssetPathAccessor_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusDeformerAssetPathAccessor(); \
	friend struct ::Z_Construct_UClass_UOptimusDeformerAssetPathAccessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusDeformerAssetPathAccessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusDeformerAssetPathAccessor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusDeformerAssetPathAccessor_NoRegister) \
	DECLARE_SERIALIZER(UOptimusDeformerAssetPathAccessor)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerAssetPathAccessor_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerAssetPathAccessor_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerAssetPathAccessor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerAssetPathAccessor_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusDeformerAssetPathAccessor() {} \
public: \
	typedef UOptimusDeformerAssetPathAccessor UClassType; \
	typedef IOptimusDeformerAssetPathAccessor ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerAssetPathAccessor_h_13_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerAssetPathAccessor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerAssetPathAccessor_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusDeformerAssetPathAccessor;

// ********** End Interface UOptimusDeformerAssetPathAccessor **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerAssetPathAccessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
