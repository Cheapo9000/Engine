// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TexAligner/TexAligner.h"

#ifdef UNREALED_TexAligner_generated_h
#error "TexAligner.generated.h already included, missing '#pragma once' in TexAligner.h"
#endif
#define UNREALED_TexAligner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTexAligner **************************************************************
struct Z_Construct_UClass_UTexAligner_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTexAligner_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUTexAligner(); \
	friend struct ::Z_Construct_UClass_UTexAligner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTexAligner_NoRegister(); \
public: \
	DECLARE_CLASS2(UTexAligner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTexAligner_NoRegister) \
	DECLARE_SERIALIZER(UTexAligner)


#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTexAligner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexAligner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTexAligner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexAligner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTexAligner(UTexAligner&&) = delete; \
	UTexAligner(const UTexAligner&) = delete; \
	NO_API virtual ~UTexAligner();


#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_43_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTexAligner;

// ********** End Class UTexAligner ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h

// ********** Begin Enum ETexAlign *****************************************************************
#define FOREACH_ENUM_ETEXALIGN(op) \
	op(TEXALIGN_None) \
	op(TEXALIGN_Default) \
	op(TEXALIGN_Box) \
	op(TEXALIGN_Planar) \
	op(TEXALIGN_Fit) \
	op(TEXALIGN_PlanarAuto) \
	op(TEXALIGN_PlanarWall) \
	op(TEXALIGN_PlanarFloor) 

enum ETexAlign : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ETexAlign>();
// ********** End Enum ETexAlign *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
