// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolFixTinyGeo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_FractureToolFixTinyGeo_generated_h
#error "FractureToolFixTinyGeo.generated.h already included, missing '#pragma once' in FractureToolFixTinyGeo.h"
#endif
#define FRACTUREEDITOR_FractureToolFixTinyGeo_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureTinyGeoSettings(); \
	friend struct Z_Construct_UClass_UFractureTinyGeoSettings_Statics; \
public: \
	DECLARE_CLASS(UFractureTinyGeoSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureTinyGeoSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureTinyGeoSettings(UFractureTinyGeoSettings&&); \
	UFractureTinyGeoSettings(const UFractureTinyGeoSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureTinyGeoSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureTinyGeoSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureTinyGeoSettings) \
	NO_API virtual ~UFractureTinyGeoSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_51_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureTinyGeoSettings>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolFixTinyGeo(); \
	friend struct Z_Construct_UClass_UFractureToolFixTinyGeo_Statics; \
public: \
	DECLARE_CLASS(UFractureToolFixTinyGeo, UFractureToolCutterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureToolFixTinyGeo)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_110_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureToolFixTinyGeo(UFractureToolFixTinyGeo&&); \
	UFractureToolFixTinyGeo(const UFractureToolFixTinyGeo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolFixTinyGeo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolFixTinyGeo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolFixTinyGeo) \
	NO_API virtual ~UFractureToolFixTinyGeo();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_106_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_110_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureToolFixTinyGeo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h


#define FOREACH_ENUM_EGEOMETRYSELECTIONMETHOD(op) \
	op(EGeometrySelectionMethod::VolumeCubeRoot) \
	op(EGeometrySelectionMethod::RelativeVolume) 

enum class EGeometrySelectionMethod;
template<> struct TIsUEnumClass<EGeometrySelectionMethod> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EGeometrySelectionMethod>();

#define FOREACH_ENUM_ENEIGHBORSELECTIONMETHOD(op) \
	op(ENeighborSelectionMethod::LargestNeighbor) \
	op(ENeighborSelectionMethod::NearestCenter) 

enum class ENeighborSelectionMethod;
template<> struct TIsUEnumClass<ENeighborSelectionMethod> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<ENeighborSelectionMethod>();

#define FOREACH_ENUM_EUSEBONESELECTION(op) \
	op(EUseBoneSelection::NoEffect) \
	op(EUseBoneSelection::AlsoMergeSelected) \
	op(EUseBoneSelection::OnlyMergeSelected) 

enum class EUseBoneSelection;
template<> struct TIsUEnumClass<EUseBoneSelection> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EUseBoneSelection>();

#define FOREACH_ENUM_EMERGETYPE(op) \
	op(EMergeType::MergeGeometry) \
	op(EMergeType::MergeClusters) 

enum class EMergeType : uint8;
template<> struct TIsUEnumClass<EMergeType> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EMergeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
