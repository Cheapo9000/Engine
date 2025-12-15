// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectTrace.h"

#ifdef ENGINE_ObjectTrace_generated_h
#error "ObjectTrace.generated.h already included, missing '#pragma once' in ObjectTrace.h"
#endif
#define ENGINE_ObjectTrace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectTraceWorldSubsystem ***********************************************
struct Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectTraceWorldSubsystem(); \
	friend struct ::Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UObjectTraceWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectTraceWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UObjectTraceWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UObjectTraceWorldSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectTraceWorldSubsystem(UObjectTraceWorldSubsystem&&) = delete; \
	UObjectTraceWorldSubsystem(const UObjectTraceWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectTraceWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTraceWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectTraceWorldSubsystem) \
	NO_API virtual ~UObjectTraceWorldSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectTraceWorldSubsystem;

// ********** End Class UObjectTraceWorldSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
