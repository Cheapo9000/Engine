// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Blueprint/PCGBlueprintPointProcessorElement.h"

#ifdef PCG_PCGBlueprintPointProcessorElement_generated_h
#error "PCGBlueprintPointProcessorElement.generated.h already included, missing '#pragma once' in PCGBlueprintPointProcessorElement.h"
#endif
#define PCG_PCGBlueprintPointProcessorElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGBasePointData;
struct FPCGPointInputRange;
struct FPCGPointOutputRange;

// ********** Begin Class UPCGBlueprintPointProcessorElement ***************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorElement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void IterationLoopInitialize_Implementation(int32 NumIterations, const UPCGBasePointData* InputPointDataA, const UPCGBasePointData* InputPointDataB, UPCGBasePointData* OutputPointData); \
	virtual void PointLoopInitialize_Implementation(const UPCGBasePointData* InputPointData, UPCGBasePointData* OutputPointData); \
	DECLARE_FUNCTION(execIterationLoopInitialize); \
	DECLARE_FUNCTION(execIterationLoop); \
	DECLARE_FUNCTION(execPointLoopInitialize); \
	DECLARE_FUNCTION(execPointLoop);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorElement_h_21_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGBlueprintPointProcessorElement_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBlueprintPointProcessorElement_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorElement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlueprintPointProcessorElement(); \
	friend struct ::Z_Construct_UClass_UPCGBlueprintPointProcessorElement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBlueprintPointProcessorElement_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBlueprintPointProcessorElement, UPCGBlueprintBaseElement, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBlueprintPointProcessorElement_NoRegister) \
	DECLARE_SERIALIZER(UPCGBlueprintPointProcessorElement)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorElement_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGBlueprintPointProcessorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBlueprintPointProcessorElement(UPCGBlueprintPointProcessorElement&&) = delete; \
	UPCGBlueprintPointProcessorElement(const UPCGBlueprintPointProcessorElement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBlueprintPointProcessorElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintPointProcessorElement); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlueprintPointProcessorElement) \
	PCG_API virtual ~UPCGBlueprintPointProcessorElement();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorElement_h_18_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorElement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorElement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorElement_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorElement_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorElement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBlueprintPointProcessorElement;

// ********** End Class UPCGBlueprintPointProcessorElement *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
