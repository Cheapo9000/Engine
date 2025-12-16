// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UAF/AbstractSkeleton/AbstractSkeletonSetBinding.h"

#ifdef UAF_AbstractSkeletonSetBinding_generated_h
#error "AbstractSkeletonSetBinding.generated.h already included, missing '#pragma once' in AbstractSkeletonSetBinding.h"
#endif
#define UAF_AbstractSkeletonSetBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAbstractSkeleton_BoneBinding *************************************
struct Z_Construct_UScriptStruct_FAbstractSkeleton_BoneBinding_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetBinding_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbstractSkeleton_BoneBinding_Statics; \
	UAF_API static class UScriptStruct* StaticStruct();


struct FAbstractSkeleton_BoneBinding;
// ********** End ScriptStruct FAbstractSkeleton_BoneBinding ***************************************

// ********** Begin ScriptStruct FAbstractSkeleton_AttributeBinding ********************************
struct Z_Construct_UScriptStruct_FAbstractSkeleton_AttributeBinding_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetBinding_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbstractSkeleton_AttributeBinding_Statics; \
	UAF_API static class UScriptStruct* StaticStruct();


struct FAbstractSkeleton_AttributeBinding;
// ********** End ScriptStruct FAbstractSkeleton_AttributeBinding **********************************

// ********** Begin Class UAbstractSkeletonSetBinding **********************************************
struct Z_Construct_UClass_UAbstractSkeletonSetBinding_Statics;
UAF_API UClass* Z_Construct_UClass_UAbstractSkeletonSetBinding_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetBinding_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbstractSkeletonSetBinding(); \
	friend struct ::Z_Construct_UClass_UAbstractSkeletonSetBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAF_API UClass* ::Z_Construct_UClass_UAbstractSkeletonSetBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbstractSkeletonSetBinding, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAF"), Z_Construct_UClass_UAbstractSkeletonSetBinding_NoRegister) \
	DECLARE_SERIALIZER(UAbstractSkeletonSetBinding)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetBinding_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAF_API UAbstractSkeletonSetBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbstractSkeletonSetBinding(UAbstractSkeletonSetBinding&&) = delete; \
	UAbstractSkeletonSetBinding(const UAbstractSkeletonSetBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAF_API, UAbstractSkeletonSetBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbstractSkeletonSetBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbstractSkeletonSetBinding) \
	UAF_API virtual ~UAbstractSkeletonSetBinding();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetBinding_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetBinding_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetBinding_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetBinding_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbstractSkeletonSetBinding;

// ********** End Class UAbstractSkeletonSetBinding ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
