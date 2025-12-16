// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metadata/PCGAttributePropertySelector.h"

#ifdef PCG_PCGAttributePropertySelector_generated_h
#error "PCGAttributePropertySelector.generated.h already included, missing '#pragma once' in PCGAttributePropertySelector.h"
#endif
#define PCG_PCGAttributePropertySelector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGData;
enum class EPCGAttributePropertySelection : int32;
enum class EPCGExtraProperties : uint8;
enum class EPCGPointProperties : uint8;
struct FPCGAttributePropertyInputSelector;
struct FPCGAttributePropertyOutputSelector;
struct FPCGAttributePropertySelector;

// ********** Begin ScriptStruct FPCGAttributePropertySelector *************************************
struct Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGAttributePropertySelector;
// ********** End ScriptStruct FPCGAttributePropertySelector ***************************************

// ********** Begin ScriptStruct FPCGAttributePropertyInputSelector ********************************
struct Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_232_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGAttributePropertySelector Super;


struct FPCGAttributePropertyInputSelector;
// ********** End ScriptStruct FPCGAttributePropertyInputSelector **********************************

// ********** Begin ScriptStruct FPCGAttributePropertyOutputNoSourceSelector ***********************
struct Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_250_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGAttributePropertySelector Super;


struct FPCGAttributePropertyOutputNoSourceSelector;
// ********** End ScriptStruct FPCGAttributePropertyOutputNoSourceSelector *************************

// ********** Begin ScriptStruct FPCGAttributePropertyOutputSelector *******************************
struct Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_260_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGAttributePropertyOutputNoSourceSelector Super;


struct FPCGAttributePropertyOutputSelector;
// ********** End ScriptStruct FPCGAttributePropertyOutputSelector *********************************

// ********** Begin Class UPCGAttributePropertySelectorBlueprintHelpers ****************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_310_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCopyAndFixSource); \
	DECLARE_FUNCTION(execCopyAndFixLast); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetExtraNames); \
	DECLARE_FUNCTION(execGetExtraProperty); \
	DECLARE_FUNCTION(execGetDomainName); \
	DECLARE_FUNCTION(execGetPropertyName); \
	DECLARE_FUNCTION(execGetAttributeName); \
	DECLARE_FUNCTION(execGetPointProperty); \
	DECLARE_FUNCTION(execGetSelection); \
	DECLARE_FUNCTION(execSetDomainName); \
	DECLARE_FUNCTION(execSetExtraProperty); \
	DECLARE_FUNCTION(execSetPropertyName); \
	DECLARE_FUNCTION(execSetAttributeName); \
	DECLARE_FUNCTION(execSetPointProperty);


struct Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_310_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributePropertySelectorBlueprintHelpers(); \
	friend struct ::Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttributePropertySelectorBlueprintHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttributePropertySelectorBlueprintHelpers)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_310_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGAttributePropertySelectorBlueprintHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttributePropertySelectorBlueprintHelpers(UPCGAttributePropertySelectorBlueprintHelpers&&) = delete; \
	UPCGAttributePropertySelectorBlueprintHelpers(const UPCGAttributePropertySelectorBlueprintHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGAttributePropertySelectorBlueprintHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributePropertySelectorBlueprintHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAttributePropertySelectorBlueprintHelpers) \
	NO_API virtual ~UPCGAttributePropertySelectorBlueprintHelpers();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_307_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_310_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_310_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_310_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_310_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttributePropertySelectorBlueprintHelpers;

// ********** End Class UPCGAttributePropertySelectorBlueprintHelpers ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h

// ********** Begin Enum EPCGAttributePropertySelection ********************************************
#define FOREACH_ENUM_EPCGATTRIBUTEPROPERTYSELECTION(op) \
	op(EPCGAttributePropertySelection::Attribute) \
	op(EPCGAttributePropertySelection::PointProperty) \
	op(EPCGAttributePropertySelection::ExtraProperty) \
	op(EPCGAttributePropertySelection::Property) 

enum class EPCGAttributePropertySelection;
template<> struct TIsUEnumClass<EPCGAttributePropertySelection> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAttributePropertySelection>();
// ********** End Enum EPCGAttributePropertySelection **********************************************

// ********** Begin Enum EPCGExtraProperties *******************************************************
#define FOREACH_ENUM_EPCGEXTRAPROPERTIES(op) \
	op(EPCGExtraProperties::Index) \
	op(EPCGExtraProperties::NumElements) 

enum class EPCGExtraProperties : uint8;
template<> struct TIsUEnumClass<EPCGExtraProperties> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExtraProperties>();
// ********** End Enum EPCGExtraProperties *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
