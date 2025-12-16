// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EngineRuntimeTests.h"

#ifdef RUNTIMETESTS_EngineRuntimeTests_generated_h
#error "EngineRuntimeTests.generated.h already included, missing '#pragma once' in EngineRuntimeTests.h"
#endif
#define RUNTIMETESTS_EngineRuntimeTests_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEngineTestTickActor *****************************************************
struct Z_Construct_UClass_AEngineTestTickActor_Statics;
RUNTIMETESTS_API UClass* Z_Construct_UClass_AEngineTestTickActor_NoRegister();

#define FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEngineTestTickActor(); \
	friend struct ::Z_Construct_UClass_AEngineTestTickActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RUNTIMETESTS_API UClass* ::Z_Construct_UClass_AEngineTestTickActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AEngineTestTickActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeTests"), Z_Construct_UClass_AEngineTestTickActor_NoRegister) \
	DECLARE_SERIALIZER(AEngineTestTickActor)


#define FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEngineTestTickActor(AEngineTestTickActor&&) = delete; \
	AEngineTestTickActor(const AEngineTestTickActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RUNTIMETESTS_API, AEngineTestTickActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEngineTestTickActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEngineTestTickActor) \
	RUNTIMETESTS_API virtual ~AEngineTestTickActor();


#define FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_17_PROLOG
#define FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEngineTestTickActor;

// ********** End Class AEngineTestTickActor *******************************************************

// ********** Begin ScriptStruct FEngineTestTickPayload ********************************************
struct Z_Construct_UScriptStruct_FEngineTestTickPayload_Statics;
#define FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEngineTestTickPayload_Statics; \
	RUNTIMETESTS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FEngineTestTickPayload;
// ********** End ScriptStruct FEngineTestTickPayload **********************************************

// ********** Begin Class UEngineTickTestProcessor *************************************************
struct Z_Construct_UClass_UEngineTickTestProcessor_Statics;
RUNTIMETESTS_API UClass* Z_Construct_UClass_UEngineTickTestProcessor_NoRegister();

#define FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineTickTestProcessor(); \
	friend struct ::Z_Construct_UClass_UEngineTickTestProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RUNTIMETESTS_API UClass* ::Z_Construct_UClass_UEngineTickTestProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UEngineTickTestProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeTests"), Z_Construct_UClass_UEngineTickTestProcessor_NoRegister) \
	DECLARE_SERIALIZER(UEngineTickTestProcessor)


#define FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_85_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEngineTickTestProcessor(UEngineTickTestProcessor&&) = delete; \
	UEngineTickTestProcessor(const UEngineTickTestProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RUNTIMETESTS_API, UEngineTickTestProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineTickTestProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEngineTickTestProcessor) \
	RUNTIMETESTS_API virtual ~UEngineTickTestProcessor();


#define FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_82_PROLOG
#define FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEngineTickTestProcessor;

// ********** End Class UEngineTickTestProcessor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_RuntimeTests_Source_RuntimeTests_Public_EngineRuntimeTests_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
