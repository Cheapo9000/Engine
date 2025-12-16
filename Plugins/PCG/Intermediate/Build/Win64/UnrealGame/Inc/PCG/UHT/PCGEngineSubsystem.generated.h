// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/PCGEngineSubsystem.h"

#ifdef PCG_PCGEngineSubsystem_generated_h
#error "PCGEngineSubsystem.generated.h already included, missing '#pragma once' in PCGEngineSubsystem.h"
#endif
#define PCG_PCGEngineSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEngineSubsystem ******************************************************
struct Z_Construct_UClass_UPCGEngineSubsystem_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGEngineSubsystem_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGEngineSubsystem_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_UPCGEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UPCGEngineSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UPCGEngineSubsystem*>(this); }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGEngineSubsystem_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGEngineSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEngineSubsystem(UPCGEngineSubsystem&&) = delete; \
	UPCGEngineSubsystem(const UPCGEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGEngineSubsystem) \
	PCG_API virtual ~UPCGEngineSubsystem();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGEngineSubsystem_h_33_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGEngineSubsystem_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGEngineSubsystem_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGEngineSubsystem_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEngineSubsystem;

// ********** End Class UPCGEngineSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGEngineSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
