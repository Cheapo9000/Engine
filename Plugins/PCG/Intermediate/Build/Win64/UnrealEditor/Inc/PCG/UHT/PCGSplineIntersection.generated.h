// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSplineIntersection.h"

#ifdef PCG_PCGSplineIntersection_generated_h
#error "PCGSplineIntersection.generated.h already included, missing '#pragma once' in PCGSplineIntersection.h"
#endif
#define PCG_PCGSplineIntersection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSplineIntersectionSettings *******************************************
struct Z_Construct_UClass_UPCGSplineIntersectionSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSplineIntersectionSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineIntersection_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSplineIntersectionSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSplineIntersectionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSplineIntersectionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSplineIntersectionSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSplineIntersectionSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSplineIntersectionSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineIntersection_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSplineIntersectionSettings(UPCGSplineIntersectionSettings&&) = delete; \
	UPCGSplineIntersectionSettings(const UPCGSplineIntersectionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSplineIntersectionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSplineIntersectionSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGSplineIntersectionSettings) \
	PCG_API virtual ~UPCGSplineIntersectionSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineIntersection_h_33_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineIntersection_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineIntersection_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineIntersection_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSplineIntersectionSettings;

// ********** End Class UPCGSplineIntersectionSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineIntersection_h

// ********** Begin Enum EPCGSplineIntersectionType ************************************************
#define FOREACH_ENUM_EPCGSPLINEINTERSECTIONTYPE(op) \
	op(EPCGSplineIntersectionType::Self) \
	op(EPCGSplineIntersectionType::AgainstOtherSplines) 

enum class EPCGSplineIntersectionType : uint8;
template<> struct TIsUEnumClass<EPCGSplineIntersectionType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplineIntersectionType>();
// ********** End Enum EPCGSplineIntersectionType **************************************************

// ********** Begin Enum EPCGSplineIntersectionOutput **********************************************
#define FOREACH_ENUM_EPCGSPLINEINTERSECTIONOUTPUT(op) \
	op(EPCGSplineIntersectionOutput::IntersectionPointsOnly) \
	op(EPCGSplineIntersectionOutput::OriginalSplinesWithIntersections) 

enum class EPCGSplineIntersectionOutput : uint8;
template<> struct TIsUEnumClass<EPCGSplineIntersectionOutput> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplineIntersectionOutput>();
// ********** End Enum EPCGSplineIntersectionOutput ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
