// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorTransformer.h"

#ifdef VIEWPORTINTERACTION_ActorTransformer_generated_h
#error "ActorTransformer.generated.h already included, missing '#pragma once' in ActorTransformer.h"
#endif
#define VIEWPORTINTERACTION_ActorTransformer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorTransformer ********************************************************
struct Z_Construct_UClass_UActorTransformer_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UActorTransformer_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorTransformer(); \
	friend struct ::Z_Construct_UClass_UActorTransformer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UActorTransformer_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorTransformer, UViewportTransformer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UActorTransformer_NoRegister) \
	DECLARE_SERIALIZER(UActorTransformer)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VIEWPORTINTERACTION_API UActorTransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorTransformer(UActorTransformer&&) = delete; \
	UActorTransformer(const UActorTransformer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UActorTransformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorTransformer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorTransformer) \
	VIEWPORTINTERACTION_API virtual ~UActorTransformer();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_13_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorTransformer;

// ********** End Class UActorTransformer **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
