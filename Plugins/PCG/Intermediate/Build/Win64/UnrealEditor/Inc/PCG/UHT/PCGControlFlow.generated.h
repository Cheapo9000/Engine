// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/ControlFlow/PCGControlFlow.h"

#ifdef PCG_PCGControlFlow_generated_h
#error "PCGControlFlow.generated.h already included, missing '#pragma once' in PCGControlFlow.h"
#endif
#define PCG_PCGControlFlow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGControlFlowSettings **************************************************
struct Z_Construct_UClass_UPCGControlFlowSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGControlFlowSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGControlFlow_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGControlFlowSettings(); \
	friend struct ::Z_Construct_UClass_UPCGControlFlowSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGControlFlowSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGControlFlowSettings, UPCGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGControlFlowSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGControlFlowSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGControlFlow_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGControlFlowSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGControlFlowSettings(UPCGControlFlowSettings&&) = delete; \
	UPCGControlFlowSettings(const UPCGControlFlowSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGControlFlowSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGControlFlowSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGControlFlowSettings) \
	PCG_API virtual ~UPCGControlFlowSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGControlFlow_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGControlFlow_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGControlFlow_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGControlFlow_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGControlFlowSettings;

// ********** End Class UPCGControlFlowSettings ****************************************************

// ********** Begin ScriptStruct FEnumSelector *****************************************************
struct Z_Construct_UScriptStruct_FEnumSelector_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGControlFlow_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnumSelector_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FEnumSelector;
// ********** End ScriptStruct FEnumSelector *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGControlFlow_h

// ********** Begin Enum EPCGControlFlowSelectionMode **********************************************
#define FOREACH_ENUM_EPCGCONTROLFLOWSELECTIONMODE(op) \
	op(EPCGControlFlowSelectionMode::Integer) \
	op(EPCGControlFlowSelectionMode::Enum) \
	op(EPCGControlFlowSelectionMode::String) 

enum class EPCGControlFlowSelectionMode : uint8;
template<> struct TIsUEnumClass<EPCGControlFlowSelectionMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGControlFlowSelectionMode>();
// ********** End Enum EPCGControlFlowSelectionMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
