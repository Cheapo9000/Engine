// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Blueprint/PCGBlueprintDeprecatedElement.h"

#ifdef PCG_PCGBlueprintDeprecatedElement_generated_h
#error "PCGBlueprintDeprecatedElement.generated.h already included, missing '#pragma once' in PCGBlueprintDeprecatedElement.h"
#endif
#define PCG_PCGBlueprintDeprecatedElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGMetadata;
class UPCGPointData;
class UPCGSpatialData;
struct FPCGContext;
struct FPCGDataCollection;
struct FPCGPoint;
struct FRandomStream;

// ********** Begin Class UPCGBlueprintElement *****************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	PCG_API virtual void ExecuteWithContext_Implementation(FPCGContext& InContext, FPCGDataCollection const& Input, FPCGDataCollection& Output); \
	DECLARE_FUNCTION(execGetContext); \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execIterationLoop); \
	DECLARE_FUNCTION(execNestedLoop); \
	DECLARE_FUNCTION(execVariableLoop); \
	DECLARE_FUNCTION(execPointLoop); \
	DECLARE_FUNCTION(execExecuteWithContext);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h_34_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGBlueprintElement_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBlueprintElement_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlueprintElement(); \
	friend struct ::Z_Construct_UClass_UPCGBlueprintElement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBlueprintElement_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBlueprintElement, UPCGBlueprintBaseElement, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBlueprintElement_NoRegister) \
	DECLARE_SERIALIZER(UPCGBlueprintElement)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGBlueprintElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBlueprintElement(UPCGBlueprintElement&&) = delete; \
	UPCGBlueprintElement(const UPCGBlueprintElement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBlueprintElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintElement); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlueprintElement) \
	PCG_API virtual ~UPCGBlueprintElement();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h_31_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h_34_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBlueprintElement;

// ********** End Class UPCGBlueprintElement *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
