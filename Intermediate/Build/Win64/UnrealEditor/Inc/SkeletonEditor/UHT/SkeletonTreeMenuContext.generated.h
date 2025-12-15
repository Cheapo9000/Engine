// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletonTreeMenuContext.h"

#ifdef SKELETONEDITOR_SkeletonTreeMenuContext_generated_h
#error "SkeletonTreeMenuContext.generated.h already included, missing '#pragma once' in SkeletonTreeMenuContext.h"
#endif
#define SKELETONEDITOR_SkeletonTreeMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletonTreeMenuContext *************************************************
struct Z_Construct_UClass_USkeletonTreeMenuContext_Statics;
SKELETONEDITOR_API UClass* Z_Construct_UClass_USkeletonTreeMenuContext_NoRegister();

#define FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletonTreeMenuContext(); \
	friend struct ::Z_Construct_UClass_USkeletonTreeMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETONEDITOR_API UClass* ::Z_Construct_UClass_USkeletonTreeMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletonTreeMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletonEditor"), Z_Construct_UClass_USkeletonTreeMenuContext_NoRegister) \
	DECLARE_SERIALIZER(USkeletonTreeMenuContext)


#define FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletonTreeMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletonTreeMenuContext(USkeletonTreeMenuContext&&) = delete; \
	USkeletonTreeMenuContext(const USkeletonTreeMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletonTreeMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonTreeMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletonTreeMenuContext) \
	NO_API virtual ~USkeletonTreeMenuContext();


#define FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h_8_PROLOG
#define FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletonTreeMenuContext;

// ********** End Class USkeletonTreeMenuContext ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
