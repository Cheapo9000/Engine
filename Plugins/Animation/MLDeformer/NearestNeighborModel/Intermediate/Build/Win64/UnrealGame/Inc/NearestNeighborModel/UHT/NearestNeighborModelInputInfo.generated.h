// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NearestNeighborModelInputInfo.h"

#ifdef NEARESTNEIGHBORMODEL_NearestNeighborModelInputInfo_generated_h
#error "NearestNeighborModelInputInfo.generated.h already included, missing '#pragma once' in NearestNeighborModelInputInfo.h"
#endif
#define NEARESTNEIGHBORMODEL_NearestNeighborModelInputInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNearestNeighborModelInputInfo *******************************************
struct Z_Construct_UClass_UNearestNeighborModelInputInfo_Statics;
NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModelInputInfo_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInputInfo_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborModelInputInfo(); \
	friend struct ::Z_Construct_UClass_UNearestNeighborModelInputInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEARESTNEIGHBORMODEL_API UClass* ::Z_Construct_UClass_UNearestNeighborModelInputInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UNearestNeighborModelInputInfo, UMLDeformerMorphModelInputInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), Z_Construct_UClass_UNearestNeighborModelInputInfo_NoRegister) \
	DECLARE_SERIALIZER(UNearestNeighborModelInputInfo)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInputInfo_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NEARESTNEIGHBORMODEL_API UNearestNeighborModelInputInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNearestNeighborModelInputInfo(UNearestNeighborModelInputInfo&&) = delete; \
	UNearestNeighborModelInputInfo(const UNearestNeighborModelInputInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEARESTNEIGHBORMODEL_API, UNearestNeighborModelInputInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborModelInputInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborModelInputInfo) \
	NEARESTNEIGHBORMODEL_API virtual ~UNearestNeighborModelInputInfo();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInputInfo_h_15_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInputInfo_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInputInfo_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInputInfo_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNearestNeighborModelInputInfo;

// ********** End Class UNearestNeighborModelInputInfo *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInputInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
