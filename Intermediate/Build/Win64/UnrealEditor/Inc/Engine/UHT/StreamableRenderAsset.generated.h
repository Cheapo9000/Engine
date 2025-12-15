// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/StreamableRenderAsset.h"

#ifdef ENGINE_StreamableRenderAsset_generated_h
#error "StreamableRenderAsset.generated.h already included, missing '#pragma once' in StreamableRenderAsset.h"
#endif
#define ENGINE_StreamableRenderAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStreamableRenderAsset ***************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_38_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetForceMipLevelsToBeResident);


struct Z_Construct_UClass_UStreamableRenderAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUStreamableRenderAsset(); \
	friend struct ::Z_Construct_UClass_UStreamableRenderAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStreamableRenderAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UStreamableRenderAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStreamableRenderAsset_NoRegister) \
	DECLARE_SERIALIZER(UStreamableRenderAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStreamableRenderAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamableRenderAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStreamableRenderAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamableRenderAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStreamableRenderAsset(UStreamableRenderAsset&&) = delete; \
	UStreamableRenderAsset(const UStreamableRenderAsset&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_35_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_38_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_38_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStreamableRenderAsset;

// ********** End Class UStreamableRenderAsset *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
