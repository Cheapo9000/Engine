// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/MeshDeformerProducer.h"

#ifdef ENGINE_MeshDeformerProducer_generated_h
#error "MeshDeformerProducer.generated.h already included, missing '#pragma once' in MeshDeformerProducer.h"
#endif
#define ENGINE_MeshDeformerProducer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMeshDeformerProducer ************************************************
struct Z_Construct_UClass_UMeshDeformerProducer_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerProducer_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerProducer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMeshDeformerProducer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshDeformerProducer(UMeshDeformerProducer&&) = delete; \
	UMeshDeformerProducer(const UMeshDeformerProducer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMeshDeformerProducer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDeformerProducer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshDeformerProducer) \
	virtual ~UMeshDeformerProducer() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerProducer_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeshDeformerProducer(); \
	friend struct ::Z_Construct_UClass_UMeshDeformerProducer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMeshDeformerProducer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshDeformerProducer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMeshDeformerProducer_NoRegister) \
	DECLARE_SERIALIZER(UMeshDeformerProducer)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerProducer_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerProducer_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerProducer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerProducer_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeshDeformerProducer() {} \
public: \
	typedef UMeshDeformerProducer UClassType; \
	typedef IMeshDeformerProducer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerProducer_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerProducer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerProducer_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshDeformerProducer;

// ********** End Interface UMeshDeformerProducer **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerProducer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
