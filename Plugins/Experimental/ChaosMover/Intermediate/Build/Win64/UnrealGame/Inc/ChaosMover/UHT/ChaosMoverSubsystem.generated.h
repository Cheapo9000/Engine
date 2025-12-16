// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Backends/ChaosMoverSubsystem.h"

#ifdef CHAOSMOVER_ChaosMoverSubsystem_generated_h
#error "ChaosMoverSubsystem.generated.h already included, missing '#pragma once' in ChaosMoverSubsystem.h"
#endif
#define CHAOSMOVER_ChaosMoverSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosMoverSubsystem *****************************************************
struct Z_Construct_UClass_UChaosMoverSubsystem_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosMoverSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Private_Backends_ChaosMoverSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosMoverSubsystem(); \
	friend struct ::Z_Construct_UClass_UChaosMoverSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosMoverSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosMoverSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosMoverSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UChaosMoverSubsystem)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Private_Backends_ChaosMoverSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosMoverSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosMoverSubsystem(UChaosMoverSubsystem&&) = delete; \
	UChaosMoverSubsystem(const UChaosMoverSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosMoverSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosMoverSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosMoverSubsystem) \
	NO_API virtual ~UChaosMoverSubsystem();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Private_Backends_ChaosMoverSubsystem_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Private_Backends_ChaosMoverSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Private_Backends_ChaosMoverSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Private_Backends_ChaosMoverSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosMoverSubsystem;

// ********** End Class UChaosMoverSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Private_Backends_ChaosMoverSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
