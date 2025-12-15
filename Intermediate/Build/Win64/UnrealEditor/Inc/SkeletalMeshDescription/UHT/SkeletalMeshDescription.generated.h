// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMeshDescription.h"

#ifdef SKELETALMESHDESCRIPTION_SkeletalMeshDescription_generated_h
#error "SkeletalMeshDescription.generated.h already included, missing '#pragma once' in SkeletalMeshDescription.h"
#endif
#define SKELETALMESHDESCRIPTION_SkeletalMeshDescription_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletalMeshDescription *************************************************
struct Z_Construct_UClass_USkeletalMeshDescription_Statics;
SKELETALMESHDESCRIPTION_API UClass* Z_Construct_UClass_USkeletalMeshDescription_NoRegister();

#define FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshDescription(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshDescription_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETALMESHDESCRIPTION_API UClass* ::Z_Construct_UClass_USkeletalMeshDescription_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshDescription, UMeshDescriptionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshDescription"), Z_Construct_UClass_USkeletalMeshDescription_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshDescription)


#define FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SKELETALMESHDESCRIPTION_API USkeletalMeshDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshDescription(USkeletalMeshDescription&&) = delete; \
	USkeletalMeshDescription(const USkeletalMeshDescription&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKELETALMESHDESCRIPTION_API, USkeletalMeshDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshDescription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshDescription) \
	SKELETALMESHDESCRIPTION_API virtual ~USkeletalMeshDescription();


#define FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h_11_PROLOG
#define FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshDescription;

// ********** End Class USkeletalMeshDescription ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
