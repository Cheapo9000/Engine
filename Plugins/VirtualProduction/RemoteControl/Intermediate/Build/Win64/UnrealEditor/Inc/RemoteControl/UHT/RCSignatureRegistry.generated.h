// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RCSignatureRegistry.h"

#ifdef REMOTECONTROL_RCSignatureRegistry_generated_h
#error "RCSignatureRegistry.generated.h already included, missing '#pragma once' in RCSignatureRegistry.h"
#endif
#define REMOTECONTROL_RCSignatureRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URCSignatureRegistry *****************************************************
struct Z_Construct_UClass_URCSignatureRegistry_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URCSignatureRegistry_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCSignatureRegistry_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCSignatureRegistry(); \
	friend struct ::Z_Construct_UClass_URCSignatureRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URCSignatureRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(URCSignatureRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URCSignatureRegistry_NoRegister) \
	DECLARE_SERIALIZER(URCSignatureRegistry)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCSignatureRegistry_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REMOTECONTROL_API URCSignatureRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCSignatureRegistry(URCSignatureRegistry&&) = delete; \
	URCSignatureRegistry(const URCSignatureRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REMOTECONTROL_API, URCSignatureRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCSignatureRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCSignatureRegistry) \
	REMOTECONTROL_API virtual ~URCSignatureRegistry();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCSignatureRegistry_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCSignatureRegistry_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCSignatureRegistry_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCSignatureRegistry_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCSignatureRegistry;

// ********** End Class URCSignatureRegistry *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCSignatureRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
