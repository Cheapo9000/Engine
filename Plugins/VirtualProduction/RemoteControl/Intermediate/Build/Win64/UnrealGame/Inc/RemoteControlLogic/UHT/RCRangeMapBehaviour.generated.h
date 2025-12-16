// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behaviour/Builtin/RangeMap/RCRangeMapBehaviour.h"

#ifdef REMOTECONTROLLOGIC_RCRangeMapBehaviour_generated_h
#error "RCRangeMapBehaviour.generated.h already included, missing '#pragma once' in RCRangeMapBehaviour.h"
#endif
#define REMOTECONTROLLOGIC_RCRangeMapBehaviour_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRCRangeMapInput **************************************************
struct Z_Construct_UScriptStruct_FRCRangeMapInput_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCRangeMapInput_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRCRangeMapInput;
// ********** End ScriptStruct FRCRangeMapInput ****************************************************

// ********** Begin Class URCRangeMapBehaviour *****************************************************
struct Z_Construct_UClass_URCRangeMapBehaviour_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCRangeMapBehaviour_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCRangeMapBehaviour(); \
	friend struct ::Z_Construct_UClass_URCRangeMapBehaviour_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCRangeMapBehaviour_NoRegister(); \
public: \
	DECLARE_CLASS2(URCRangeMapBehaviour, URCBehaviour, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCRangeMapBehaviour_NoRegister) \
	DECLARE_SERIALIZER(URCRangeMapBehaviour)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCRangeMapBehaviour(URCRangeMapBehaviour&&) = delete; \
	URCRangeMapBehaviour(const URCRangeMapBehaviour&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCRangeMapBehaviour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCRangeMapBehaviour); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCRangeMapBehaviour) \
	NO_API virtual ~URCRangeMapBehaviour();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_41_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCRangeMapBehaviour;

// ********** End Class URCRangeMapBehaviour *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
