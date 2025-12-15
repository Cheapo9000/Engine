// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeHLODBuilder.h"

#ifdef LANDSCAPE_LandscapeHLODBuilder_generated_h
#error "LandscapeHLODBuilder.generated.h already included, missing '#pragma once' in LandscapeHLODBuilder.h"
#endif
#define LANDSCAPE_LandscapeHLODBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapeHLODBuilder ****************************************************
struct Z_Construct_UClass_ULandscapeHLODBuilder_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHLODBuilder_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeHLODBuilder(); \
	friend struct ::Z_Construct_UClass_ULandscapeHLODBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeHLODBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeHLODBuilder, UHLODBuilder, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeHLODBuilder_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeHLODBuilder)


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeHLODBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeHLODBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeHLODBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeHLODBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeHLODBuilder(ULandscapeHLODBuilder&&) = delete; \
	ULandscapeHLODBuilder(const ULandscapeHLODBuilder&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeHLODBuilder();


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h_10_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h_13_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeHLODBuilder;

// ********** End Class ULandscapeHLODBuilder ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
