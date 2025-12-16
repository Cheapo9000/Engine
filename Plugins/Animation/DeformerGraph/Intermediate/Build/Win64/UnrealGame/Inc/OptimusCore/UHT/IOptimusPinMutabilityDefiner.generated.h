// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusPinMutabilityDefiner.h"

#ifdef OPTIMUSCORE_IOptimusPinMutabilityDefiner_generated_h
#error "IOptimusPinMutabilityDefiner.generated.h already included, missing '#pragma once' in IOptimusPinMutabilityDefiner.h"
#endif
#define OPTIMUSCORE_IOptimusPinMutabilityDefiner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusPinMutabilityDefiner *****************************************
struct Z_Construct_UClass_UOptimusPinMutabilityDefiner_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusPinMutabilityDefiner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusPinMutabilityDefiner(UOptimusPinMutabilityDefiner&&) = delete; \
	UOptimusPinMutabilityDefiner(const UOptimusPinMutabilityDefiner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusPinMutabilityDefiner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusPinMutabilityDefiner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusPinMutabilityDefiner) \
	virtual ~UOptimusPinMutabilityDefiner() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusPinMutabilityDefiner(); \
	friend struct ::Z_Construct_UClass_UOptimusPinMutabilityDefiner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusPinMutabilityDefiner, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister) \
	DECLARE_SERIALIZER(UOptimusPinMutabilityDefiner)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusPinMutabilityDefiner() {} \
public: \
	typedef UOptimusPinMutabilityDefiner UClassType; \
	typedef IOptimusPinMutabilityDefiner ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_11_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusPinMutabilityDefiner;

// ********** End Interface UOptimusPinMutabilityDefiner *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPinMutabilityDefiner_h

// ********** Begin Enum EOptimusPinMutability *****************************************************
#define FOREACH_ENUM_EOPTIMUSPINMUTABILITY(op) \
	op(EOptimusPinMutability::Undefined) \
	op(EOptimusPinMutability::Immutable) \
	op(EOptimusPinMutability::Mutable) 

enum class EOptimusPinMutability;
template<> struct TIsUEnumClass<EOptimusPinMutability> { enum { Value = true }; };
template<> OPTIMUSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOptimusPinMutability>();
// ********** End Enum EOptimusPinMutability *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
