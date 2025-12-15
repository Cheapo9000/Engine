// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNode.h"

#ifdef ENGINE_SoundNode_generated_h
#error "SoundNode.generated.h already included, missing '#pragma once' in SoundNode.h"
#endif
#define ENGINE_SoundNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundNode ***************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNode, ENGINE_API)


struct Z_Construct_UClass_USoundNode_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundNode_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNode(); \
	friend struct ::Z_Construct_UClass_USoundNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundNode_NoRegister) \
	DECLARE_SERIALIZER(USoundNode) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNode(USoundNode&&) = delete; \
	USoundNode(const USoundNode&) = delete; \
	ENGINE_API virtual ~USoundNode();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_56_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNode;

// ********** End Class USoundNode *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
