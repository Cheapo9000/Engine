// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAttributeNoise.h"

#ifdef PCG_PCGAttributeNoise_generated_h
#error "PCGAttributeNoise.generated.h already included, missing '#pragma once' in PCGAttributeNoise.h"
#endif
#define PCG_PCGAttributeNoise_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAttributeNoiseSettings ***********************************************
struct Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributeNoiseSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAttributeNoiseSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttributeNoiseSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttributeNoiseSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttributeNoiseSettings(UPCGAttributeNoiseSettings&&) = delete; \
	UPCGAttributeNoiseSettings(const UPCGAttributeNoiseSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAttributeNoiseSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributeNoiseSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGAttributeNoiseSettings) \
	PCG_API virtual ~UPCGAttributeNoiseSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_30_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttributeNoiseSettings;

// ********** End Class UPCGAttributeNoiseSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeNoise_h

// ********** Begin Enum EPCGAttributeNoiseMode ****************************************************
#define FOREACH_ENUM_EPCGATTRIBUTENOISEMODE(op) \
	op(EPCGAttributeNoiseMode::Set) \
	op(EPCGAttributeNoiseMode::Minimum) \
	op(EPCGAttributeNoiseMode::Maximum) \
	op(EPCGAttributeNoiseMode::Add) \
	op(EPCGAttributeNoiseMode::Multiply) 

enum class EPCGAttributeNoiseMode : uint8;
template<> struct TIsUEnumClass<EPCGAttributeNoiseMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAttributeNoiseMode>();
// ********** End Enum EPCGAttributeNoiseMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
