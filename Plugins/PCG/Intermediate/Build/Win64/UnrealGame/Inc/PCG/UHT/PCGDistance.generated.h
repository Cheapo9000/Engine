// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDistance.h"

#ifdef PCG_PCGDistance_generated_h
#error "PCGDistance.generated.h already included, missing '#pragma once' in PCGDistance.h"
#endif
#define PCG_PCGDistance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDistanceSettings *****************************************************
struct Z_Construct_UClass_UPCGDistanceSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDistanceSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDistanceSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDistanceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDistanceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDistanceSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDistanceSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDistanceSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDistanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDistanceSettings(UPCGDistanceSettings&&) = delete; \
	UPCGDistanceSettings(const UPCGDistanceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDistanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDistanceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDistanceSettings) \
	NO_API virtual ~UPCGDistanceSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_30_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDistanceSettings;

// ********** End Class UPCGDistanceSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h

// ********** Begin Enum PCGDistanceShape **********************************************************
#define FOREACH_ENUM_PCGDISTANCESHAPE(op) \
	op(PCGDistanceShape::SphereBounds) \
	op(PCGDistanceShape::BoxBounds) \
	op(PCGDistanceShape::Center) 

enum class PCGDistanceShape;
template<> struct TIsUEnumClass<PCGDistanceShape> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<PCGDistanceShape>();
// ********** End Enum PCGDistanceShape ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
