// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeStaticSwitch.h"

#ifdef NIAGARAEDITOR_NiagaraNodeStaticSwitch_generated_h
#error "NiagaraNodeStaticSwitch.generated.h already included, missing '#pragma once' in NiagaraNodeStaticSwitch.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeStaticSwitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStaticSwitchTypeData *********************************************
struct Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticSwitchTypeData_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FStaticSwitchTypeData;
// ********** End ScriptStruct FStaticSwitchTypeData ***********************************************

// ********** Begin Class UNiagaraNodeStaticSwitch *************************************************
struct Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeStaticSwitch_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraNodeStaticSwitch(); \
	friend struct ::Z_Construct_UClass_UNiagaraNodeStaticSwitch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraNodeStaticSwitch_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNodeStaticSwitch, UNiagaraNodeUsageSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraNodeStaticSwitch_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNodeStaticSwitch)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeStaticSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeStaticSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeStaticSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeStaticSwitch); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNodeStaticSwitch(UNiagaraNodeStaticSwitch&&) = delete; \
	UNiagaraNodeStaticSwitch(const UNiagaraNodeStaticSwitch&) = delete; \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeStaticSwitch();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_47_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_50_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNodeStaticSwitch;

// ********** End Class UNiagaraNodeStaticSwitch ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeStaticSwitch_h

// ********** Begin Enum ENiagaraStaticSwitchType **************************************************
#define FOREACH_ENUM_ENIAGARASTATICSWITCHTYPE(op) \
	op(ENiagaraStaticSwitchType::Bool) \
	op(ENiagaraStaticSwitchType::Integer) \
	op(ENiagaraStaticSwitchType::Enum) 

enum class ENiagaraStaticSwitchType : uint8;
template<> struct TIsUEnumClass<ENiagaraStaticSwitchType> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraStaticSwitchType>();
// ********** End Enum ENiagaraStaticSwitchType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
