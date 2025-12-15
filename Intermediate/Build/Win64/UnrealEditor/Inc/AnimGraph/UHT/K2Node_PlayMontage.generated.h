// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_PlayMontage.h"

#ifdef ANIMGRAPH_K2Node_PlayMontage_generated_h
#error "K2Node_PlayMontage.generated.h already included, missing '#pragma once' in K2Node_PlayMontage.h"
#endif
#define ANIMGRAPH_K2Node_PlayMontage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_PlayMontage ******************************************************
struct Z_Construct_UClass_UK2Node_PlayMontage_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_PlayMontage_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_PlayMontage_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_PlayMontage(); \
	friend struct ::Z_Construct_UClass_UK2Node_PlayMontage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_PlayMontage_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_PlayMontage, UK2Node_BaseAsyncTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UK2Node_PlayMontage_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_PlayMontage)


#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_PlayMontage_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_PlayMontage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_PlayMontage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_PlayMontage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_PlayMontage); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_PlayMontage(UK2Node_PlayMontage&&) = delete; \
	UK2Node_PlayMontage(const UK2Node_PlayMontage&) = delete; \
	NO_API virtual ~UK2Node_PlayMontage();


#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_PlayMontage_h_18_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_PlayMontage_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_K2Node_PlayMontage_h_21_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_K2Node_PlayMontage_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_PlayMontage;

// ********** End Class UK2Node_PlayMontage ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_K2Node_PlayMontage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
