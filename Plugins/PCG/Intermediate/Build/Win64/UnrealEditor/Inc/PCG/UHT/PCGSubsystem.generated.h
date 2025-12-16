// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/PCGSubsystem.h"

#ifdef PCG_PCGSubsystem_generated_h
#error "PCGSubsystem.generated.h already included, missing '#pragma once' in PCGSubsystem.h"
#endif
#define PCG_PCGSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSubsystem ************************************************************
struct Z_Construct_UClass_UPCGSubsystem_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSubsystem_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGSubsystem_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSubsystem(); \
	friend struct ::Z_Construct_UClass_UPCGSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UPCGSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UPCGSubsystem*>(this); }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGSubsystem_h_65_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSubsystem(UPCGSubsystem&&) = delete; \
	UPCGSubsystem(const UPCGSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGSubsystem) \
	PCG_API virtual ~UPCGSubsystem();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGSubsystem_h_62_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGSubsystem_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGSubsystem_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGSubsystem_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSubsystem;

// ********** End Class UPCGSubsystem **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
