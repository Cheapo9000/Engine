// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimModule/ModuleInput.h"

#ifdef CHAOSVEHICLESCORE_ModuleInput_generated_h
#error "ModuleInput.generated.h already included, missing '#pragma once' in ModuleInput.h"
#endif
#define CHAOSVEHICLESCORE_ModuleInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModuleInputValue *************************************************
struct Z_Construct_UScriptStruct_FModuleInputValue_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_188_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModuleInputValue_Statics; \
	CHAOSVEHICLESCORE_API static class UScriptStruct* StaticStruct();


struct FModuleInputValue;
// ********** End ScriptStruct FModuleInputValue ***************************************************

// ********** Begin Class UDefaultModularVehicleInputModifier **************************************
struct Z_Construct_UClass_UDefaultModularVehicleInputModifier_Statics;
CHAOSVEHICLESCORE_API UClass* Z_Construct_UClass_UDefaultModularVehicleInputModifier_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_477_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultModularVehicleInputModifier(); \
	friend struct ::Z_Construct_UClass_UDefaultModularVehicleInputModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVEHICLESCORE_API UClass* ::Z_Construct_UClass_UDefaultModularVehicleInputModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UDefaultModularVehicleInputModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosVehiclesCore"), Z_Construct_UClass_UDefaultModularVehicleInputModifier_NoRegister) \
	DECLARE_SERIALIZER(UDefaultModularVehicleInputModifier)


#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_477_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDefaultModularVehicleInputModifier(UDefaultModularVehicleInputModifier&&) = delete; \
	UDefaultModularVehicleInputModifier(const UDefaultModularVehicleInputModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSVEHICLESCORE_API, UDefaultModularVehicleInputModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultModularVehicleInputModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultModularVehicleInputModifier)


#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_474_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_477_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_477_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_477_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDefaultModularVehicleInputModifier;

// ********** End Class UDefaultModularVehicleInputModifier ****************************************

// ********** Begin ScriptStruct FModuleInputSetup *************************************************
struct Z_Construct_UScriptStruct_FModuleInputSetup_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_521_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModuleInputSetup_Statics; \
	CHAOSVEHICLESCORE_API static class UScriptStruct* StaticStruct();


struct FModuleInputSetup;
// ********** End ScriptStruct FModuleInputSetup ***************************************************

// ********** Begin ScriptStruct FModuleInputContainer *********************************************
struct Z_Construct_UScriptStruct_FModuleInputContainer_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_583_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModuleInputContainer_Statics; \
	CHAOSVEHICLESCORE_API static class UScriptStruct* StaticStruct();


struct FModuleInputContainer;
// ********** End ScriptStruct FModuleInputContainer ***********************************************

// ********** Begin Class UVehicleInputProducerBase ************************************************
struct Z_Construct_UClass_UVehicleInputProducerBase_Statics;
CHAOSVEHICLESCORE_API UClass* Z_Construct_UClass_UVehicleInputProducerBase_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_756_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleInputProducerBase(); \
	friend struct ::Z_Construct_UClass_UVehicleInputProducerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVEHICLESCORE_API UClass* ::Z_Construct_UClass_UVehicleInputProducerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UVehicleInputProducerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ChaosVehiclesCore"), Z_Construct_UClass_UVehicleInputProducerBase_NoRegister) \
	DECLARE_SERIALIZER(UVehicleInputProducerBase)


#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_756_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSVEHICLESCORE_API UVehicleInputProducerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVehicleInputProducerBase(UVehicleInputProducerBase&&) = delete; \
	UVehicleInputProducerBase(const UVehicleInputProducerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSVEHICLESCORE_API, UVehicleInputProducerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleInputProducerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleInputProducerBase) \
	CHAOSVEHICLESCORE_API virtual ~UVehicleInputProducerBase();


#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_753_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_756_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_756_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h_756_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVehicleInputProducerBase;

// ********** End Class UVehicleInputProducerBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesCore_Public_SimModule_ModuleInput_h

// ********** Begin Enum EModuleInputQuantizationType **********************************************
#define FOREACH_ENUM_EMODULEINPUTQUANTIZATIONTYPE(op) \
	op(EModuleInputQuantizationType::Default_16Bits) \
	op(EModuleInputQuantizationType::Custom_8Bits) 

enum class EModuleInputQuantizationType : uint8;
template<> struct TIsUEnumClass<EModuleInputQuantizationType> { enum { Value = true }; };
template<> CHAOSVEHICLESCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModuleInputQuantizationType>();
// ********** End Enum EModuleInputQuantizationType ************************************************

// ********** Begin Enum EModuleInputValueType *****************************************************
#define FOREACH_ENUM_EMODULEINPUTVALUETYPE(op) \
	op(EModuleInputValueType::MBoolean) \
	op(EModuleInputValueType::MAxis1D) \
	op(EModuleInputValueType::MAxis2D) \
	op(EModuleInputValueType::MAxis3D) \
	op(EModuleInputValueType::MInteger) 

enum class EModuleInputValueType : uint8;
template<> struct TIsUEnumClass<EModuleInputValueType> { enum { Value = true }; };
template<> CHAOSVEHICLESCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModuleInputValueType>();
// ********** End Enum EModuleInputValueType *******************************************************

// ********** Begin Enum EFunctionType *************************************************************
#define FOREACH_ENUM_EFUNCTIONTYPE(op) \
	op(EFunctionType::LinearFunction) \
	op(EFunctionType::SquaredFunction) \
	op(EFunctionType::CustomCurve) 

enum class EFunctionType : uint8;
template<> struct TIsUEnumClass<EFunctionType> { enum { Value = true }; };
template<> CHAOSVEHICLESCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFunctionType>();
// ********** End Enum EFunctionType ***************************************************************

// ********** Begin Enum EModuleInputBufferActionType **********************************************
#define FOREACH_ENUM_EMODULEINPUTBUFFERACTIONTYPE(op) \
	op(EModuleInputBufferActionType::Override) \
	op(EModuleInputBufferActionType::Combine) 

enum class EModuleInputBufferActionType : uint8;
template<> struct TIsUEnumClass<EModuleInputBufferActionType> { enum { Value = true }; };
template<> CHAOSVEHICLESCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModuleInputBufferActionType>();
// ********** End Enum EModuleInputBufferActionType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
