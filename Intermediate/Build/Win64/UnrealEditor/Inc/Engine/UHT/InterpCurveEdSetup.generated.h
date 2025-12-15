// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InterpCurveEdSetup.h"

#ifdef ENGINE_InterpCurveEdSetup_generated_h
#error "InterpCurveEdSetup.generated.h already included, missing '#pragma once' in InterpCurveEdSetup.h"
#endif
#define ENGINE_InterpCurveEdSetup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCurveEdEntry *****************************************************
struct Z_Construct_UScriptStruct_FCurveEdEntry_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCurveEdEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCurveEdEntry;
// ********** End ScriptStruct FCurveEdEntry *******************************************************

// ********** Begin ScriptStruct FCurveEdTab *******************************************************
struct Z_Construct_UScriptStruct_FCurveEdTab_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCurveEdTab_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCurveEdTab;
// ********** End ScriptStruct FCurveEdTab *********************************************************

// ********** Begin Class UInterpCurveEdSetup ******************************************************
struct Z_Construct_UClass_UInterpCurveEdSetup_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUInterpCurveEdSetup(); \
	friend struct ::Z_Construct_UClass_UInterpCurveEdSetup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInterpCurveEdSetup_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterpCurveEdSetup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInterpCurveEdSetup_NoRegister) \
	DECLARE_SERIALIZER(UInterpCurveEdSetup)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpCurveEdSetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpCurveEdSetup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpCurveEdSetup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpCurveEdSetup); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterpCurveEdSetup(UInterpCurveEdSetup&&) = delete; \
	UInterpCurveEdSetup(const UInterpCurveEdSetup&) = delete; \
	ENGINE_API virtual ~UInterpCurveEdSetup();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_103_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_106_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterpCurveEdSetup;

// ********** End Class UInterpCurveEdSetup ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
