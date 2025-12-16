// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RCVirtualPropertyContainer.h"

#ifdef REMOTECONTROL_RCVirtualPropertyContainer_generated_h
#error "RCVirtualPropertyContainer.generated.h already included, missing '#pragma once' in RCVirtualPropertyContainer.h"
#endif
#define REMOTECONTROL_RCVirtualPropertyContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRCVirtualPropertyCategory ****************************************
struct Z_Construct_UScriptStruct_FRCVirtualPropertyCategory_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCVirtualPropertyCategory_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FRCVirtualPropertyCategory;
// ********** End ScriptStruct FRCVirtualPropertyCategory ******************************************

// ********** Begin Class URCVirtualPropertyContainerBase ******************************************
struct Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCVirtualPropertyContainerBase(); \
	friend struct ::Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(URCVirtualPropertyContainerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister) \
	DECLARE_SERIALIZER(URCVirtualPropertyContainerBase)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCVirtualPropertyContainerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCVirtualPropertyContainerBase(URCVirtualPropertyContainerBase&&) = delete; \
	URCVirtualPropertyContainerBase(const URCVirtualPropertyContainerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCVirtualPropertyContainerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCVirtualPropertyContainerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCVirtualPropertyContainerBase) \
	NO_API virtual ~URCVirtualPropertyContainerBase();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_39_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCVirtualPropertyContainerBase;

// ********** End Class URCVirtualPropertyContainerBase ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
