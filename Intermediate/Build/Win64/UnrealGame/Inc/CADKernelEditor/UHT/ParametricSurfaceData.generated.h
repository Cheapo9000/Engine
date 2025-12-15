// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParametricSurfaceData.h"

#ifdef CADKERNELEDITOR_ParametricSurfaceData_generated_h
#error "ParametricSurfaceData.generated.h already included, missing '#pragma once' in ParametricSurfaceData.h"
#endif
#define CADKERNELEDITOR_ParametricSurfaceData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParametricSurfaceData ***************************************************
#define FID_Engine_Source_Runtime_Datasmith_CADKernel_Editor_Public_ParametricSurfaceData_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParametricSurfaceData, NO_API)


struct Z_Construct_UClass_UParametricSurfaceData_Statics;
CADKERNELEDITOR_API UClass* Z_Construct_UClass_UParametricSurfaceData_NoRegister();

#define FID_Engine_Source_Runtime_Datasmith_CADKernel_Editor_Public_ParametricSurfaceData_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParametricSurfaceData(); \
	friend struct ::Z_Construct_UClass_UParametricSurfaceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CADKERNELEDITOR_API UClass* ::Z_Construct_UClass_UParametricSurfaceData_NoRegister(); \
public: \
	DECLARE_CLASS2(UParametricSurfaceData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CADKernelEditor"), Z_Construct_UClass_UParametricSurfaceData_NoRegister) \
	DECLARE_SERIALIZER(UParametricSurfaceData) \
	FID_Engine_Source_Runtime_Datasmith_CADKernel_Editor_Public_ParametricSurfaceData_h_31_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Datasmith_CADKernel_Editor_Public_ParametricSurfaceData_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParametricSurfaceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParametricSurfaceData(UParametricSurfaceData&&) = delete; \
	UParametricSurfaceData(const UParametricSurfaceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParametricSurfaceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParametricSurfaceData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParametricSurfaceData) \
	NO_API virtual ~UParametricSurfaceData();


#define FID_Engine_Source_Runtime_Datasmith_CADKernel_Editor_Public_ParametricSurfaceData_h_28_PROLOG
#define FID_Engine_Source_Runtime_Datasmith_CADKernel_Editor_Public_ParametricSurfaceData_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Datasmith_CADKernel_Editor_Public_ParametricSurfaceData_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Datasmith_CADKernel_Editor_Public_ParametricSurfaceData_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParametricSurfaceData;

// ********** End Class UParametricSurfaceData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Datasmith_CADKernel_Editor_Public_ParametricSurfaceData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
