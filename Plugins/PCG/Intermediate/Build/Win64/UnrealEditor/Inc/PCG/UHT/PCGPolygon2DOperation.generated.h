// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Polygon/PCGPolygon2DOperation.h"

#ifdef PCG_PCGPolygon2DOperation_generated_h
#error "PCGPolygon2DOperation.generated.h already included, missing '#pragma once' in PCGPolygon2DOperation.h"
#endif
#define PCG_PCGPolygon2DOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGPolygon2DOperationSettings *******************************************
struct Z_Construct_UClass_UPCGPolygon2DOperationSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPolygon2DOperationSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGPolygon2DOperation_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPolygon2DOperationSettings(); \
	friend struct ::Z_Construct_UClass_UPCGPolygon2DOperationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPolygon2DOperationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPolygon2DOperationSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPolygon2DOperationSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGPolygon2DOperationSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGPolygon2DOperation_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGPolygon2DOperationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPolygon2DOperationSettings(UPCGPolygon2DOperationSettings&&) = delete; \
	UPCGPolygon2DOperationSettings(const UPCGPolygon2DOperationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPolygon2DOperationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPolygon2DOperationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPolygon2DOperationSettings) \
	PCG_API virtual ~UPCGPolygon2DOperationSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGPolygon2DOperation_h_40_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGPolygon2DOperation_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGPolygon2DOperation_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGPolygon2DOperation_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPolygon2DOperationSettings;

// ********** End Class UPCGPolygon2DOperationSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGPolygon2DOperation_h

// ********** Begin Enum EPCGPolygonOperation ******************************************************
#define FOREACH_ENUM_EPCGPOLYGONOPERATION(op) \
	op(EPCGPolygonOperation::Union) \
	op(EPCGPolygonOperation::Difference) \
	op(EPCGPolygonOperation::Intersection) \
	op(EPCGPolygonOperation::PairwiseIntersection) \
	op(EPCGPolygonOperation::InnerIntersection) \
	op(EPCGPolygonOperation::ExclusiveOr) \
	op(EPCGPolygonOperation::CutWithPaths) 

enum class EPCGPolygonOperation : uint8;
template<> struct TIsUEnumClass<EPCGPolygonOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPolygonOperation>();
// ********** End Enum EPCGPolygonOperation ********************************************************

// ********** Begin Enum EPCGPolygonOperationMetadataMode ******************************************
#define FOREACH_ENUM_EPCGPOLYGONOPERATIONMETADATAMODE(op) \
	op(EPCGPolygonOperationMetadataMode::None) \
	op(EPCGPolygonOperationMetadataMode::SourceOnly) \
	op(EPCGPolygonOperationMetadataMode::Full) 

enum class EPCGPolygonOperationMetadataMode : uint8;
template<> struct TIsUEnumClass<EPCGPolygonOperationMetadataMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPolygonOperationMetadataMode>();
// ********** End Enum EPCGPolygonOperationMetadataMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
