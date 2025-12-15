// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavLinkDefinition.h"

#ifdef ENGINE_NavLinkDefinition_generated_h
#error "NavLinkDefinition.generated.h already included, missing '#pragma once' in NavLinkDefinition.h"
#endif
#define ENGINE_NavLinkDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNavigationLinkBase ***********************************************
struct Z_Construct_UScriptStruct_FNavigationLinkBase_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigationLinkBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNavigationLinkBase;
// ********** End ScriptStruct FNavigationLinkBase *************************************************

// ********** Begin ScriptStruct FNavigationLink ***************************************************
struct Z_Construct_UScriptStruct_FNavigationLink_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_205_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigationLink_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNavigationLinkBase Super;


struct FNavigationLink;
// ********** End ScriptStruct FNavigationLink *****************************************************

// ********** Begin ScriptStruct FNavigationSegmentLink ********************************************
struct Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_258_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNavigationLinkBase Super;


struct FNavigationSegmentLink;
// ********** End ScriptStruct FNavigationSegmentLink **********************************************

// ********** Begin Class UNavLinkDefinition *******************************************************
struct Z_Construct_UClass_UNavLinkDefinition_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNavLinkDefinition_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_312_INCLASS \
private: \
	static void StaticRegisterNativesUNavLinkDefinition(); \
	friend struct ::Z_Construct_UClass_UNavLinkDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNavLinkDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavLinkDefinition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNavLinkDefinition_NoRegister) \
	DECLARE_SERIALIZER(UNavLinkDefinition)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_312_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavLinkDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavLinkDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkDefinition); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavLinkDefinition(UNavLinkDefinition&&) = delete; \
	UNavLinkDefinition(const UNavLinkDefinition&) = delete; \
	ENGINE_API virtual ~UNavLinkDefinition();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_309_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_312_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_312_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_312_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavLinkDefinition;

// ********** End Class UNavLinkDefinition *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h

// ********** Begin Enum ENavLinkDirection *********************************************************
#define FOREACH_ENUM_ENAVLINKDIRECTION(op) \
	op(ENavLinkDirection::BothWays) \
	op(ENavLinkDirection::LeftToRight) \
	op(ENavLinkDirection::RightToLeft) 

namespace ENavLinkDirection { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavLinkDirection::Type>();
// ********** End Enum ENavLinkDirection ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
