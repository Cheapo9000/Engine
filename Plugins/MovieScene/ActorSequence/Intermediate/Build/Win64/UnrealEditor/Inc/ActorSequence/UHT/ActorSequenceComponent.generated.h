// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorSequenceComponent.h"

#ifdef ACTORSEQUENCE_ActorSequenceComponent_generated_h
#error "ActorSequenceComponent.generated.h already included, missing '#pragma once' in ActorSequenceComponent.h"
#endif
#define ACTORSEQUENCE_ActorSequenceComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorSequenceComponent **************************************************
#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopSequence); \
	DECLARE_FUNCTION(execPauseSequence); \
	DECLARE_FUNCTION(execPlaySequenceReverse); \
	DECLARE_FUNCTION(execPlaySequence);


struct Z_Construct_UClass_UActorSequenceComponent_Statics;
ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequenceComponent_NoRegister();

#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorSequenceComponent(); \
	friend struct ::Z_Construct_UClass_UActorSequenceComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORSEQUENCE_API UClass* ::Z_Construct_UClass_UActorSequenceComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorSequenceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorSequence"), Z_Construct_UClass_UActorSequenceComponent_NoRegister) \
	DECLARE_SERIALIZER(UActorSequenceComponent)


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorSequenceComponent(UActorSequenceComponent&&) = delete; \
	UActorSequenceComponent(const UActorSequenceComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORSEQUENCE_API, UActorSequenceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSequenceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSequenceComponent) \
	ACTORSEQUENCE_API virtual ~UActorSequenceComponent();


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_19_PROLOG
#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorSequenceComponent;

// ********** End Class UActorSequenceComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
