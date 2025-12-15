// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/Menus/SequencerFilterBarContext.h"

#ifdef SEQUENCER_SequencerFilterBarContext_generated_h
#error "SequencerFilterBarContext.generated.h already included, missing '#pragma once' in SequencerFilterBarContext.h"
#endif
#define SEQUENCER_SequencerFilterBarContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequencerFilterBarContext ***********************************************
struct Z_Construct_UClass_USequencerFilterBarContext_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_USequencerFilterBarContext_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterBarContext_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerFilterBarContext(); \
	friend struct ::Z_Construct_UClass_USequencerFilterBarContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_USequencerFilterBarContext_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerFilterBarContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_USequencerFilterBarContext_NoRegister) \
	DECLARE_SERIALIZER(USequencerFilterBarContext)


#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterBarContext_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerFilterBarContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerFilterBarContext(USequencerFilterBarContext&&) = delete; \
	USequencerFilterBarContext(const USequencerFilterBarContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerFilterBarContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerFilterBarContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerFilterBarContext) \
	NO_API virtual ~USequencerFilterBarContext();


#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterBarContext_h_13_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterBarContext_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterBarContext_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterBarContext_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerFilterBarContext;

// ********** End Class USequencerFilterBarContext *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterBarContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
