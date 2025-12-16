// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Blueprint/PCGBlueprintPointProcessorSimpleElement.h"

#ifdef PCG_PCGBlueprintPointProcessorSimpleElement_generated_h
#error "PCGBlueprintPointProcessorSimpleElement.generated.h already included, missing '#pragma once' in PCGBlueprintPointProcessorSimpleElement.h"
#endif
#define PCG_PCGBlueprintPointProcessorSimpleElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGBasePointData;
struct FPCGPoint;
struct FPCGPointInputRange;
struct FPCGPointOutputRange;

// ********** Begin Class UPCGBlueprintPointProcessorSimpleElement *********************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorSimpleElement_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGBlueprintPointProcessorSimpleElement_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBlueprintPointProcessorSimpleElement_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorSimpleElement_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlueprintPointProcessorSimpleElement(); \
	friend struct ::Z_Construct_UClass_UPCGBlueprintPointProcessorSimpleElement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBlueprintPointProcessorSimpleElement_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBlueprintPointProcessorSimpleElement, UPCGBlueprintBaseElement, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBlueprintPointProcessorSimpleElement_NoRegister) \
	DECLARE_SERIALIZER(UPCGBlueprintPointProcessorSimpleElement)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorSimpleElement_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBlueprintPointProcessorSimpleElement(UPCGBlueprintPointProcessorSimpleElement&&) = delete; \
	UPCGBlueprintPointProcessorSimpleElement(const UPCGBlueprintPointProcessorSimpleElement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBlueprintPointProcessorSimpleElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintPointProcessorSimpleElement); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPCGBlueprintPointProcessorSimpleElement) \
	PCG_API virtual ~UPCGBlueprintPointProcessorSimpleElement();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorSimpleElement_h_15_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorSimpleElement_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorSimpleElement_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorSimpleElement_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorSimpleElement_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBlueprintPointProcessorSimpleElement;

// ********** End Class UPCGBlueprintPointProcessorSimpleElement ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintPointProcessorSimpleElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
