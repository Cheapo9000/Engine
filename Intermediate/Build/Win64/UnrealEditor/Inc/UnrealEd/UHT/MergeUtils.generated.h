// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MergeUtils.h"

#ifdef UNREALED_MergeUtils_generated_h
#error "MergeUtils.generated.h already included, missing '#pragma once' in MergeUtils.h"
#endif
#define UNREALED_MergeUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUndoableResolveHandler **************************************************
struct Z_Construct_UClass_UUndoableResolveHandler_Statics;
UNREALED_API UClass* Z_Construct_UClass_UUndoableResolveHandler_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_MergeUtils_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUndoableResolveHandler(); \
	friend struct ::Z_Construct_UClass_UUndoableResolveHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UUndoableResolveHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UUndoableResolveHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UUndoableResolveHandler_NoRegister) \
	DECLARE_SERIALIZER(UUndoableResolveHandler)


#define FID_Engine_Source_Editor_UnrealEd_Public_MergeUtils_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUndoableResolveHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUndoableResolveHandler(UUndoableResolveHandler&&) = delete; \
	UUndoableResolveHandler(const UUndoableResolveHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUndoableResolveHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUndoableResolveHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUndoableResolveHandler) \
	NO_API virtual ~UUndoableResolveHandler();


#define FID_Engine_Source_Editor_UnrealEd_Public_MergeUtils_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_MergeUtils_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_MergeUtils_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_MergeUtils_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUndoableResolveHandler;

// ********** End Class UUndoableResolveHandler ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_MergeUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
