// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCompress_RemoveTrivialKeys.h"

#ifdef ENGINE_AnimCompress_RemoveTrivialKeys_generated_h
#error "AnimCompress_RemoveTrivialKeys.generated.h already included, missing '#pragma once' in AnimCompress_RemoveTrivialKeys.h"
#endif
#define ENGINE_AnimCompress_RemoveTrivialKeys_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimCompress_RemoveTrivialKeys ******************************************
struct Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCompress_RemoveTrivialKeys(); \
	friend struct ::Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimCompress_RemoveTrivialKeys, UAnimCompress, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister) \
	DECLARE_SERIALIZER(UAnimCompress_RemoveTrivialKeys)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCompress_RemoveTrivialKeys(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompress_RemoveTrivialKeys) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCompress_RemoveTrivialKeys); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompress_RemoveTrivialKeys); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimCompress_RemoveTrivialKeys(UAnimCompress_RemoveTrivialKeys&&) = delete; \
	UAnimCompress_RemoveTrivialKeys(const UAnimCompress_RemoveTrivialKeys&) = delete; \
	ENGINE_API virtual ~UAnimCompress_RemoveTrivialKeys();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimCompress_RemoveTrivialKeys;

// ********** End Class UAnimCompress_RemoveTrivialKeys ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
