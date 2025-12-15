// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/BlueprintSpringMathLibrary.h"

#ifdef ENGINE_BlueprintSpringMathLibrary_generated_h
#error "BlueprintSpringMathLibrary.generated.h already included, missing '#pragma once' in BlueprintSpringMathLibrary.h"
#endif
#define ENGINE_BlueprintSpringMathLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintSpringMathLibrary **********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSpringMathLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertSmoothingTimeToHalfLife); \
	DECLARE_FUNCTION(execConvertHalfLifeToSmoothingTime); \
	DECLARE_FUNCTION(execConvertStrengthToSmoothingTime); \
	DECLARE_FUNCTION(execConvertSmoothingTimeToStrength); \
	DECLARE_FUNCTION(execVelocitySpringCharacterUpdate); \
	DECLARE_FUNCTION(execSpringCharacterUpdate); \
	DECLARE_FUNCTION(execDampRotator); \
	DECLARE_FUNCTION(execDampQuat); \
	DECLARE_FUNCTION(execDampVector2D); \
	DECLARE_FUNCTION(execDampVector); \
	DECLARE_FUNCTION(execDampAngle); \
	DECLARE_FUNCTION(execDampFloat); \
	DECLARE_FUNCTION(execVelocitySpringDampVector2D); \
	DECLARE_FUNCTION(execVelocitySpringDampVector); \
	DECLARE_FUNCTION(execVelocitySpringDampFloat); \
	DECLARE_FUNCTION(execCriticalSpringDampRotator); \
	DECLARE_FUNCTION(execCriticalSpringDampQuat); \
	DECLARE_FUNCTION(execCriticalSpringDampVector2D); \
	DECLARE_FUNCTION(execCriticalSpringDampVector); \
	DECLARE_FUNCTION(execCriticalSpringDampAngle); \
	DECLARE_FUNCTION(execCriticalSpringDampFloat);


struct Z_Construct_UClass_UBlueprintSpringMathLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBlueprintSpringMathLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSpringMathLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintSpringMathLibrary(); \
	friend struct ::Z_Construct_UClass_UBlueprintSpringMathLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlueprintSpringMathLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintSpringMathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBlueprintSpringMathLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintSpringMathLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSpringMathLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintSpringMathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintSpringMathLibrary(UBlueprintSpringMathLibrary&&) = delete; \
	UBlueprintSpringMathLibrary(const UBlueprintSpringMathLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintSpringMathLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintSpringMathLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintSpringMathLibrary) \
	ENGINE_API virtual ~UBlueprintSpringMathLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSpringMathLibrary_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSpringMathLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSpringMathLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSpringMathLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSpringMathLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintSpringMathLibrary;

// ********** End Class UBlueprintSpringMathLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSpringMathLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
