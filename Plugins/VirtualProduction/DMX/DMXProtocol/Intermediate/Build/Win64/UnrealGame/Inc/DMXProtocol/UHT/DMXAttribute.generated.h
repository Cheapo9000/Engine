// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXAttribute.h"

#ifdef DMXPROTOCOL_DMXAttribute_generated_h
#error "DMXAttribute.generated.h already included, missing '#pragma once' in DMXAttribute.h"
#endif
#define DMXPROTOCOL_DMXAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDMXAttributeName;

// ********** Begin ScriptStruct FDMXAttribute *****************************************************
struct Z_Construct_UScriptStruct_FDMXAttribute_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXAttribute;
// ********** End ScriptStruct FDMXAttribute *******************************************************

// ********** Begin ScriptStruct FDMXAttributeName *************************************************
struct Z_Construct_UScriptStruct_FDMXAttributeName_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXAttributeName_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXAttributeName;
// ********** End ScriptStruct FDMXAttributeName ***************************************************

// ********** Begin Class UDMXAttributeNameConversions *********************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_DMXAttributeToName); \
	DECLARE_FUNCTION(execConv_DMXAttributeToString);


struct Z_Construct_UClass_UDMXAttributeNameConversions_Statics;
DMXPROTOCOL_API UClass* Z_Construct_UClass_UDMXAttributeNameConversions_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXAttributeNameConversions(); \
	friend struct ::Z_Construct_UClass_UDMXAttributeNameConversions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXPROTOCOL_API UClass* ::Z_Construct_UClass_UDMXAttributeNameConversions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXAttributeNameConversions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXProtocol"), Z_Construct_UClass_UDMXAttributeNameConversions_NoRegister) \
	DECLARE_SERIALIZER(UDMXAttributeNameConversions)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXAttributeNameConversions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXAttributeNameConversions(UDMXAttributeNameConversions&&) = delete; \
	UDMXAttributeNameConversions(const UDMXAttributeNameConversions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXAttributeNameConversions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXAttributeNameConversions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXAttributeNameConversions) \
	NO_API virtual ~UDMXAttributeNameConversions();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_113_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXAttributeNameConversions;

// ********** End Class UDMXAttributeNameConversions ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
