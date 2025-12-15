// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualLogger/VisualLoggerKismetLibrary.h"

#ifdef ENGINE_VisualLoggerKismetLibrary_generated_h
#error "VisualLoggerKismetLibrary.generated.h already included, missing '#pragma once' in VisualLoggerKismetLibrary.h"
#endif
#define ENGINE_VisualLoggerKismetLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLinearColor;

// ********** Begin Class UVisualLoggerKismetLibrary ***********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLogSegment); \
	DECLARE_FUNCTION(execLogCircle); \
	DECLARE_FUNCTION(execLogArrow); \
	DECLARE_FUNCTION(execLogOrientedBox); \
	DECLARE_FUNCTION(execLogBox); \
	DECLARE_FUNCTION(execLogCapsule); \
	DECLARE_FUNCTION(execLogCylinder); \
	DECLARE_FUNCTION(execLogCone); \
	DECLARE_FUNCTION(execLogSphere); \
	DECLARE_FUNCTION(execLogLocation); \
	DECLARE_FUNCTION(execLogText); \
	DECLARE_FUNCTION(execRedirectVislog); \
	DECLARE_FUNCTION(execEnableRecording);


struct Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVisualLoggerKismetLibrary(); \
	friend struct ::Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVisualLoggerKismetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVisualLoggerKismetLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVisualLoggerKismetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVisualLoggerKismetLibrary(UVisualLoggerKismetLibrary&&) = delete; \
	UVisualLoggerKismetLibrary(const UVisualLoggerKismetLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVisualLoggerKismetLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerKismetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerKismetLibrary) \
	ENGINE_API virtual ~UVisualLoggerKismetLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVisualLoggerKismetLibrary;

// ********** End Class UVisualLoggerKismetLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
