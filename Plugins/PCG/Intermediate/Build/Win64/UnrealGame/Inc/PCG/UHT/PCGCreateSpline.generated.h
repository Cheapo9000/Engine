// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCreateSpline.h"

#ifdef PCG_PCGCreateSpline_generated_h
#error "PCGCreateSpline.generated.h already included, missing '#pragma once' in PCGCreateSpline.h"
#endif
#define PCG_PCGCreateSpline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCreateSplineSettings *************************************************
struct Z_Construct_UClass_UPCGCreateSplineSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCreateSplineSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreateSplineSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCreateSplineSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCreateSplineSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCreateSplineSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCreateSplineSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCreateSplineSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCreateSplineSettings(UPCGCreateSplineSettings&&) = delete; \
	UPCGCreateSplineSettings(const UPCGCreateSplineSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCreateSplineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreateSplineSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGCreateSplineSettings) \
	PCG_API virtual ~UPCGCreateSplineSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_21_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCreateSplineSettings;

// ********** End Class UPCGCreateSplineSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateSpline_h

// ********** Begin Enum EPCGCreateSplineMode ******************************************************
#define FOREACH_ENUM_EPCGCREATESPLINEMODE(op) \
	op(EPCGCreateSplineMode::CreateDataOnly) \
	op(EPCGCreateSplineMode::CreateComponent) 

enum class EPCGCreateSplineMode : uint8;
template<> struct TIsUEnumClass<EPCGCreateSplineMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCreateSplineMode>();
// ********** End Enum EPCGCreateSplineMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
