// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODLayer.h"

#ifdef ENGINE_HLODLayer_generated_h
#error "HLODLayer.generated.h already included, missing '#pragma once' in HLODLayer.h"
#endif
#define ENGINE_HLODLayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHLODLayer ***************************************************************
struct Z_Construct_UClass_UHLODLayer_Statics;
ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUHLODLayer(); \
	friend struct ::Z_Construct_UClass_UHLODLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UHLODLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UHLODLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UHLODLayer_NoRegister) \
	DECLARE_SERIALIZER(UHLODLayer)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHLODLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODLayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHLODLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODLayer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHLODLayer(UHLODLayer&&) = delete; \
	UHLODLayer(const UHLODLayer&) = delete; \
	ENGINE_API virtual ~UHLODLayer();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_41_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_44_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHLODLayer;

// ********** End Class UHLODLayer *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h

// ********** Begin Enum EHLODLayerType ************************************************************
#define FOREACH_ENUM_EHLODLAYERTYPE(op) \
	op(EHLODLayerType::Instancing) \
	op(EHLODLayerType::MeshMerge) \
	op(EHLODLayerType::MeshSimplify) \
	op(EHLODLayerType::MeshApproximate) \
	op(EHLODLayerType::Custom) \
	op(EHLODLayerType::CustomHLODActor) 

enum class EHLODLayerType : uint8;
template<> struct TIsUEnumClass<EHLODLayerType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHLODLayerType>();
// ********** End Enum EHLODLayerType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
