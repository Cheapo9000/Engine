// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCreatePoints.h"

#ifdef PCG_PCGCreatePoints_generated_h
#error "PCGCreatePoints.generated.h already included, missing '#pragma once' in PCGCreatePoints.h"
#endif
#define PCG_PCGCreatePoints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCreatePointsSettings *************************************************
struct Z_Construct_UClass_UPCGCreatePointsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCreatePointsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePoints_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreatePointsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCreatePointsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCreatePointsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCreatePointsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCreatePointsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCreatePointsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePoints_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCreatePointsSettings(UPCGCreatePointsSettings&&) = delete; \
	UPCGCreatePointsSettings(const UPCGCreatePointsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCreatePointsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreatePointsSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGCreatePointsSettings) \
	NO_API virtual ~UPCGCreatePointsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePoints_h_22_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePoints_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePoints_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePoints_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCreatePointsSettings;

// ********** End Class UPCGCreatePointsSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreatePoints_h

// ********** Begin Enum EPCGLocalGridPivot ********************************************************
#define FOREACH_ENUM_EPCGLOCALGRIDPIVOT(op) \
	op(EPCGLocalGridPivot::Global) \
	op(EPCGLocalGridPivot::OriginalComponent) \
	op(EPCGLocalGridPivot::LocalComponent) 

enum class EPCGLocalGridPivot : uint8;
template<> struct TIsUEnumClass<EPCGLocalGridPivot> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGLocalGridPivot>();
// ********** End Enum EPCGLocalGridPivot **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
