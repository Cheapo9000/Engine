// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstraintSubsystem.h"

#ifdef CONSTRAINTS_ConstraintSubsystem_generated_h
#error "ConstraintSubsystem.generated.h already included, missing '#pragma once' in ConstraintSubsystem.h"
#endif
#define CONSTRAINTS_ConstraintSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConstraintSubsystem;
class UTickableConstraint;

// ********** Begin ScriptStruct FConstraintsInWorld ***********************************************
struct Z_Construct_UScriptStruct_FConstraintsInWorld_Statics;
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintsInWorld_Statics; \
	CONSTRAINTS_API static class UScriptStruct* StaticStruct();


struct FConstraintsInWorld;
// ********** End ScriptStruct FConstraintsInWorld *************************************************

// ********** Begin SparseDelegate FOnConstraintAddedToSystem **************************************
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_46_DELEGATE \
static CONSTRAINTS_API void FOnConstraintAddedToSystem_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintAddedToSystem, UConstraintSubsystem* Mananger, UTickableConstraint* Constraint);


// ********** End SparseDelegate FOnConstraintAddedToSystem ****************************************

// ********** Begin SparseDelegate FOnConstraintRemovedFromSystem **********************************
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_47_DELEGATE \
static CONSTRAINTS_API void FOnConstraintRemovedFromSystem_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintRemovedFromSystem, UConstraintSubsystem* Mananger, UTickableConstraint* Constraint, bool bDoNotCompensate);


// ********** End SparseDelegate FOnConstraintRemovedFromSystem ************************************

// ********** Begin Class UConstraintSubsystem *****************************************************
struct Z_Construct_UClass_UConstraintSubsystem_Statics;
CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstraintSubsystem(); \
	friend struct ::Z_Construct_UClass_UConstraintSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONSTRAINTS_API UClass* ::Z_Construct_UClass_UConstraintSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UConstraintSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Constraints"), Z_Construct_UClass_UConstraintSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UConstraintSubsystem)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConstraintSubsystem(UConstraintSubsystem&&) = delete; \
	UConstraintSubsystem(const UConstraintSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstraintSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstraintSubsystem) \
	NO_API virtual ~UConstraintSubsystem();


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_39_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConstraintSubsystem;

// ********** End Class UConstraintSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
