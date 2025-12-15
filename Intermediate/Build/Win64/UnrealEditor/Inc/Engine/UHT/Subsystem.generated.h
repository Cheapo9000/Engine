// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/Subsystem.h"

#ifdef ENGINE_Subsystem_generated_h
#error "Subsystem.generated.h already included, missing '#pragma once' in Subsystem.h"
#endif
#define ENGINE_Subsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubsystem ***************************************************************
struct Z_Construct_UClass_USubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_USubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubsystem(); \
	friend struct ::Z_Construct_UClass_USubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USubsystem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USubsystem_NoRegister) \
	DECLARE_SERIALIZER(USubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_49_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubsystem(USubsystem&&) = delete; \
	USubsystem(const USubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USubsystem) \
	ENGINE_API virtual ~USubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_46_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubsystem;

// ********** End Class USubsystem *****************************************************************

// ********** Begin Class UDynamicSubsystem ********************************************************
struct Z_Construct_UClass_UDynamicSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicSubsystem(); \
	friend struct ::Z_Construct_UClass_UDynamicSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDynamicSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDynamicSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDynamicSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_89_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicSubsystem(UDynamicSubsystem&&) = delete; \
	UDynamicSubsystem(const UDynamicSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDynamicSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDynamicSubsystem) \
	ENGINE_API virtual ~UDynamicSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_86_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicSubsystem;

// ********** End Class UDynamicSubsystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
