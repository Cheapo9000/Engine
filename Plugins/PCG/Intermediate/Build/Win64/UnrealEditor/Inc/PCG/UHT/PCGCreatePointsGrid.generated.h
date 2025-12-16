// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCreatePointsGrid.h"

#ifdef PCG_PCGCreatePointsGrid_generated_h
#error "PCGCreatePointsGrid.generated.h already included, missing '#pragma once' in PCGCreatePointsGrid.h"
#endif
#define PCG_PCGCreatePointsGrid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCreatePointsGridSettings *********************************************
struct Z_Construct_UClass_UPCGCreatePointsGridSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCreatePointsGridSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsGrid_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreatePointsGridSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCreatePointsGridSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCreatePointsGridSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCreatePointsGridSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCreatePointsGridSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCreatePointsGridSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsGrid_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCreatePointsGridSettings(UPCGCreatePointsGridSettings&&) = delete; \
	UPCGCreatePointsGridSettings(const UPCGCreatePointsGridSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCreatePointsGridSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreatePointsGridSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGCreatePointsGridSettings) \
	NO_API virtual ~UPCGCreatePointsGridSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsGrid_h_27_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsGrid_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsGrid_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsGrid_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCreatePointsGridSettings;

// ********** End Class UPCGCreatePointsGridSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePointsGrid_h

// ********** Begin Enum EPCGPointPosition *********************************************************
#define FOREACH_ENUM_EPCGPOINTPOSITION(op) \
	op(EPCGPointPosition::CellCenter) \
	op(EPCGPointPosition::CellCorners) 

enum class EPCGPointPosition : uint8;
template<> struct TIsUEnumClass<EPCGPointPosition> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPointPosition>();
// ********** End Enum EPCGPointPosition ***********************************************************

// ********** Begin Enum EPCGGridPivot *************************************************************
#define FOREACH_ENUM_EPCGGRIDPIVOT(op) \
	op(EPCGGridPivot::Global) \
	op(EPCGGridPivot::OriginalComponent) \
	op(EPCGGridPivot::LocalComponent) 

enum class EPCGGridPivot : uint8;
template<> struct TIsUEnumClass<EPCGGridPivot> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGGridPivot>();
// ********** End Enum EPCGGridPivot ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
