// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/LightImportTestFunctions.h"

#ifdef INTERCHANGETESTS_LightImportTestFunctions_generated_h
#error "LightImportTestFunctions.generated.h already included, missing '#pragma once' in LightImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_LightImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALight;
struct FInterchangeTestFunctionResult;
struct FLinearColor;

// ********** Begin Class ULightImportTestFunctions ************************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LightImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckLightColor); \
	DECLARE_FUNCTION(execCheckLightIntensity); \
	DECLARE_FUNCTION(execCheckLightDirection); \
	DECLARE_FUNCTION(execCheckLightPosition);


struct Z_Construct_UClass_ULightImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_ULightImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LightImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_ULightImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_ULightImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightImportTestFunctions, UActorImportTestFunctions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_ULightImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(ULightImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LightImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API ULightImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightImportTestFunctions(ULightImportTestFunctions&&) = delete; \
	ULightImportTestFunctions(const ULightImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, ULightImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~ULightImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LightImportTestFunctions_h_14_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LightImportTestFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LightImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LightImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LightImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightImportTestFunctions;

// ********** End Class ULightImportTestFunctions **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LightImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
