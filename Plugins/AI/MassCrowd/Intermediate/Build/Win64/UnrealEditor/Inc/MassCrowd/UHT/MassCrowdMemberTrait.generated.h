// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCrowdMemberTrait.h"

#ifdef MASSCROWD_MassCrowdMemberTrait_generated_h
#error "MassCrowdMemberTrait.generated.h already included, missing '#pragma once' in MassCrowdMemberTrait.h"
#endif
#define MASSCROWD_MassCrowdMemberTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassCrowdMemberTrait ****************************************************
struct Z_Construct_UClass_UMassCrowdMemberTrait_Statics;
MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdMemberTrait_NoRegister();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCrowdMemberTrait(); \
	friend struct ::Z_Construct_UClass_UMassCrowdMemberTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSCROWD_API UClass* ::Z_Construct_UClass_UMassCrowdMemberTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCrowdMemberTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassCrowd"), Z_Construct_UClass_UMassCrowdMemberTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassCrowdMemberTrait)


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSCROWD_API UMassCrowdMemberTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCrowdMemberTrait(UMassCrowdMemberTrait&&) = delete; \
	UMassCrowdMemberTrait(const UMassCrowdMemberTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSCROWD_API, UMassCrowdMemberTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCrowdMemberTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassCrowdMemberTrait) \
	MASSCROWD_API virtual ~UMassCrowdMemberTrait();


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h_13_PROLOG
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCrowdMemberTrait;

// ********** End Class UMassCrowdMemberTrait ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
