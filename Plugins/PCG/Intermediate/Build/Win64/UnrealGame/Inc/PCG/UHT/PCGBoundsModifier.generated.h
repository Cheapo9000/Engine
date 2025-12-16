// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGBoundsModifier.h"

#ifdef PCG_PCGBoundsModifier_generated_h
#error "PCGBoundsModifier.generated.h already included, missing '#pragma once' in PCGBoundsModifier.h"
#endif
#define PCG_PCGBoundsModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGBoundsModifierSettings ***********************************************
struct Z_Construct_UClass_UPCGBoundsModifierSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBoundsModifierSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBoundsModifierSettings(); \
	friend struct ::Z_Construct_UClass_UPCGBoundsModifierSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBoundsModifierSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBoundsModifierSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBoundsModifierSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGBoundsModifierSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGBoundsModifierSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBoundsModifierSettings(UPCGBoundsModifierSettings&&) = delete; \
	UPCGBoundsModifierSettings(const UPCGBoundsModifierSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBoundsModifierSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBoundsModifierSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBoundsModifierSettings) \
	PCG_API virtual ~UPCGBoundsModifierSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_23_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBoundsModifierSettings;

// ********** End Class UPCGBoundsModifierSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsModifier_h

// ********** Begin Enum EPCGBoundsModifierMode ****************************************************
#define FOREACH_ENUM_EPCGBOUNDSMODIFIERMODE(op) \
	op(EPCGBoundsModifierMode::Set) \
	op(EPCGBoundsModifierMode::Intersect) \
	op(EPCGBoundsModifierMode::Include) \
	op(EPCGBoundsModifierMode::Translate) \
	op(EPCGBoundsModifierMode::Scale) 

enum class EPCGBoundsModifierMode : uint8;
template<> struct TIsUEnumClass<EPCGBoundsModifierMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGBoundsModifierMode>();
// ********** End Enum EPCGBoundsModifierMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
