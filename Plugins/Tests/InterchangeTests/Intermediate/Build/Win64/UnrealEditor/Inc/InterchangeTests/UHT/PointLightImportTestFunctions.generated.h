// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/PointLightImportTestFunctions.h"

#ifdef INTERCHANGETESTS_PointLightImportTestFunctions_generated_h
#error "PointLightImportTestFunctions.generated.h already included, missing '#pragma once' in PointLightImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_PointLightImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APointLight;
struct FInterchangeTestFunctionResult;

// ********** Begin Class UPointLightImportTestFunctions *******************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_PointLightImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckLightFalloffExponent);


struct Z_Construct_UClass_UPointLightImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UPointLightImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_PointLightImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointLightImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_UPointLightImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UPointLightImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UPointLightImportTestFunctions, ULightImportTestFunctions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UPointLightImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(UPointLightImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_PointLightImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UPointLightImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPointLightImportTestFunctions(UPointLightImportTestFunctions&&) = delete; \
	UPointLightImportTestFunctions(const UPointLightImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UPointLightImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointLightImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointLightImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~UPointLightImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_PointLightImportTestFunctions_h_14_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_PointLightImportTestFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_PointLightImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_PointLightImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_PointLightImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPointLightImportTestFunctions;

// ********** End Class UPointLightImportTestFunctions *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_PointLightImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
