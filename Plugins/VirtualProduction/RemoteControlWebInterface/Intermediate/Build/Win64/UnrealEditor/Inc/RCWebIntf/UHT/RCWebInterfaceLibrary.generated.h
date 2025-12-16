// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RCWebInterfaceLibrary.h"

#ifdef REMOTECONTROLWEBINTERFACE_RCWebInterfaceLibrary_generated_h
#error "RCWebInterfaceLibrary.generated.h already included, missing '#pragma once' in RCWebInterfaceLibrary.h"
#endif
#define REMOTECONTROLWEBINTERFACE_RCWebInterfaceLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;

// ********** Begin Class URCWebInterfaceBlueprintLibrary ******************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValuesOfActorsByClass); \
	DECLARE_FUNCTION(execSpawnActor); \
	DECLARE_FUNCTION(execFindAllActorsOfClass); \
	DECLARE_FUNCTION(execRebindProperties); \
	DECLARE_FUNCTION(execGetOwnerActorLabel); \
	DECLARE_FUNCTION(execFindMatchingActorsToRebind);


struct Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_Statics;
REMOTECONTROLWEBINTERFACE_API UClass* Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCWebInterfaceBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLWEBINTERFACE_API UClass* ::Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URCWebInterfaceBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlWebInterface"), Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(URCWebInterfaceBlueprintLibrary)


#define FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCWebInterfaceBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCWebInterfaceBlueprintLibrary(URCWebInterfaceBlueprintLibrary&&) = delete; \
	URCWebInterfaceBlueprintLibrary(const URCWebInterfaceBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCWebInterfaceBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCWebInterfaceBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCWebInterfaceBlueprintLibrary) \
	NO_API virtual ~URCWebInterfaceBlueprintLibrary();


#define FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCWebInterfaceBlueprintLibrary;

// ********** End Class URCWebInterfaceBlueprintLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
