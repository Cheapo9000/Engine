// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCompress.h"

#ifdef ENGINE_AnimCompress_generated_h
#error "AnimCompress.generated.h already included, missing '#pragma once' in AnimCompress.h"
#endif
#define ENGINE_AnimCompress_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimCompress ************************************************************
struct Z_Construct_UClass_UAnimCompress_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_317_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCompress(); \
	friend struct ::Z_Construct_UClass_UAnimCompress_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimCompress_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimCompress, UAnimBoneCompressionCodec, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimCompress_NoRegister) \
	DECLARE_SERIALIZER(UAnimCompress)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_317_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCompress(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompress) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCompress); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompress); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimCompress(UAnimCompress&&) = delete; \
	UAnimCompress(const UAnimCompress&) = delete; \
	ENGINE_API virtual ~UAnimCompress();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_314_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_317_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_317_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_317_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimCompress;

// ********** End Class UAnimCompress **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
