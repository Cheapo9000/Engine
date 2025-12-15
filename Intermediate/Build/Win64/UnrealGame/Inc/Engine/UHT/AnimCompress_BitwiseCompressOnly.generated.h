// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCompress_BitwiseCompressOnly.h"

#ifdef ENGINE_AnimCompress_BitwiseCompressOnly_generated_h
#error "AnimCompress_BitwiseCompressOnly.generated.h already included, missing '#pragma once' in AnimCompress_BitwiseCompressOnly.h"
#endif
#define ENGINE_AnimCompress_BitwiseCompressOnly_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimCompress_BitwiseCompressOnly ****************************************
struct Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCompress_BitwiseCompressOnly(); \
	friend struct ::Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimCompress_BitwiseCompressOnly, UAnimCompress, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister) \
	DECLARE_SERIALIZER(UAnimCompress_BitwiseCompressOnly)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCompress_BitwiseCompressOnly(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompress_BitwiseCompressOnly) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCompress_BitwiseCompressOnly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompress_BitwiseCompressOnly); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimCompress_BitwiseCompressOnly(UAnimCompress_BitwiseCompressOnly&&) = delete; \
	UAnimCompress_BitwiseCompressOnly(const UAnimCompress_BitwiseCompressOnly&) = delete; \
	ENGINE_API virtual ~UAnimCompress_BitwiseCompressOnly();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimCompress_BitwiseCompressOnly;

// ********** End Class UAnimCompress_BitwiseCompressOnly ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
