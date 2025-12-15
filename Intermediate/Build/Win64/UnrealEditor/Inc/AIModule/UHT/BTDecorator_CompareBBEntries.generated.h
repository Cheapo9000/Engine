// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h"

#ifdef AIMODULE_BTDecorator_CompareBBEntries_generated_h
#error "BTDecorator_CompareBBEntries.generated.h already included, missing '#pragma once' in BTDecorator_CompareBBEntries.h"
#endif
#define AIMODULE_BTDecorator_CompareBBEntries_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTDecorator_CompareBBEntries ********************************************
struct Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_CompareBBEntries(); \
	friend struct ::Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTDecorator_CompareBBEntries_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTDecorator_CompareBBEntries, UBTDecorator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTDecorator_CompareBBEntries_NoRegister) \
	DECLARE_SERIALIZER(UBTDecorator_CompareBBEntries)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator_CompareBBEntries(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_CompareBBEntries) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator_CompareBBEntries); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_CompareBBEntries); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTDecorator_CompareBBEntries(UBTDecorator_CompareBBEntries&&) = delete; \
	UBTDecorator_CompareBBEntries(const UBTDecorator_CompareBBEntries&) = delete; \
	AIMODULE_API virtual ~UBTDecorator_CompareBBEntries();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_29_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_32_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTDecorator_CompareBBEntries;

// ********** End Class UBTDecorator_CompareBBEntries **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h

// ********** Begin Enum EBlackBoardEntryComparison ************************************************
#define FOREACH_ENUM_EBLACKBOARDENTRYCOMPARISON(op) \
	op(EBlackBoardEntryComparison::Equal) \
	op(EBlackBoardEntryComparison::NotEqual) 

namespace EBlackBoardEntryComparison { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlackBoardEntryComparison::Type>();
// ********** End Enum EBlackBoardEntryComparison **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
