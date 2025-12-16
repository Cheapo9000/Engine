// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanBatchOperation.h"

#ifdef METAHUMANBATCHPROCESSOR_MetaHumanBatchOperation_generated_h
#error "MetaHumanBatchOperation.generated.h already included, missing '#pragma once' in MetaHumanBatchOperation.h"
#endif
#define METAHUMANBATCHPROCESSOR_MetaHumanBatchOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaHumanBatchOperation *************************************************
struct Z_Construct_UClass_UMetaHumanBatchOperation_Statics;
METAHUMANBATCHPROCESSOR_API UClass* Z_Construct_UClass_UMetaHumanBatchOperation_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanBatchProcessor_Public_MetaHumanBatchOperation_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanBatchOperation(); \
	friend struct ::Z_Construct_UClass_UMetaHumanBatchOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANBATCHPROCESSOR_API UClass* ::Z_Construct_UClass_UMetaHumanBatchOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanBatchOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanBatchProcessor"), Z_Construct_UClass_UMetaHumanBatchOperation_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanBatchOperation)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanBatchProcessor_Public_MetaHumanBatchOperation_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanBatchOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanBatchOperation(UMetaHumanBatchOperation&&) = delete; \
	UMetaHumanBatchOperation(const UMetaHumanBatchOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanBatchOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanBatchOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanBatchOperation) \
	NO_API virtual ~UMetaHumanBatchOperation();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanBatchProcessor_Public_MetaHumanBatchOperation_h_75_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanBatchProcessor_Public_MetaHumanBatchOperation_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanBatchProcessor_Public_MetaHumanBatchOperation_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanBatchProcessor_Public_MetaHumanBatchOperation_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanBatchOperation;

// ********** End Class UMetaHumanBatchOperation ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanBatchProcessor_Public_MetaHumanBatchOperation_h

// ********** Begin Enum EBatchOperationStepsFlags *************************************************
#define FOREACH_ENUM_EBATCHOPERATIONSTEPSFLAGS(op) \
	op(EBatchOperationStepsFlags::None) \
	op(EBatchOperationStepsFlags::SoundWaveToPerformance) \
	op(EBatchOperationStepsFlags::ProcessPerformance) \
	op(EBatchOperationStepsFlags::ExportAnimSequence) \
	op(EBatchOperationStepsFlags::ExportLevelSequence) 

enum class EBatchOperationStepsFlags : uint8;
template<> struct TIsUEnumClass<EBatchOperationStepsFlags> { enum { Value = true }; };
template<> METAHUMANBATCHPROCESSOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBatchOperationStepsFlags>();
// ********** End Enum EBatchOperationStepsFlags ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
