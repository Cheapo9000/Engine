// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeoReferencingSystem.h"

#ifdef GEOREFERENCING_GeoReferencingSystem_generated_h
#error "GeoReferencingSystem.generated.h already included, missing '#pragma once' in GeoReferencingSystem.h"
#endif
#define GEOREFERENCING_GeoReferencingSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGeoReferencingSystem;
class UObject;
struct FGeographicCoordinates;

// ********** Begin Class AGeoReferencingSystem ****************************************************
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplySettings); \
	DECLARE_FUNCTION(execGetProjectedEllipsoidMinRadius); \
	DECLARE_FUNCTION(execGetProjectedEllipsoidMaxRadius); \
	DECLARE_FUNCTION(execGetGeographicEllipsoidMinRadius); \
	DECLARE_FUNCTION(execGetGeographicEllipsoidMaxRadius); \
	DECLARE_FUNCTION(execIsCRSStringValid); \
	DECLARE_FUNCTION(execGetPlanetCenterTransform); \
	DECLARE_FUNCTION(execGetTangentTransformAtGeographicLocation); \
	DECLARE_FUNCTION(execGetTangentTransformAtEngineLocation); \
	DECLARE_FUNCTION(execGetENUVectorsAtGeographicLocation); \
	DECLARE_FUNCTION(execGetENUVectorsAtEngineLocation); \
	DECLARE_FUNCTION(execGeographicToEngine); \
	DECLARE_FUNCTION(execEngineToGeographic); \
	DECLARE_FUNCTION(execK2_GetTangentTransformAtECEFLocation); \
	DECLARE_FUNCTION(execK2_GetTangentTransformAtProjectedLocation); \
	DECLARE_FUNCTION(execK2_GetECEFENUVectorsAtECEFLocation); \
	DECLARE_FUNCTION(execK2_GetENUVectorsAtECEFLocation); \
	DECLARE_FUNCTION(execK2_GetENUVectorsAtProjectedLocation); \
	DECLARE_FUNCTION(execK2_ECEFToGeographic); \
	DECLARE_FUNCTION(execK2_GeographicToECEF); \
	DECLARE_FUNCTION(execK2_ECEFToProjected); \
	DECLARE_FUNCTION(execK2_ProjectedToECEF); \
	DECLARE_FUNCTION(execK2_GeographicToProjected); \
	DECLARE_FUNCTION(execK2_ProjectedToGeographic); \
	DECLARE_FUNCTION(execK2_ECEFToEngine); \
	DECLARE_FUNCTION(execK2_EngineToECEF); \
	DECLARE_FUNCTION(execK2_ProjectedToEngine); \
	DECLARE_FUNCTION(execK2_EngineToProjected); \
	DECLARE_FUNCTION(execGetGeoReferencingSystem);


struct Z_Construct_UClass_AGeoReferencingSystem_Statics;
GEOREFERENCING_API UClass* Z_Construct_UClass_AGeoReferencingSystem_NoRegister();

#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeoReferencingSystem(); \
	friend struct ::Z_Construct_UClass_AGeoReferencingSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOREFERENCING_API UClass* ::Z_Construct_UClass_AGeoReferencingSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(AGeoReferencingSystem, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeoReferencing"), Z_Construct_UClass_AGeoReferencingSystem_NoRegister) \
	DECLARE_SERIALIZER(AGeoReferencingSystem)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGeoReferencingSystem(AGeoReferencingSystem&&) = delete; \
	AGeoReferencingSystem(const AGeoReferencingSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeoReferencingSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeoReferencingSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeoReferencingSystem) \
	NO_API virtual ~AGeoReferencingSystem();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_38_PROLOG
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGeoReferencingSystem;

// ********** End Class AGeoReferencingSystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h

// ********** Begin Enum EPlanetShape **************************************************************
#define FOREACH_ENUM_EPLANETSHAPE(op) \
	op(EPlanetShape::FlatPlanet) \
	op(EPlanetShape::RoundPlanet) 

enum class EPlanetShape : uint8;
template<> struct TIsUEnumClass<EPlanetShape> { enum { Value = true }; };
template<> GEOREFERENCING_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlanetShape>();
// ********** End Enum EPlanetShape ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
