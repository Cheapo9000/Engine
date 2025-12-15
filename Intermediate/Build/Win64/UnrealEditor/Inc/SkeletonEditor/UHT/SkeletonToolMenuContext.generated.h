// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletonToolMenuContext.h"

#ifdef SKELETONEDITOR_SkeletonToolMenuContext_generated_h
#error "SkeletonToolMenuContext.generated.h already included, missing '#pragma once' in SkeletonToolMenuContext.h"
#endif
#define SKELETONEDITOR_SkeletonToolMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletonToolMenuContext *************************************************
struct Z_Construct_UClass_USkeletonToolMenuContext_Statics;
SKELETONEDITOR_API UClass* Z_Construct_UClass_USkeletonToolMenuContext_NoRegister();

#define FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletonToolMenuContext(); \
	friend struct ::Z_Construct_UClass_USkeletonToolMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETONEDITOR_API UClass* ::Z_Construct_UClass_USkeletonToolMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletonToolMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletonEditor"), Z_Construct_UClass_USkeletonToolMenuContext_NoRegister) \
	DECLARE_SERIALIZER(USkeletonToolMenuContext)


#define FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SKELETONEDITOR_API USkeletonToolMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletonToolMenuContext(USkeletonToolMenuContext&&) = delete; \
	USkeletonToolMenuContext(const USkeletonToolMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKELETONEDITOR_API, USkeletonToolMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonToolMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletonToolMenuContext) \
	SKELETONEDITOR_API virtual ~USkeletonToolMenuContext();


#define FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h_11_PROLOG
#define FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletonToolMenuContext;

// ********** End Class USkeletonToolMenuContext ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
