// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/PCGHelpers.h"

#ifdef PCG_PCGHelpers_generated_h
#error "PCGHelpers.generated.h already included, missing '#pragma once' in PCGHelpers.h"
#endif
#define PCG_PCGHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGMetadata;
struct FPCGPoint;

// ********** Begin Class UPCGFunctionPrototypes ***************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGHelpers_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPrototypeWithPointAndMetadata); \
	DECLARE_FUNCTION(execPrototypeWithNoParams);


struct Z_Construct_UClass_UPCGFunctionPrototypes_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGFunctionPrototypes_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGHelpers_h_203_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGFunctionPrototypes(); \
	friend struct ::Z_Construct_UClass_UPCGFunctionPrototypes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGFunctionPrototypes_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGFunctionPrototypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGFunctionPrototypes_NoRegister) \
	DECLARE_SERIALIZER(UPCGFunctionPrototypes)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGHelpers_h_203_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGFunctionPrototypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGFunctionPrototypes(UPCGFunctionPrototypes&&) = delete; \
	UPCGFunctionPrototypes(const UPCGFunctionPrototypes&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGFunctionPrototypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGFunctionPrototypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGFunctionPrototypes) \
	PCG_API virtual ~UPCGFunctionPrototypes();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGHelpers_h_200_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGHelpers_h_203_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGHelpers_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGHelpers_h_203_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGHelpers_h_203_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGFunctionPrototypes;

// ********** End Class UPCGFunctionPrototypes *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGHelpers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
