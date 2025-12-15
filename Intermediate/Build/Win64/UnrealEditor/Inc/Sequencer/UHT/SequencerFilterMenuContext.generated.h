// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/Menus/SequencerFilterMenuContext.h"

#ifdef SEQUENCER_SequencerFilterMenuContext_generated_h
#error "SequencerFilterMenuContext.generated.h already included, missing '#pragma once' in SequencerFilterMenuContext.h"
#endif
#define SEQUENCER_SequencerFilterMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequencerFilterMenuContext **********************************************
struct Z_Construct_UClass_USequencerFilterMenuContext_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_USequencerFilterMenuContext_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterMenuContext_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerFilterMenuContext(); \
	friend struct ::Z_Construct_UClass_USequencerFilterMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_USequencerFilterMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerFilterMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_USequencerFilterMenuContext_NoRegister) \
	DECLARE_SERIALIZER(USequencerFilterMenuContext)


#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterMenuContext_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerFilterMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerFilterMenuContext(USequencerFilterMenuContext&&) = delete; \
	USequencerFilterMenuContext(const USequencerFilterMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerFilterMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerFilterMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerFilterMenuContext) \
	NO_API virtual ~USequencerFilterMenuContext();


#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterMenuContext_h_10_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterMenuContext_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterMenuContext_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterMenuContext_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerFilterMenuContext;

// ********** End Class USequencerFilterMenuContext ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerFilterMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
