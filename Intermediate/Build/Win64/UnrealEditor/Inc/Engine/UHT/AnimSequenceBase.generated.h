// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimSequenceBase.h"

#ifdef ENGINE_AnimSequenceBase_generated_h
#error "AnimSequenceBase.generated.h already included, missing '#pragma once' in AnimSequenceBase.h"
#endif
#define ENGINE_AnimSequenceBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimSequenceBase ********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimSequenceBase, ENGINE_API)


struct Z_Construct_UClass_UAnimSequenceBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequenceBase(); \
	friend struct ::Z_Construct_UClass_UAnimSequenceBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimSequenceBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSequenceBase, UAnimationAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimSequenceBase_NoRegister) \
	DECLARE_SERIALIZER(UAnimSequenceBase) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSequenceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSequenceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSequenceBase(UAnimSequenceBase&&) = delete; \
	UAnimSequenceBase(const UAnimSequenceBase&) = delete; \
	ENGINE_API virtual ~UAnimSequenceBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_35_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSequenceBase;

// ********** End Class UAnimSequenceBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h

// ********** Begin Enum ETypeAdvanceAnim **********************************************************
#define FOREACH_ENUM_ETYPEADVANCEANIM(op) \
	op(ETAA_Default) \
	op(ETAA_Finished) \
	op(ETAA_Looped) 

enum ETypeAdvanceAnim : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETypeAdvanceAnim>();
// ********** End Enum ETypeAdvanceAnim ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
