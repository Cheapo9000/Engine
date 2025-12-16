// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpatialReadinessSubsystem.h"

#ifdef SPATIALREADINESS_SpatialReadinessSubsystem_generated_h
#error "SpatialReadinessSubsystem.generated.h already included, missing '#pragma once' in SpatialReadinessSubsystem.h"
#endif
#define SPATIALREADINESS_SpatialReadinessSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USpatialReadiness ********************************************************
struct Z_Construct_UClass_USpatialReadiness_Statics;
SPATIALREADINESS_API UClass* Z_Construct_UClass_USpatialReadiness_NoRegister();

#define FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialReadiness(); \
	friend struct ::Z_Construct_UClass_USpatialReadiness_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPATIALREADINESS_API UClass* ::Z_Construct_UClass_USpatialReadiness_NoRegister(); \
public: \
	DECLARE_CLASS2(USpatialReadiness, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpatialReadiness"), Z_Construct_UClass_USpatialReadiness_NoRegister) \
	DECLARE_SERIALIZER(USpatialReadiness)


#define FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpatialReadiness(USpatialReadiness&&) = delete; \
	USpatialReadiness(const USpatialReadiness&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialReadiness); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpatialReadiness) \
	SPATIALREADINESS_API virtual ~USpatialReadiness();


#define FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessSubsystem_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpatialReadiness;

// ********** End Class USpatialReadiness **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SpatialReadiness_Source_SpatialReadiness_Public_SpatialReadinessSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
