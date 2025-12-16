// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataTypes/PVData.h"

#ifdef PROCEDURALVEGETATION_PVData_generated_h
#error "PVData.generated.h already included, missing '#pragma once' in PVData.h"
#endif
#define PROCEDURALVEGETATION_PVData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPVVisualizationSettings ******************************************
struct Z_Construct_UScriptStruct_FPVVisualizationSettings_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVData_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVVisualizationSettings_Statics; \
	PROCEDURALVEGETATION_API static class UScriptStruct* StaticStruct();


struct FPVVisualizationSettings;
// ********** End ScriptStruct FPVVisualizationSettings ********************************************

// ********** Begin ScriptStruct FPVDebugSettings **************************************************
struct Z_Construct_UScriptStruct_FPVDebugSettings_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVData_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVDebugSettings_Statics; \
	PROCEDURALVEGETATION_API static class UScriptStruct* StaticStruct();


struct FPVDebugSettings;
// ********** End ScriptStruct FPVDebugSettings ****************************************************

// ********** Begin Class UPVData ******************************************************************
struct Z_Construct_UClass_UPVData_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPVData_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVData_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVData(); \
	friend struct ::Z_Construct_UClass_UPVData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPVData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVData, UPCGSpatialData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPVData_NoRegister) \
	DECLARE_SERIALIZER(UPVData)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVData_h_98_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVData(UPVData&&) = delete; \
	UPVData(const UPVData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPVData) \
	NO_API virtual ~UPVData();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVData_h_95_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVData_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVData_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVData_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVData;

// ********** End Class UPVData ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_DataTypes_PVData_h

// ********** Begin Enum EPVRenderType *************************************************************
#define FOREACH_ENUM_EPVRENDERTYPE(op) \
	op(EPVRenderType::None) \
	op(EPVRenderType::PointData) \
	op(EPVRenderType::Mesh) \
	op(EPVRenderType::Foliage) \
	op(EPVRenderType::Bones) \
	op(EPVRenderType::FoliageGrid) \
	op(EPVRenderType::Count) 

enum class EPVRenderType : uint8;
template<> struct TIsUEnumClass<EPVRenderType> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EPVRenderType>();
// ********** End Enum EPVRenderType ***************************************************************

// ********** Begin Enum EPVDebugType **************************************************************
#define FOREACH_ENUM_EPVDEBUGTYPE(op) \
	op(EPVDebugType::Point) \
	op(EPVDebugType::Branches) \
	op(EPVDebugType::Foliage) \
	op(EPVDebugType::Custom) 

enum class EPVDebugType;
template<> struct TIsUEnumClass<EPVDebugType> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EPVDebugType>();
// ********** End Enum EPVDebugType ****************************************************************

// ********** Begin Enum EPVDebugValueVisualizationMode ********************************************
#define FOREACH_ENUM_EPVDEBUGVALUEVISUALIZATIONMODE(op) \
	op(EPVDebugValueVisualizationMode::Text) \
	op(EPVDebugValueVisualizationMode::Direction) \
	op(EPVDebugValueVisualizationMode::Point) 

enum class EPVDebugValueVisualizationMode;
template<> struct TIsUEnumClass<EPVDebugValueVisualizationMode> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EPVDebugValueVisualizationMode>();
// ********** End Enum EPVDebugValueVisualizationMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
