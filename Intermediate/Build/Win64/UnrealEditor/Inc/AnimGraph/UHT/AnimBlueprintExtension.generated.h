// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimBlueprintExtension.h"

#ifdef ANIMGRAPH_AnimBlueprintExtension_generated_h
#error "AnimBlueprintExtension.generated.h already included, missing '#pragma once' in AnimBlueprintExtension.h"
#endif
#define ANIMGRAPH_AnimBlueprintExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimBlueprintExtension **************************************************
struct Z_Construct_UClass_UAnimBlueprintExtension_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimBlueprintExtension(); \
	friend struct ::Z_Construct_UClass_UAnimBlueprintExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimBlueprintExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimBlueprintExtension, UBlueprintExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimBlueprintExtension_NoRegister) \
	DECLARE_SERIALIZER(UAnimBlueprintExtension)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimBlueprintExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimBlueprintExtension(UAnimBlueprintExtension&&) = delete; \
	UAnimBlueprintExtension(const UAnimBlueprintExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimBlueprintExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprintExtension); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprintExtension) \
	ANIMGRAPH_API virtual ~UAnimBlueprintExtension();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h_24_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimBlueprintExtension;

// ********** End Class UAnimBlueprintExtension ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
