// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVR/Types/DMXMVRFixtureNode.h"

#ifdef DMXRUNTIME_DMXMVRFixtureNode_generated_h
#error "DMXMVRFixtureNode.generated.h already included, missing '#pragma once' in DMXMVRFixtureNode.h"
#endif
#define DMXRUNTIME_DMXMVRFixtureNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDMXMVRFixtureAddresses *******************************************
struct Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXMVRFixtureAddresses;
// ********** End ScriptStruct FDMXMVRFixtureAddresses *********************************************

// ********** Begin ScriptStruct FDMXMVRFixtureMapping *********************************************
struct Z_Construct_UScriptStruct_FDMXMVRFixtureMapping_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXMVRFixtureMapping_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXMVRFixtureMapping;
// ********** End ScriptStruct FDMXMVRFixtureMapping ***********************************************

// ********** Begin ScriptStruct FDMXMVRFixtureGobo ************************************************
struct Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXMVRFixtureGobo;
// ********** End ScriptStruct FDMXMVRFixtureGobo **************************************************

// ********** Begin ScriptStruct FDMXOptionalMVRFixtureGobo ****************************************
struct Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXOptionalMVRFixtureGobo;
// ********** End ScriptStruct FDMXOptionalMVRFixtureGobo ******************************************

// ********** Begin Class UDMXMVRFixtureNode *******************************************************
struct Z_Construct_UClass_UDMXMVRFixtureNode_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRFixtureNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXMVRFixtureNode(); \
	friend struct ::Z_Construct_UClass_UDMXMVRFixtureNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXMVRFixtureNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXMVRFixtureNode, UDMXMVRParametricObjectNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXMVRFixtureNode_NoRegister) \
	DECLARE_SERIALIZER(UDMXMVRFixtureNode)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_149_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXMVRFixtureNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXMVRFixtureNode(UDMXMVRFixtureNode&&) = delete; \
	UDMXMVRFixtureNode(const UDMXMVRFixtureNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXMVRFixtureNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXMVRFixtureNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXMVRFixtureNode) \
	NO_API virtual ~UDMXMVRFixtureNode();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_145_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_149_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXMVRFixtureNode;

// ********** End Class UDMXMVRFixtureNode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
