// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCompress_LeastDestructive.h"

#ifdef ENGINE_AnimCompress_LeastDestructive_generated_h
#error "AnimCompress_LeastDestructive.generated.h already included, missing '#pragma once' in AnimCompress_LeastDestructive.h"
#endif
#define ENGINE_AnimCompress_LeastDestructive_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimCompress_LeastDestructive *******************************************
struct Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCompress_LeastDestructive(); \
	friend struct ::Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimCompress_LeastDestructive, UAnimCompress_BitwiseCompressOnly, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister) \
	DECLARE_SERIALIZER(UAnimCompress_LeastDestructive)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimCompress_LeastDestructive(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompress_LeastDestructive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimCompress_LeastDestructive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompress_LeastDestructive); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimCompress_LeastDestructive(UAnimCompress_LeastDestructive&&) = delete; \
	UAnimCompress_LeastDestructive(const UAnimCompress_LeastDestructive&) = delete; \
	NO_API virtual ~UAnimCompress_LeastDestructive();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimCompress_LeastDestructive;

// ********** End Class UAnimCompress_LeastDestructive *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
