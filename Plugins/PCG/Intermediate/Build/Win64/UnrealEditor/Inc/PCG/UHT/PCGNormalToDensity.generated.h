// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGNormalToDensity.h"

#ifdef PCG_PCGNormalToDensity_generated_h
#error "PCGNormalToDensity.generated.h already included, missing '#pragma once' in PCGNormalToDensity.h"
#endif
#define PCG_PCGNormalToDensity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGNormalToDensitySettings **********************************************
struct Z_Construct_UClass_UPCGNormalToDensitySettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGNormalToDensitySettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGNormalToDensitySettings(); \
	friend struct ::Z_Construct_UClass_UPCGNormalToDensitySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGNormalToDensitySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGNormalToDensitySettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGNormalToDensitySettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGNormalToDensitySettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGNormalToDensitySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGNormalToDensitySettings(UPCGNormalToDensitySettings&&) = delete; \
	UPCGNormalToDensitySettings(const UPCGNormalToDensitySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGNormalToDensitySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGNormalToDensitySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGNormalToDensitySettings) \
	NO_API virtual ~UPCGNormalToDensitySettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_24_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGNormalToDensitySettings;

// ********** End Class UPCGNormalToDensitySettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNormalToDensity_h

// ********** Begin Enum PCGNormalToDensityMode ****************************************************
#define FOREACH_ENUM_PCGNORMALTODENSITYMODE(op) \
	op(PCGNormalToDensityMode::Set) \
	op(PCGNormalToDensityMode::Minimum) \
	op(PCGNormalToDensityMode::Maximum) \
	op(PCGNormalToDensityMode::Add) \
	op(PCGNormalToDensityMode::Subtract) \
	op(PCGNormalToDensityMode::Multiply) \
	op(PCGNormalToDensityMode::Divide) 

enum class PCGNormalToDensityMode : int8;
template<> struct TIsUEnumClass<PCGNormalToDensityMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<PCGNormalToDensityMode>();
// ********** End Enum PCGNormalToDensityMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
