// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SimpleConstructionScript.h"

#ifdef ENGINE_SimpleConstructionScript_generated_h
#error "SimpleConstructionScript.generated.h already included, missing '#pragma once' in SimpleConstructionScript.h"
#endif
#define ENGINE_SimpleConstructionScript_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USimpleConstructionScript ************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USimpleConstructionScript, ENGINE_API)


struct Z_Construct_UClass_USimpleConstructionScript_Statics;
ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleConstructionScript(); \
	friend struct ::Z_Construct_UClass_USimpleConstructionScript_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USimpleConstructionScript_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleConstructionScript, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USimpleConstructionScript_NoRegister) \
	DECLARE_SERIALIZER(USimpleConstructionScript) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USimpleConstructionScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleConstructionScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USimpleConstructionScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleConstructionScript); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleConstructionScript(USimpleConstructionScript&&) = delete; \
	USimpleConstructionScript(const USimpleConstructionScript&) = delete; \
	ENGINE_API virtual ~USimpleConstructionScript();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleConstructionScript;

// ********** End Class USimpleConstructionScript **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
