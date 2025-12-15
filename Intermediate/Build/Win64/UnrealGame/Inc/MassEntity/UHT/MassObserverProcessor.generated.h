// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassObserverProcessor.h"

#ifdef MASSENTITY_MassObserverProcessor_generated_h
#error "MassObserverProcessor.generated.h already included, missing '#pragma once' in MassObserverProcessor.h"
#endif
#define MASSENTITY_MassObserverProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassObserverExecutionContext *************************************
struct Z_Construct_UScriptStruct_FMassObserverExecutionContext_Statics;
#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassObserverExecutionContext_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


struct FMassObserverExecutionContext;
// ********** End ScriptStruct FMassObserverExecutionContext ***************************************

// ********** Begin Class UMassObserverProcessor ***************************************************
struct Z_Construct_UClass_UMassObserverProcessor_Statics;
MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor_NoRegister();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassObserverProcessor(); \
	friend struct ::Z_Construct_UClass_UMassObserverProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITY_API UClass* ::Z_Construct_UClass_UMassObserverProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassObserverProcessor, UMassProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntity"), Z_Construct_UClass_UMassObserverProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassObserverProcessor)


#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_71_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassObserverProcessor(UMassObserverProcessor&&) = delete; \
	UMassObserverProcessor(const UMassObserverProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITY_API, UMassObserverProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassObserverProcessor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMassObserverProcessor) \
	MASSENTITY_API virtual ~UMassObserverProcessor();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_68_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassObserverProcessor;

// ********** End Class UMassObserverProcessor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
