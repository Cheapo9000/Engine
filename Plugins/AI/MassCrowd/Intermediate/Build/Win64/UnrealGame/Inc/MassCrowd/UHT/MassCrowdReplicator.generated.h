// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCrowdReplicator.h"

#ifdef MASSCROWD_MassCrowdReplicator_generated_h
#error "MassCrowdReplicator.generated.h already included, missing '#pragma once' in MassCrowdReplicator.h"
#endif
#define MASSCROWD_MassCrowdReplicator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassCrowdReplicator *****************************************************
struct Z_Construct_UClass_UMassCrowdReplicator_Statics;
MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdReplicator_NoRegister();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCrowdReplicator(); \
	friend struct ::Z_Construct_UClass_UMassCrowdReplicator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSCROWD_API UClass* ::Z_Construct_UClass_UMassCrowdReplicator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCrowdReplicator, UMassReplicatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassCrowd"), Z_Construct_UClass_UMassCrowdReplicator_NoRegister) \
	DECLARE_SERIALIZER(UMassCrowdReplicator)


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSCROWD_API UMassCrowdReplicator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCrowdReplicator(UMassCrowdReplicator&&) = delete; \
	UMassCrowdReplicator(const UMassCrowdReplicator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSCROWD_API, UMassCrowdReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCrowdReplicator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassCrowdReplicator) \
	MASSCROWD_API virtual ~UMassCrowdReplicator();


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h_11_PROLOG
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCrowdReplicator;

// ********** End Class UMassCrowdReplicator *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
