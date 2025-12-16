// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Blueprint/PCGBlueprintBaseElement.h"

#ifdef PCG_PCGBlueprintBaseElement_generated_h
#error "PCGBlueprintBaseElement.generated.h already included, missing '#pragma once' in PCGBlueprintBaseElement.h"
#endif
#define PCG_PCGBlueprintBaseElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGPin;
class UPCGSettings;
enum class EPCGSettingsType : uint8;
struct FLinearColor;
struct FPCGBlueprintContextHandle;
struct FPCGDataCollection;
struct FPCGPinProperties;
struct FPCGPreConfiguredSettingsInfo;
struct FRandomStream;

// ********** Begin Class UPCGBlueprintBaseElement *************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintBaseElement_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	PCG_API virtual bool IsCacheableOverride_Implementation() const; \
	PCG_API virtual int32 DynamicPinTypesOverride_Implementation(const UPCGSettings* InSettings, const UPCGPin* InPin) const; \
	PCG_API virtual EPCGSettingsType NodeTypeOverride_Implementation() const; \
	PCG_API virtual FLinearColor NodeColorOverride_Implementation() const; \
	PCG_API virtual FName NodeTitleOverride_Implementation() const; \
	PCG_API virtual void Execute_Implementation(FPCGDataCollection const& Input, FPCGDataCollection& Output); \
	DECLARE_FUNCTION(execGetContextHandle); \
	DECLARE_FUNCTION(execGetRandomStreamWithContext); \
	DECLARE_FUNCTION(execGetSeedWithContext); \
	DECLARE_FUNCTION(execGetOutputPinByLabel); \
	DECLARE_FUNCTION(execGetInputPinByLabel); \
	DECLARE_FUNCTION(execGetOutputPins); \
	DECLARE_FUNCTION(execGetInputPins); \
	DECLARE_FUNCTION(execCustomOutputLabels); \
	DECLARE_FUNCTION(execCustomInputLabels); \
	DECLARE_FUNCTION(execIsCacheableOverride); \
	DECLARE_FUNCTION(execDynamicPinTypesOverride); \
	DECLARE_FUNCTION(execNodeTypeOverride); \
	DECLARE_FUNCTION(execNodeColorOverride); \
	DECLARE_FUNCTION(execNodeTitleOverride); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintBaseElement_h_26_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGBlueprintBaseElement_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintBaseElement_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlueprintBaseElement(); \
	friend struct ::Z_Construct_UClass_UPCGBlueprintBaseElement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBlueprintBaseElement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister) \
	DECLARE_SERIALIZER(UPCGBlueprintBaseElement)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintBaseElement_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGBlueprintBaseElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBlueprintBaseElement(UPCGBlueprintBaseElement&&) = delete; \
	UPCGBlueprintBaseElement(const UPCGBlueprintBaseElement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBlueprintBaseElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintBaseElement); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlueprintBaseElement) \
	PCG_API virtual ~UPCGBlueprintBaseElement();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintBaseElement_h_23_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintBaseElement_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintBaseElement_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintBaseElement_h_26_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintBaseElement_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintBaseElement_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBlueprintBaseElement;

// ********** End Class UPCGBlueprintBaseElement ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintBaseElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
