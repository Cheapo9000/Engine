// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpeedTreeImportData.h"

#ifdef SPEEDTREEIMPORTER_SpeedTreeImportData_generated_h
#error "SpeedTreeImportData.generated.h already included, missing '#pragma once' in SpeedTreeImportData.h"
#endif
#define SPEEDTREEIMPORTER_SpeedTreeImportData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USpeedTreeImportData *****************************************************
struct Z_Construct_UClass_USpeedTreeImportData_Statics;
SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_USpeedTreeImportData_NoRegister();

#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUSpeedTreeImportData(); \
	friend struct ::Z_Construct_UClass_USpeedTreeImportData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPEEDTREEIMPORTER_API UClass* ::Z_Construct_UClass_USpeedTreeImportData_NoRegister(); \
public: \
	DECLARE_CLASS2(USpeedTreeImportData, UAssetImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpeedTreeImporter"), Z_Construct_UClass_USpeedTreeImportData_NoRegister) \
	DECLARE_SERIALIZER(USpeedTreeImportData) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPEEDTREEIMPORTER_API USpeedTreeImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeedTreeImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPEEDTREEIMPORTER_API, USpeedTreeImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeedTreeImportData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpeedTreeImportData(USpeedTreeImportData&&) = delete; \
	USpeedTreeImportData(const USpeedTreeImportData&) = delete; \
	SPEEDTREEIMPORTER_API virtual ~USpeedTreeImportData();


#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_45_PROLOG
#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_48_INCLASS \
	FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpeedTreeImportData;

// ********** End Class USpeedTreeImportData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportData_h

// ********** Begin Enum EImportGeometryType *******************************************************
#define FOREACH_ENUM_EIMPORTGEOMETRYTYPE(op) \
	op(IGT_3D) \
	op(IGT_Billboards) \
	op(IGT_Both) 

enum EImportGeometryType : int;
template<> SPEEDTREEIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EImportGeometryType>();
// ********** End Enum EImportGeometryType *********************************************************

// ********** Begin Enum EImportLODType ************************************************************
#define FOREACH_ENUM_EIMPORTLODTYPE(op) \
	op(ILT_PaintedFoliage) \
	op(ILT_IndividualActors) 

enum EImportLODType : int;
template<> SPEEDTREEIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EImportLODType>();
// ********** End Enum EImportLODType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
