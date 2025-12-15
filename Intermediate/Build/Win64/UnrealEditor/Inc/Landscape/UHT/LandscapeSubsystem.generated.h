// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeSubsystem.h"

#ifdef LANDSCAPE_LandscapeSubsystem_generated_h
#error "LandscapeSubsystem.generated.h already included, missing '#pragma once' in LandscapeSubsystem.h"
#endif
#define LANDSCAPE_LandscapeSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapeSubsystem ******************************************************
struct Z_Construct_UClass_ULandscapeSubsystem_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeSubsystem(); \
	friend struct ::Z_Construct_UClass_ULandscapeSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeSubsystem_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeSubsystem)


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_104_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeSubsystem(ULandscapeSubsystem&&) = delete; \
	ULandscapeSubsystem(const ULandscapeSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULandscapeSubsystem)


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_101_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeSubsystem;

// ********** End Class ULandscapeSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
