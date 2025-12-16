// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/SpotLightImportTestFunctions.h"

#ifdef INTERCHANGETESTS_SpotLightImportTestFunctions_generated_h
#error "SpotLightImportTestFunctions.generated.h already included, missing '#pragma once' in SpotLightImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_SpotLightImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASpotLight;
struct FInterchangeTestFunctionResult;

// ********** Begin Class USpotLightImportTestFunctions ********************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SpotLightImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckLightOuterConeAngle); \
	DECLARE_FUNCTION(execCheckLightInnerConeAngle);


struct Z_Construct_UClass_USpotLightImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_USpotLightImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SpotLightImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpotLightImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_USpotLightImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_USpotLightImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(USpotLightImportTestFunctions, UPointLightImportTestFunctions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_USpotLightImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(USpotLightImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SpotLightImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API USpotLightImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpotLightImportTestFunctions(USpotLightImportTestFunctions&&) = delete; \
	USpotLightImportTestFunctions(const USpotLightImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, USpotLightImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpotLightImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpotLightImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~USpotLightImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SpotLightImportTestFunctions_h_14_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SpotLightImportTestFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SpotLightImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SpotLightImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SpotLightImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpotLightImportTestFunctions;

// ********** End Class USpotLightImportTestFunctions **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SpotLightImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
