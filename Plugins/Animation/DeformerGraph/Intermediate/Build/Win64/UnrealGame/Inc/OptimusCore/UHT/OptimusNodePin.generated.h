// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusNodePin.h"

#ifdef OPTIMUSCORE_OptimusNodePin_generated_h
#error "OptimusNodePin.generated.h already included, missing '#pragma once' in OptimusNodePin.h"
#endif
#define OPTIMUSCORE_OptimusNodePin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusNodePin **********************************************************
struct Z_Construct_UClass_UOptimusNodePin_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNodePin(); \
	friend struct ::Z_Construct_UClass_UOptimusNodePin_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNodePin_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNodePin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNodePin_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNodePin)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNodePin(UOptimusNodePin&&) = delete; \
	UOptimusNodePin(const UOptimusNodePin&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusNodePin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNodePin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusNodePin) \
	OPTIMUSCORE_API virtual ~UOptimusNodePin();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_37_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNodePin;

// ********** End Class UOptimusNodePin ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodePin_h

// ********** Begin Enum EOptimusNodePinStorageType ************************************************
#define FOREACH_ENUM_EOPTIMUSNODEPINSTORAGETYPE(op) \
	op(EOptimusNodePinStorageType::Value) \
	op(EOptimusNodePinStorageType::Resource) 

enum class EOptimusNodePinStorageType : uint8;
template<> struct TIsUEnumClass<EOptimusNodePinStorageType> { enum { Value = true }; };
template<> OPTIMUSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOptimusNodePinStorageType>();
// ********** End Enum EOptimusNodePinStorageType **************************************************

// ********** Begin Enum EOptimusNodePinDirection **************************************************
#define FOREACH_ENUM_EOPTIMUSNODEPINDIRECTION(op) \
	op(EOptimusNodePinDirection::Unknown) \
	op(EOptimusNodePinDirection::Input) \
	op(EOptimusNodePinDirection::Output) 

enum class EOptimusNodePinDirection : uint8;
template<> struct TIsUEnumClass<EOptimusNodePinDirection> { enum { Value = true }; };
template<> OPTIMUSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOptimusNodePinDirection>();
// ********** End Enum EOptimusNodePinDirection ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
