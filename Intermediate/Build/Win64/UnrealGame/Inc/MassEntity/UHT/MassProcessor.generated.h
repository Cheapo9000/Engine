// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassProcessor.h"

#ifdef MASSENTITY_MassProcessor_generated_h
#error "MassProcessor.generated.h already included, missing '#pragma once' in MassProcessor.h"
#endif
#define MASSENTITY_MassProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassProcessorExecutionOrder **************************************
struct Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics;
#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


struct FMassProcessorExecutionOrder;
// ********** End ScriptStruct FMassProcessorExecutionOrder ****************************************

// ********** Begin Class UMassProcessor ***********************************************************
struct Z_Construct_UClass_UMassProcessor_Statics;
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassProcessor(); \
	friend struct ::Z_Construct_UClass_UMassProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITY_API UClass* ::Z_Construct_UClass_UMassProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassProcessor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntity"), Z_Construct_UClass_UMassProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassProcessor) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Mass");} \



#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassProcessor(UMassProcessor&&) = delete; \
	UMassProcessor(const UMassProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITY_API, UMassProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassProcessor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassProcessor) \
	MASSENTITY_API virtual ~UMassProcessor();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_76_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassProcessor;

// ********** End Class UMassProcessor *************************************************************

// ********** Begin Class UMassCompositeProcessor **************************************************
struct Z_Construct_UClass_UMassCompositeProcessor_Statics;
MASSENTITY_API UClass* Z_Construct_UClass_UMassCompositeProcessor_NoRegister();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_322_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCompositeProcessor(); \
	friend struct ::Z_Construct_UClass_UMassCompositeProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITY_API UClass* ::Z_Construct_UClass_UMassCompositeProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCompositeProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntity"), Z_Construct_UClass_UMassCompositeProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassCompositeProcessor)


#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_322_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCompositeProcessor(UMassCompositeProcessor&&) = delete; \
	UMassCompositeProcessor(const UMassCompositeProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITY_API, UMassCompositeProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCompositeProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassCompositeProcessor) \
	MASSENTITY_API virtual ~UMassCompositeProcessor();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_319_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_322_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_322_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_322_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCompositeProcessor;

// ********** End Class UMassCompositeProcessor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h

// ********** Begin Enum EActivationState **********************************************************
#define FOREACH_ENUM_EACTIVATIONSTATE(op) \
	op(EActivationState::Inactive) \
	op(EActivationState::Active) \
	op(EActivationState::OneShot) 

enum class EActivationState : uint8;
template<> struct TIsUEnumClass<EActivationState> { enum { Value = true }; };
template<> MASSENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EActivationState>();
// ********** End Enum EActivationState ************************************************************

// ********** Begin Enum EMassQueryBasedPruning ****************************************************
#define FOREACH_ENUM_EMASSQUERYBASEDPRUNING(op) \
	op(EMassQueryBasedPruning::Prune) \
	op(EMassQueryBasedPruning::Never) \
	op(EMassQueryBasedPruning::Default) 

enum class EMassQueryBasedPruning : uint8;
template<> struct TIsUEnumClass<EMassQueryBasedPruning> { enum { Value = true }; };
template<> MASSENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassQueryBasedPruning>();
// ********** End Enum EMassQueryBasedPruning ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
