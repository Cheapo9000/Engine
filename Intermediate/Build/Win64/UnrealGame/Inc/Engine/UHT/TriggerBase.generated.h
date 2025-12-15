// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TriggerBase.h"

#ifdef ENGINE_TriggerBase_generated_h
#error "TriggerBase.generated.h already included, missing '#pragma once' in TriggerBase.h"
#endif
#define ENGINE_TriggerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATriggerBase *************************************************************
struct Z_Construct_UClass_ATriggerBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_ATriggerBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATriggerBase(); \
	friend struct ::Z_Construct_UClass_ATriggerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ATriggerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ATriggerBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ATriggerBase_NoRegister) \
	DECLARE_SERIALIZER(ATriggerBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ATriggerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ATriggerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATriggerBase(ATriggerBase&&) = delete; \
	ATriggerBase(const ATriggerBase&) = delete; \
	ENGINE_API virtual ~ATriggerBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATriggerBase;

// ********** End Class ATriggerBase ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
