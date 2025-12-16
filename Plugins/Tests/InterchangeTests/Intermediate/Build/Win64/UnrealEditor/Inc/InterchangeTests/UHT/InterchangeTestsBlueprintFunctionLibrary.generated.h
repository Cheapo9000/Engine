// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTestsBlueprintFunctionLibrary.h"

#ifdef INTERCHANGETESTS_InterchangeTestsBlueprintFunctionLibrary_generated_h
#error "InterchangeTestsBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in InterchangeTestsBlueprintFunctionLibrary.h"
#endif
#define INTERCHANGETESTS_InterchangeTestsBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangePipelineBase;

// ********** Begin Class UInterchangeTestsBlueprintFunctionLibrary ********************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestsBlueprintFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPipelinePropertiesAsJSON);


struct Z_Construct_UClass_UInterchangeTestsBlueprintFunctionLibrary_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeTestsBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestsBlueprintFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTestsBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UInterchangeTestsBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UInterchangeTestsBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTestsBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UInterchangeTestsBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTestsBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestsBlueprintFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UInterchangeTestsBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTestsBlueprintFunctionLibrary(UInterchangeTestsBlueprintFunctionLibrary&&) = delete; \
	UInterchangeTestsBlueprintFunctionLibrary(const UInterchangeTestsBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UInterchangeTestsBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTestsBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeTestsBlueprintFunctionLibrary) \
	INTERCHANGETESTS_API virtual ~UInterchangeTestsBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestsBlueprintFunctionLibrary_h_8_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestsBlueprintFunctionLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestsBlueprintFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestsBlueprintFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestsBlueprintFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTestsBlueprintFunctionLibrary;

// ********** End Class UInterchangeTestsBlueprintFunctionLibrary **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestsBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
