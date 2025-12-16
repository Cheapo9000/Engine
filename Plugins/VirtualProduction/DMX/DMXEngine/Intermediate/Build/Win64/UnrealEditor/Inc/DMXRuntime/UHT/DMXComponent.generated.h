// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/DMXComponent.h"

#ifdef DMXRUNTIME_DMXComponent_generated_h
#error "DMXComponent.generated.h already included, missing '#pragma once' in DMXComponent.h"
#endif
#define DMXRUNTIME_DMXComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityFixturePatch;
struct FDMXNormalizedAttributeValueMap;

// ********** Begin Delegate FDMXComponentFixturePatchReceivedSignature ****************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_28_DELEGATE \
static void FDMXComponentFixturePatchReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& DMXComponentFixturePatchReceivedSignature, UDMXEntityFixturePatch* FixturePatch, FDMXNormalizedAttributeValueMap const& ValuePerAttribute);


// ********** End Delegate FDMXComponentFixturePatchReceivedSignature ******************************

// ********** Begin Delegate FDMXOnDMXComponentTickSignature ***************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_29_DELEGATE \
static void FDMXOnDMXComponentTickSignature_DelegateWrapper(const FMulticastScriptDelegate& DMXOnDMXComponentTickSignature, float DeltaTime);


// ********** End Delegate FDMXOnDMXComponentTickSignature *****************************************

// ********** Begin Class UDMXComponent ************************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnFixturePatchReceivedDMX); \
	DECLARE_FUNCTION(execSetReceiveDMXFromPatch); \
	DECLARE_FUNCTION(execSetFixturePatch); \
	DECLARE_FUNCTION(execGetFixturePatch);


struct Z_Construct_UClass_UDMXComponent_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXComponent(); \
	friend struct ::Z_Construct_UClass_UDMXComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXComponent_NoRegister) \
	DECLARE_SERIALIZER(UDMXComponent)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXComponent(UDMXComponent&&) = delete; \
	UDMXComponent(const UDMXComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXComponent) \
	NO_API virtual ~UDMXComponent();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_22_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXComponent;

// ********** End Class UDMXComponent **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
