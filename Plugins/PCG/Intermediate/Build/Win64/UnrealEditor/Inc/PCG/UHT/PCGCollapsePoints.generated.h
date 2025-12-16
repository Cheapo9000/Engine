// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCollapsePoints.h"

#ifdef PCG_PCGCollapsePoints_generated_h
#error "PCGCollapsePoints.generated.h already included, missing '#pragma once' in PCGCollapsePoints.h"
#endif
#define PCG_PCGCollapsePoints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCollapsePointsSettings ***********************************************
struct Z_Construct_UClass_UPCGCollapsePointsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCollapsePointsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCollapsePoints_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCollapsePointsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCollapsePointsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCollapsePointsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCollapsePointsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCollapsePointsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCollapsePointsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCollapsePoints_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCollapsePointsSettings(UPCGCollapsePointsSettings&&) = delete; \
	UPCGCollapsePointsSettings(const UPCGCollapsePointsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCollapsePointsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCollapsePointsSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGCollapsePointsSettings) \
	PCG_API virtual ~UPCGCollapsePointsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCollapsePoints_h_39_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCollapsePoints_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCollapsePoints_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCollapsePoints_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCollapsePointsSettings;

// ********** End Class UPCGCollapsePointsSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCollapsePoints_h

// ********** Begin Enum EPCGCollapseMode **********************************************************
#define FOREACH_ENUM_EPCGCOLLAPSEMODE(op) \
	op(EPCGCollapseMode::PairwiseClosest) \
	op(EPCGCollapseMode::AbsoluteClosest) 

enum class EPCGCollapseMode : uint8;
template<> struct TIsUEnumClass<EPCGCollapseMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCollapseMode>();
// ********** End Enum EPCGCollapseMode ************************************************************

// ********** Begin Enum EPCGCollapseComparisonMode ************************************************
#define FOREACH_ENUM_EPCGCOLLAPSECOMPARISONMODE(op) \
	op(EPCGCollapseComparisonMode::Position) \
	op(EPCGCollapseComparisonMode::Center) 

enum class EPCGCollapseComparisonMode : uint8;
template<> struct TIsUEnumClass<EPCGCollapseComparisonMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCollapseComparisonMode>();
// ********** End Enum EPCGCollapseComparisonMode **************************************************

// ********** Begin Enum EPCGCollapseVisitOrder ****************************************************
#define FOREACH_ENUM_EPCGCOLLAPSEVISITORDER(op) \
	op(EPCGCollapseVisitOrder::Ordered) \
	op(EPCGCollapseVisitOrder::Random) \
	op(EPCGCollapseVisitOrder::MinAttribute) \
	op(EPCGCollapseVisitOrder::MaxAttribute) 

enum class EPCGCollapseVisitOrder : uint8;
template<> struct TIsUEnumClass<EPCGCollapseVisitOrder> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCollapseVisitOrder>();
// ********** End Enum EPCGCollapseVisitOrder ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
