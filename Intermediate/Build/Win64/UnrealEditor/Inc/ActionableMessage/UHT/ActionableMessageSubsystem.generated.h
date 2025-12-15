// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionableMessageSubsystem.h"

#ifdef ACTIONABLEMESSAGE_ActionableMessageSubsystem_generated_h
#error "ActionableMessageSubsystem.generated.h already included, missing '#pragma once' in ActionableMessageSubsystem.h"
#endif
#define ACTIONABLEMESSAGE_ActionableMessageSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActionableMessageSubsystem **********************************************
struct Z_Construct_UClass_UActionableMessageSubsystem_Statics;
ACTIONABLEMESSAGE_API UClass* Z_Construct_UClass_UActionableMessageSubsystem_NoRegister();

#define FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionableMessageSubsystem(); \
	friend struct ::Z_Construct_UClass_UActionableMessageSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTIONABLEMESSAGE_API UClass* ::Z_Construct_UClass_UActionableMessageSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UActionableMessageSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionableMessage"), Z_Construct_UClass_UActionableMessageSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UActionableMessageSubsystem)


#define FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONABLEMESSAGE_API UActionableMessageSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActionableMessageSubsystem(UActionableMessageSubsystem&&) = delete; \
	UActionableMessageSubsystem(const UActionableMessageSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONABLEMESSAGE_API, UActionableMessageSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionableMessageSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActionableMessageSubsystem) \
	ACTIONABLEMESSAGE_API virtual ~UActionableMessageSubsystem();


#define FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_45_PROLOG
#define FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActionableMessageSubsystem;

// ********** End Class UActionableMessageSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
