// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGPointNeighborhood.h"

#ifdef PCG_PCGPointNeighborhood_generated_h
#error "PCGPointNeighborhood.generated.h already included, missing '#pragma once' in PCGPointNeighborhood.h"
#endif
#define PCG_PCGPointNeighborhood_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGPointNeighborhoodSettings ********************************************
struct Z_Construct_UClass_UPCGPointNeighborhoodSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPointNeighborhoodSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointNeighborhood_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPointNeighborhoodSettings(); \
	friend struct ::Z_Construct_UClass_UPCGPointNeighborhoodSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPointNeighborhoodSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPointNeighborhoodSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPointNeighborhoodSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGPointNeighborhoodSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointNeighborhood_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGPointNeighborhoodSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPointNeighborhoodSettings(UPCGPointNeighborhoodSettings&&) = delete; \
	UPCGPointNeighborhoodSettings(const UPCGPointNeighborhoodSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPointNeighborhoodSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPointNeighborhoodSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPointNeighborhoodSettings) \
	NO_API virtual ~UPCGPointNeighborhoodSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointNeighborhood_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointNeighborhood_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointNeighborhood_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointNeighborhood_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPointNeighborhoodSettings;

// ********** End Class UPCGPointNeighborhoodSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointNeighborhood_h

// ********** Begin Enum EPCGPointNeighborhoodDensityMode ******************************************
#define FOREACH_ENUM_EPCGPOINTNEIGHBORHOODDENSITYMODE(op) \
	op(EPCGPointNeighborhoodDensityMode::None) \
	op(EPCGPointNeighborhoodDensityMode::SetNormalizedDistanceToDensity) \
	op(EPCGPointNeighborhoodDensityMode::SetAverageDensity) 

enum class EPCGPointNeighborhoodDensityMode;
template<> struct TIsUEnumClass<EPCGPointNeighborhoodDensityMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPointNeighborhoodDensityMode>();
// ********** End Enum EPCGPointNeighborhoodDensityMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
