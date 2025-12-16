// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RelativeBodyAnimModifier.h"

#ifdef RELATIVEBODYANIMUTILS_RelativeBodyAnimModifier_generated_h
#error "RelativeBodyAnimModifier.generated.h already included, missing '#pragma once' in RelativeBodyAnimModifier.h"
#endif
#define RELATIVEBODYANIMUTILS_RelativeBodyAnimModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRelativeBodySourceData *******************************************
struct Z_Construct_UScriptStruct_FRelativeBodySourceData_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimUtils_Public_RelativeBodyAnimModifier_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRelativeBodySourceData_Statics; \
	RELATIVEBODYANIMUTILS_API static class UScriptStruct* StaticStruct();


struct FRelativeBodySourceData;
// ********** End ScriptStruct FRelativeBodySourceData *********************************************

// ********** Begin Class URelativeBodyAnimModifier ************************************************
struct Z_Construct_UClass_URelativeBodyAnimModifier_Statics;
RELATIVEBODYANIMUTILS_API UClass* Z_Construct_UClass_URelativeBodyAnimModifier_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimUtils_Public_RelativeBodyAnimModifier_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURelativeBodyAnimModifier(); \
	friend struct ::Z_Construct_UClass_URelativeBodyAnimModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RELATIVEBODYANIMUTILS_API UClass* ::Z_Construct_UClass_URelativeBodyAnimModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(URelativeBodyAnimModifier, UAnimationModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RelativeBodyAnimUtils"), Z_Construct_UClass_URelativeBodyAnimModifier_NoRegister) \
	DECLARE_SERIALIZER(URelativeBodyAnimModifier)


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimUtils_Public_RelativeBodyAnimModifier_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URelativeBodyAnimModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URelativeBodyAnimModifier(URelativeBodyAnimModifier&&) = delete; \
	URelativeBodyAnimModifier(const URelativeBodyAnimModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URelativeBodyAnimModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URelativeBodyAnimModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URelativeBodyAnimModifier) \
	NO_API virtual ~URelativeBodyAnimModifier();


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimUtils_Public_RelativeBodyAnimModifier_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimUtils_Public_RelativeBodyAnimModifier_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimUtils_Public_RelativeBodyAnimModifier_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimUtils_Public_RelativeBodyAnimModifier_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URelativeBodyAnimModifier;

// ********** End Class URelativeBodyAnimModifier **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimUtils_Public_RelativeBodyAnimModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
