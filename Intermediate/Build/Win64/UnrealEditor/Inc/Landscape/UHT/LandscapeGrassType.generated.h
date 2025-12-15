// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeGrassType.h"

#ifdef LANDSCAPE_LandscapeGrassType_generated_h
#error "LandscapeGrassType.generated.h already included, missing '#pragma once' in LandscapeGrassType.h"
#endif
#define LANDSCAPE_LandscapeGrassType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGrassVariety *****************************************************
struct Z_Construct_UScriptStruct_FGrassVariety_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGrassVariety_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FGrassVariety;
// ********** End ScriptStruct FGrassVariety *******************************************************

// ********** Begin Class ULandscapeGrassType ******************************************************
struct Z_Construct_UClass_ULandscapeGrassType_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_173_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeGrassType(); \
	friend struct ::Z_Construct_UClass_ULandscapeGrassType_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeGrassType_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeGrassType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeGrassType_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeGrassType)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeGrassType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeGrassType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeGrassType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeGrassType); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeGrassType(ULandscapeGrassType&&) = delete; \
	ULandscapeGrassType(const ULandscapeGrassType&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeGrassType();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_170_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_173_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeGrassType;

// ********** End Class ULandscapeGrassType ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h

// ********** Begin Enum EGrassScaling *************************************************************
#define FOREACH_ENUM_EGRASSSCALING(op) \
	op(EGrassScaling::Uniform) \
	op(EGrassScaling::Free) \
	op(EGrassScaling::LockXY) 

enum class EGrassScaling : uint8;
template<> struct TIsUEnumClass<EGrassScaling> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGrassScaling>();
// ********** End Enum EGrassScaling ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
