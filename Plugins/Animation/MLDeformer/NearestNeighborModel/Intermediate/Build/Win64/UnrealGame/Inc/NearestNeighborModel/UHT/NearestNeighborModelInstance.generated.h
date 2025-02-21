// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NearestNeighborModelInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEARESTNEIGHBORMODEL_NearestNeighborModelInstance_generated_h
#error "NearestNeighborModelInstance.generated.h already included, missing '#pragma once' in NearestNeighborModelInstance.h"
#endif
#define NEARESTNEIGHBORMODEL_NearestNeighborModelInstance_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEval); \
	DECLARE_FUNCTION(execReset);


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborModelInstance(); \
	friend struct Z_Construct_UClass_UNearestNeighborModelInstance_Statics; \
public: \
	DECLARE_CLASS(UNearestNeighborModelInstance, UMLDeformerMorphModelInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), NO_API) \
	DECLARE_SERIALIZER(UNearestNeighborModelInstance)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNearestNeighborModelInstance(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNearestNeighborModelInstance(UNearestNeighborModelInstance&&); \
	UNearestNeighborModelInstance(const UNearestNeighborModelInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearestNeighborModelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborModelInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNearestNeighborModelInstance) \
	NO_API virtual ~UNearestNeighborModelInstance();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_19_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<class UNearestNeighborModelInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
