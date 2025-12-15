// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/EngineSubsystem.h"

#ifdef ENGINE_EngineSubsystem_generated_h
#error "EngineSubsystem.generated.h already included, missing '#pragma once' in EngineSubsystem.h"
#endif
#define ENGINE_EngineSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEngineSubsystem *********************************************************
struct Z_Construct_UClass_UEngineSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_UEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEngineSubsystem, UDynamicSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEngineSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEngineSubsystem(UEngineSubsystem&&) = delete; \
	UEngineSubsystem(const UEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UEngineSubsystem) \
	ENGINE_API virtual ~UEngineSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEngineSubsystem;

// ********** End Class UEngineSubsystem ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
