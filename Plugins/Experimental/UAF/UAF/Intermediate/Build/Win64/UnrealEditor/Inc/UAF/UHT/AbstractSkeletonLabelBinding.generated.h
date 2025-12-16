// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UAF/AbstractSkeleton/AbstractSkeletonLabelBinding.h"

#ifdef UAF_AbstractSkeletonLabelBinding_generated_h
#error "AbstractSkeletonLabelBinding.generated.h already included, missing '#pragma once' in AbstractSkeletonLabelBinding.h"
#endif
#define UAF_AbstractSkeletonLabelBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAbstractSkeleton_LabelBinding ************************************
struct Z_Construct_UScriptStruct_FAbstractSkeleton_LabelBinding_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonLabelBinding_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbstractSkeleton_LabelBinding_Statics; \
	UAF_API static class UScriptStruct* StaticStruct();


struct FAbstractSkeleton_LabelBinding;
// ********** End ScriptStruct FAbstractSkeleton_LabelBinding **************************************

// ********** Begin Class UAbstractSkeletonLabelBinding ********************************************
struct Z_Construct_UClass_UAbstractSkeletonLabelBinding_Statics;
UAF_API UClass* Z_Construct_UClass_UAbstractSkeletonLabelBinding_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonLabelBinding_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbstractSkeletonLabelBinding(); \
	friend struct ::Z_Construct_UClass_UAbstractSkeletonLabelBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAF_API UClass* ::Z_Construct_UClass_UAbstractSkeletonLabelBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbstractSkeletonLabelBinding, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAF"), Z_Construct_UClass_UAbstractSkeletonLabelBinding_NoRegister) \
	DECLARE_SERIALIZER(UAbstractSkeletonLabelBinding)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonLabelBinding_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAF_API UAbstractSkeletonLabelBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbstractSkeletonLabelBinding(UAbstractSkeletonLabelBinding&&) = delete; \
	UAbstractSkeletonLabelBinding(const UAbstractSkeletonLabelBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAF_API, UAbstractSkeletonLabelBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbstractSkeletonLabelBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbstractSkeletonLabelBinding) \
	UAF_API virtual ~UAbstractSkeletonLabelBinding();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonLabelBinding_h_29_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonLabelBinding_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonLabelBinding_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonLabelBinding_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbstractSkeletonLabelBinding;

// ********** End Class UAbstractSkeletonLabelBinding **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonLabelBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
