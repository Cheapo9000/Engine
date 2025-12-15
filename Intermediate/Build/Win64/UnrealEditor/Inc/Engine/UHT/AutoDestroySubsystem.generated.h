// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/AutoDestroySubsystem.h"

#ifdef ENGINE_AutoDestroySubsystem_generated_h
#error "AutoDestroySubsystem.generated.h already included, missing '#pragma once' in AutoDestroySubsystem.h"
#endif
#define ENGINE_AutoDestroySubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UAutoDestroySubsystem ****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorEndPlay);


struct Z_Construct_UClass_UAutoDestroySubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAutoDestroySubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoDestroySubsystem(); \
	friend struct ::Z_Construct_UClass_UAutoDestroySubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAutoDestroySubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutoDestroySubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAutoDestroySubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAutoDestroySubsystem)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoDestroySubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutoDestroySubsystem(UAutoDestroySubsystem&&) = delete; \
	UAutoDestroySubsystem(const UAutoDestroySubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoDestroySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoDestroySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutoDestroySubsystem) \
	NO_API virtual ~UAutoDestroySubsystem();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutoDestroySubsystem;

// ********** End Class UAutoDestroySubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
