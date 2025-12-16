// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXDisplayClusterLightCardComponent.h"

#ifdef DMXDISPLAYCLUSTERLIGHTCARD_DMXDisplayClusterLightCardComponent_generated_h
#error "DMXDisplayClusterLightCardComponent.generated.h already included, missing '#pragma once' in DMXDisplayClusterLightCardComponent.h"
#endif
#define DMXDISPLAYCLUSTERLIGHTCARD_DMXDisplayClusterLightCardComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityFixturePatch;
struct FDMXNormalizedAttributeValueMap;

// ********** Begin ScriptStruct FDMXDisplayClusterLightCardActorDataValueRanges *******************
struct Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics; \
	DMXDISPLAYCLUSTERLIGHTCARD_API static class UScriptStruct* StaticStruct();


struct FDMXDisplayClusterLightCardActorDataValueRanges;
// ********** End ScriptStruct FDMXDisplayClusterLightCardActorDataValueRanges *********************

// ********** Begin Class UDMXDisplayClusterLightCardComponent *************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLightCardReceivedDMXFromPatch);


struct Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics;
DMXDISPLAYCLUSTERLIGHTCARD_API UClass* Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXDisplayClusterLightCardComponent(); \
	friend struct ::Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXDISPLAYCLUSTERLIGHTCARD_API UClass* ::Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXDisplayClusterLightCardComponent, UDMXComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXDisplayClusterLightCard"), Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_NoRegister) \
	DECLARE_SERIALIZER(UDMXDisplayClusterLightCardComponent)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXDisplayClusterLightCardComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXDisplayClusterLightCardComponent(UDMXDisplayClusterLightCardComponent&&) = delete; \
	UDMXDisplayClusterLightCardComponent(const UDMXDisplayClusterLightCardComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXDisplayClusterLightCardComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXDisplayClusterLightCardComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXDisplayClusterLightCardComponent) \
	NO_API virtual ~UDMXDisplayClusterLightCardComponent();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_117_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXDisplayClusterLightCardComponent;

// ********** End Class UDMXDisplayClusterLightCardComponent ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
