// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Action/Bind/RCExternalTexture.h"

#ifdef REMOTECONTROLLOGIC_RCExternalTexture_generated_h
#error "RCExternalTexture.generated.h already included, missing '#pragma once' in RCExternalTexture.h"
#endif
#define REMOTECONTROLLOGIC_RCExternalTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRCExternalTextureInfo ********************************************
struct Z_Construct_UScriptStruct_FRCExternalTextureInfo_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Action_Bind_RCExternalTexture_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCExternalTextureInfo_Statics; \
	REMOTECONTROLLOGIC_API static class UScriptStruct* StaticStruct();


struct FRCExternalTextureInfo;
// ********** End ScriptStruct FRCExternalTextureInfo **********************************************

// ********** Begin Class URCExternalTexture *******************************************************
struct Z_Construct_UClass_URCExternalTexture_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCExternalTexture_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Action_Bind_RCExternalTexture_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCExternalTexture(); \
	friend struct ::Z_Construct_UClass_URCExternalTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCExternalTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(URCExternalTexture, UTexture2DDynamic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCExternalTexture_NoRegister) \
	DECLARE_SERIALIZER(URCExternalTexture)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Action_Bind_RCExternalTexture_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCExternalTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCExternalTexture(URCExternalTexture&&) = delete; \
	URCExternalTexture(const URCExternalTexture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCExternalTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCExternalTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCExternalTexture) \
	NO_API virtual ~URCExternalTexture();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Action_Bind_RCExternalTexture_h_40_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Action_Bind_RCExternalTexture_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Action_Bind_RCExternalTexture_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Action_Bind_RCExternalTexture_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCExternalTexture;

// ********** End Class URCExternalTexture *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Action_Bind_RCExternalTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
