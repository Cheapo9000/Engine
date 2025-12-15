// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstraintsManager.h"

#ifdef CONSTRAINTS_ConstraintsManager_generated_h
#error "ConstraintsManager.generated.h already included, missing '#pragma once' in ConstraintsManager.h"
#endif
#define CONSTRAINTS_ConstraintsManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConstraintsManager;
class UTickableConstraint;

// ********** Begin ScriptStruct FConstraintTickFunction *******************************************
struct Z_Construct_UScriptStruct_FConstraintTickFunction_Statics;
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintTickFunction_Statics; \
	CONSTRAINTS_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


struct FConstraintTickFunction;
// ********** End ScriptStruct FConstraintTickFunction *********************************************

// ********** Begin Class UTickableConstraint ******************************************************
struct Z_Construct_UClass_UTickableConstraint_Statics;
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTickableConstraint(); \
	friend struct ::Z_Construct_UClass_UTickableConstraint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONSTRAINTS_API UClass* ::Z_Construct_UClass_UTickableConstraint_NoRegister(); \
public: \
	DECLARE_CLASS2(UTickableConstraint, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Constraints"), Z_Construct_UClass_UTickableConstraint_NoRegister) \
	DECLARE_SERIALIZER(UTickableConstraint)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_75_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTickableConstraint(UTickableConstraint&&) = delete; \
	UTickableConstraint(const UTickableConstraint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSTRAINTS_API, UTickableConstraint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickableConstraint); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UTickableConstraint)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_72_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTickableConstraint;

// ********** End Class UTickableConstraint ********************************************************

// ********** Begin SparseDelegate FOnConstraintAdded **********************************************
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_169_DELEGATE \
static CONSTRAINTS_API void FOnConstraintAdded_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintAdded, UConstraintsManager* Mananger, UTickableConstraint* Constraint);


// ********** End SparseDelegate FOnConstraintAdded ************************************************

// ********** Begin SparseDelegate FOnConstraintRemoved ********************************************
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_170_DELEGATE \
static CONSTRAINTS_API void FOnConstraintRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintRemoved, UConstraintsManager* Mananger, UTickableConstraint* Constraint, bool bDoNotCompensate);


// ********** End SparseDelegate FOnConstraintRemoved **********************************************

// ********** Begin Class UConstraintsManager ******************************************************
struct Z_Construct_UClass_UConstraintsManager_Statics;
CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsManager_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstraintsManager(); \
	friend struct ::Z_Construct_UClass_UConstraintsManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONSTRAINTS_API UClass* ::Z_Construct_UClass_UConstraintsManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UConstraintsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Constraints"), Z_Construct_UClass_UConstraintsManager_NoRegister) \
	DECLARE_SERIALIZER(UConstraintsManager)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_163_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConstraintsManager(UConstraintsManager&&) = delete; \
	UConstraintsManager(const UConstraintsManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSTRAINTS_API, UConstraintsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstraintsManager)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_160_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_163_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConstraintsManager;

// ********** End Class UConstraintsManager ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
