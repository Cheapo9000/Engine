// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCreatePointsSphere.h"

#ifdef PCG_PCGCreatePointsSphere_generated_h
#error "PCGCreatePointsSphere.generated.h already included, missing '#pragma once' in PCGCreatePointsSphere.h"
#endif
#define PCG_PCGCreatePointsSphere_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCreatePointsSphereSettings *******************************************
struct Z_Construct_UClass_UPCGCreatePointsSphereSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCreatePointsSphereSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsSphere_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreatePointsSphereSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCreatePointsSphereSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCreatePointsSphereSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCreatePointsSphereSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCreatePointsSphereSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCreatePointsSphereSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsSphere_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCreatePointsSphereSettings(UPCGCreatePointsSphereSettings&&) = delete; \
	UPCGCreatePointsSphereSettings(const UPCGCreatePointsSphereSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCreatePointsSphereSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreatePointsSphereSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGCreatePointsSphereSettings) \
	NO_API virtual ~UPCGCreatePointsSphereSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsSphere_h_38_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsSphere_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsSphere_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsSphere_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCreatePointsSphereSettings;

// ********** End Class UPCGCreatePointsSphereSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsSphere_h

// ********** Begin Enum EPCGSphereGeneration ******************************************************
#define FOREACH_ENUM_EPCGSPHEREGENERATION(op) \
	op(EPCGSphereGeneration::Geodesic) \
	op(EPCGSphereGeneration::Angle) \
	op(EPCGSphereGeneration::Segments) \
	op(EPCGSphereGeneration::Random) \
	op(EPCGSphereGeneration::Poisson) 

enum class EPCGSphereGeneration : uint8;
template<> struct TIsUEnumClass<EPCGSphereGeneration> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSphereGeneration>();
// ********** End Enum EPCGSphereGeneration ********************************************************

// ********** Begin Enum EPCGGeodesicSphereRepresentation ******************************************
#define FOREACH_ENUM_EPCGGEODESICSPHEREREPRESENTATION(op) \
	op(EPCGGeodesicSphereRepresentation::Icosahedron) 

enum class EPCGGeodesicSphereRepresentation : uint8;
template<> struct TIsUEnumClass<EPCGGeodesicSphereRepresentation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGGeodesicSphereRepresentation>();
// ********** End Enum EPCGGeodesicSphereRepresentation ********************************************

// ********** Begin Enum EPCGSpherePointOrientation ************************************************
#define FOREACH_ENUM_EPCGSPHEREPOINTORIENTATION(op) \
	op(EPCGSpherePointOrientation::Radial) \
	op(EPCGSpherePointOrientation::Centric) \
	op(EPCGSpherePointOrientation::None) 

enum class EPCGSpherePointOrientation : uint8;
template<> struct TIsUEnumClass<EPCGSpherePointOrientation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSpherePointOrientation>();
// ********** End Enum EPCGSpherePointOrientation **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
