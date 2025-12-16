// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGFilterByAttribute.h"

#ifdef PCG_PCGFilterByAttribute_generated_h
#error "PCGFilterByAttribute.generated.h already included, missing '#pragma once' in PCGFilterByAttribute.h"
#endif
#define PCG_PCGFilterByAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGFilterByAttributeThresholdSettings ****************************
struct Z_Construct_UScriptStruct_FPCGFilterByAttributeThresholdSettings_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByAttribute_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGFilterByAttributeThresholdSettings_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGFilterByAttributeThresholdSettings;
// ********** End ScriptStruct FPCGFilterByAttributeThresholdSettings ******************************

// ********** Begin ScriptStruct FPCGFilterByAttributeThresholdSettingsRange ***********************
struct Z_Construct_UScriptStruct_FPCGFilterByAttributeThresholdSettingsRange_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByAttribute_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGFilterByAttributeThresholdSettingsRange_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGFilterByAttributeThresholdSettings Super;


struct FPCGFilterByAttributeThresholdSettingsRange;
// ********** End ScriptStruct FPCGFilterByAttributeThresholdSettingsRange *************************

// ********** Begin Class UPCGFilterByAttributeSettings ********************************************
struct Z_Construct_UClass_UPCGFilterByAttributeSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGFilterByAttributeSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByAttribute_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGFilterByAttributeSettings(); \
	friend struct ::Z_Construct_UClass_UPCGFilterByAttributeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGFilterByAttributeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGFilterByAttributeSettings, UPCGFilterDataBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGFilterByAttributeSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGFilterByAttributeSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByAttribute_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGFilterByAttributeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGFilterByAttributeSettings(UPCGFilterByAttributeSettings&&) = delete; \
	UPCGFilterByAttributeSettings(const UPCGFilterByAttributeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGFilterByAttributeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGFilterByAttributeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGFilterByAttributeSettings) \
	PCG_API virtual ~UPCGFilterByAttributeSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByAttribute_h_51_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByAttribute_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByAttribute_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByAttribute_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGFilterByAttributeSettings;

// ********** End Class UPCGFilterByAttributeSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByAttribute_h

// ********** Begin Enum EPCGFilterByAttributeMode *************************************************
#define FOREACH_ENUM_EPCGFILTERBYATTRIBUTEMODE(op) \
	op(EPCGFilterByAttributeMode::FilterByExistence) \
	op(EPCGFilterByAttributeMode::FilterByValue) \
	op(EPCGFilterByAttributeMode::FilterByValueRange) 

enum class EPCGFilterByAttributeMode;
template<> struct TIsUEnumClass<EPCGFilterByAttributeMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGFilterByAttributeMode>();
// ********** End Enum EPCGFilterByAttributeMode ***************************************************

// ********** Begin Enum EPCGFilterByAttributeValueMode ********************************************
#define FOREACH_ENUM_EPCGFILTERBYATTRIBUTEVALUEMODE(op) \
	op(EPCGFilterByAttributeValueMode::AnyOf) \
	op(EPCGFilterByAttributeValueMode::AllOf) 

enum class EPCGFilterByAttributeValueMode;
template<> struct TIsUEnumClass<EPCGFilterByAttributeValueMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGFilterByAttributeValueMode>();
// ********** End Enum EPCGFilterByAttributeValueMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
