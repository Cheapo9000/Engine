// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UAF/AbstractSkeleton/AbstractSkeletonSetCollection.h"

#ifdef UAF_AbstractSkeletonSetCollection_generated_h
#error "AbstractSkeletonSetCollection.generated.h already included, missing '#pragma once' in AbstractSkeletonSetCollection.h"
#endif
#define UAF_AbstractSkeletonSetCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAbstractSkeletonSet **********************************************
struct Z_Construct_UScriptStruct_FAbstractSkeletonSet_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetCollection_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbstractSkeletonSet_Statics; \
	UAF_API static class UScriptStruct* StaticStruct();


struct FAbstractSkeletonSet;
// ********** End ScriptStruct FAbstractSkeletonSet ************************************************

// ********** Begin Class UAbstractSkeletonSetCollection *******************************************
struct Z_Construct_UClass_UAbstractSkeletonSetCollection_Statics;
UAF_API UClass* Z_Construct_UClass_UAbstractSkeletonSetCollection_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetCollection_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbstractSkeletonSetCollection(); \
	friend struct ::Z_Construct_UClass_UAbstractSkeletonSetCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAF_API UClass* ::Z_Construct_UClass_UAbstractSkeletonSetCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbstractSkeletonSetCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAF"), Z_Construct_UClass_UAbstractSkeletonSetCollection_NoRegister) \
	DECLARE_SERIALIZER(UAbstractSkeletonSetCollection)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetCollection_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAF_API UAbstractSkeletonSetCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbstractSkeletonSetCollection(UAbstractSkeletonSetCollection&&) = delete; \
	UAbstractSkeletonSetCollection(const UAbstractSkeletonSetCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAF_API, UAbstractSkeletonSetCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbstractSkeletonSetCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbstractSkeletonSetCollection) \
	UAF_API virtual ~UAbstractSkeletonSetCollection();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetCollection_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetCollection_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetCollection_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetCollection_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbstractSkeletonSetCollection;

// ********** End Class UAbstractSkeletonSetCollection *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_UAF_AbstractSkeleton_AbstractSkeletonSetCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
