// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSplitSplines.h"

#ifdef PCG_PCGSplitSplines_generated_h
#error "PCGSplitSplines.generated.h already included, missing '#pragma once' in PCGSplitSplines.h"
#endif
#define PCG_PCGSplitSplines_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSplitSplinesSettings *************************************************
struct Z_Construct_UClass_UPCGSplitSplinesSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSplitSplinesSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitSplines_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSplitSplinesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSplitSplinesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSplitSplinesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSplitSplinesSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSplitSplinesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSplitSplinesSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitSplines_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSplitSplinesSettings(UPCGSplitSplinesSettings&&) = delete; \
	UPCGSplitSplinesSettings(const UPCGSplitSplinesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSplitSplinesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSplitSplinesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGSplitSplinesSettings) \
	PCG_API virtual ~UPCGSplitSplinesSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitSplines_h_26_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitSplines_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitSplines_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitSplines_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSplitSplinesSettings;

// ********** End Class UPCGSplitSplinesSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitSplines_h

// ********** Begin Enum EPCGSplitSplineMode *******************************************************
#define FOREACH_ENUM_EPCGSPLITSPLINEMODE(op) \
	op(EPCGSplitSplineMode::ByKey) \
	op(EPCGSplitSplineMode::ByDistance) \
	op(EPCGSplitSplineMode::ByAlpha) \
	op(EPCGSplitSplineMode::ByPredicateOnControlPoints) 

enum class EPCGSplitSplineMode;
template<> struct TIsUEnumClass<EPCGSplitSplineMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplitSplineMode>();
// ********** End Enum EPCGSplitSplineMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
