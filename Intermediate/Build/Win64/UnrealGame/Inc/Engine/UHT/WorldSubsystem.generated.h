// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/WorldSubsystem.h"

#ifdef ENGINE_WorldSubsystem_generated_h
#error "WorldSubsystem.generated.h already included, missing '#pragma once' in WorldSubsystem.h"
#endif
#define ENGINE_WorldSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldSubsystem **********************************************************
struct Z_Construct_UClass_UWorldSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldSubsystem(); \
	friend struct ::Z_Construct_UClass_UWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWorldSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldSubsystem(UWorldSubsystem&&) = delete; \
	UWorldSubsystem(const UWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWorldSubsystem) \
	ENGINE_API virtual ~UWorldSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldSubsystem;

// ********** End Class UWorldSubsystem ************************************************************

// ********** Begin Class UTickableWorldSubsystem **************************************************
struct Z_Construct_UClass_UTickableWorldSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTickableWorldSubsystem(); \
	friend struct ::Z_Construct_UClass_UTickableWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTickableWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UTickableWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTickableWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UTickableWorldSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_77_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTickableWorldSubsystem(UTickableWorldSubsystem&&) = delete; \
	UTickableWorldSubsystem(const UTickableWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTickableWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickableWorldSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UTickableWorldSubsystem) \
	ENGINE_API virtual ~UTickableWorldSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTickableWorldSubsystem;

// ********** End Class UTickableWorldSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
