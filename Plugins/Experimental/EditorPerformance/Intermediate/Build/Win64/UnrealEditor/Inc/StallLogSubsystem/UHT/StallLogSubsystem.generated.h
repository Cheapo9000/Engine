// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StallLogSubsystem.h"

#ifdef STALLLOGSUBSYSTEM_StallLogSubsystem_generated_h
#error "StallLogSubsystem.generated.h already included, missing '#pragma once' in StallLogSubsystem.h"
#endif
#define STALLLOGSUBSYSTEM_StallLogSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStallLogSubsystem *******************************************************
struct Z_Construct_UClass_UStallLogSubsystem_Statics;
STALLLOGSUBSYSTEM_API UClass* Z_Construct_UClass_UStallLogSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorPerformance_Source_StallLogSubsystem_Public_StallLogSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStallLogSubsystem(); \
	friend struct ::Z_Construct_UClass_UStallLogSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STALLLOGSUBSYSTEM_API UClass* ::Z_Construct_UClass_UStallLogSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UStallLogSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StallLogSubsystem"), Z_Construct_UClass_UStallLogSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UStallLogSubsystem)


#define FID_Engine_Plugins_Experimental_EditorPerformance_Source_StallLogSubsystem_Public_StallLogSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STALLLOGSUBSYSTEM_API UStallLogSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStallLogSubsystem(UStallLogSubsystem&&) = delete; \
	UStallLogSubsystem(const UStallLogSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STALLLOGSUBSYSTEM_API, UStallLogSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStallLogSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStallLogSubsystem) \
	STALLLOGSUBSYSTEM_API virtual ~UStallLogSubsystem();


#define FID_Engine_Plugins_Experimental_EditorPerformance_Source_StallLogSubsystem_Public_StallLogSubsystem_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_EditorPerformance_Source_StallLogSubsystem_Public_StallLogSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorPerformance_Source_StallLogSubsystem_Public_StallLogSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorPerformance_Source_StallLogSubsystem_Public_StallLogSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStallLogSubsystem;

// ********** End Class UStallLogSubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorPerformance_Source_StallLogSubsystem_Public_StallLogSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
