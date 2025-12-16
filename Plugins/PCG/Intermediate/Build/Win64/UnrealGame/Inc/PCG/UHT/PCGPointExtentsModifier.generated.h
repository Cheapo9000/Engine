// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGPointExtentsModifier.h"

#ifdef PCG_PCGPointExtentsModifier_generated_h
#error "PCGPointExtentsModifier.generated.h already included, missing '#pragma once' in PCGPointExtentsModifier.h"
#endif
#define PCG_PCGPointExtentsModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGPointExtentsModifierSettings *****************************************
struct Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPointExtentsModifierSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPointExtentsModifierSettings(); \
	friend struct ::Z_Construct_UClass_UPCGPointExtentsModifierSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPointExtentsModifierSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPointExtentsModifierSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPointExtentsModifierSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGPointExtentsModifierSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGPointExtentsModifierSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPointExtentsModifierSettings(UPCGPointExtentsModifierSettings&&) = delete; \
	UPCGPointExtentsModifierSettings(const UPCGPointExtentsModifierSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPointExtentsModifierSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPointExtentsModifierSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPointExtentsModifierSettings) \
	PCG_API virtual ~UPCGPointExtentsModifierSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_20_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPointExtentsModifierSettings;

// ********** End Class UPCGPointExtentsModifierSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointExtentsModifier_h

// ********** Begin Enum EPCGPointExtentsModifierMode **********************************************
#define FOREACH_ENUM_EPCGPOINTEXTENTSMODIFIERMODE(op) \
	op(EPCGPointExtentsModifierMode::Set) \
	op(EPCGPointExtentsModifierMode::Minimum) \
	op(EPCGPointExtentsModifierMode::Maximum) \
	op(EPCGPointExtentsModifierMode::Add) \
	op(EPCGPointExtentsModifierMode::Multiply) 

enum class EPCGPointExtentsModifierMode : uint8;
template<> struct TIsUEnumClass<EPCGPointExtentsModifierMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPointExtentsModifierMode>();
// ********** End Enum EPCGPointExtentsModifierMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
