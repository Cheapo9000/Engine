// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGPolygon2DData.h"

#ifdef PCG_PCGPolygon2DData_generated_h
#error "PCGPolygon2DData.generated.h already included, missing '#pragma once' in PCGPolygon2DData.h"
#endif
#define PCG_PCGPolygon2DData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGDataTypeInfoPolygon2D *****************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoPolygon2D_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoPolygon2D_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfoPolyline Super;


struct FPCGDataTypeInfoPolygon2D;
// ********** End ScriptStruct FPCGDataTypeInfoPolygon2D *******************************************

// ********** Begin Class UPCGPolygon2DData ********************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h_72_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPCGPolygon2DData, PCG_API)


struct Z_Construct_UClass_UPCGPolygon2DData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPolygon2DData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPolygon2DData(); \
	friend struct ::Z_Construct_UClass_UPCGPolygon2DData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPolygon2DData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPolygon2DData, UPCGPolyLineData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPolygon2DData_NoRegister) \
	DECLARE_SERIALIZER(UPCGPolygon2DData) \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h_72_ARCHIVESERIALIZER


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h_72_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPolygon2DData(UPCGPolygon2DData&&) = delete; \
	UPCGPolygon2DData(const UPCGPolygon2DData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPolygon2DData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPolygon2DData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPolygon2DData) \
	PCG_API virtual ~UPCGPolygon2DData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h_69_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPolygon2DData;

// ********** End Class UPCGPolygon2DData **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPolygon2DData_h

// ********** Begin Enum EPCGPolygon2DProperties ***************************************************
#define FOREACH_ENUM_EPCGPOLYGON2DPROPERTIES(op) \
	op(EPCGPolygon2DProperties::Position) \
	op(EPCGPolygon2DProperties::Rotation) \
	op(EPCGPolygon2DProperties::SegmentIndex) \
	op(EPCGPolygon2DProperties::HoleIndex) \
	op(EPCGPolygon2DProperties::SegmentLength) \
	op(EPCGPolygon2DProperties::LocalPosition) \
	op(EPCGPolygon2DProperties::LocalRotation) 

enum class EPCGPolygon2DProperties : uint8;
template<> struct TIsUEnumClass<EPCGPolygon2DProperties> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPolygon2DProperties>();
// ********** End Enum EPCGPolygon2DProperties *****************************************************

// ********** Begin Enum EPCGPolygon2DDataProperties ***********************************************
#define FOREACH_ENUM_EPCGPOLYGON2DDATAPROPERTIES(op) \
	op(EPCGPolygon2DDataProperties::Transform) \
	op(EPCGPolygon2DDataProperties::Area) \
	op(EPCGPolygon2DDataProperties::Perimeter) \
	op(EPCGPolygon2DDataProperties::BoundsMin) \
	op(EPCGPolygon2DDataProperties::BoundsMax) \
	op(EPCGPolygon2DDataProperties::SegmentCount) \
	op(EPCGPolygon2DDataProperties::OuterSegmentCount) \
	op(EPCGPolygon2DDataProperties::HoleCount) \
	op(EPCGPolygon2DDataProperties::LongestOuterSegmentIndex) \
	op(EPCGPolygon2DDataProperties::IsClockwise) 

enum class EPCGPolygon2DDataProperties : uint8;
template<> struct TIsUEnumClass<EPCGPolygon2DDataProperties> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPolygon2DDataProperties>();
// ********** End Enum EPCGPolygon2DDataProperties *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
