// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/Menus/SequencerMenuContext.h"

#ifdef SEQUENCER_SequencerMenuContext_generated_h
#error "SequencerMenuContext.generated.h already included, missing '#pragma once' in SequencerMenuContext.h"
#endif
#define SEQUENCER_SequencerMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequencerMenuContext ****************************************************
struct Z_Construct_UClass_USequencerMenuContext_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_USequencerMenuContext_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerMenuContext_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerMenuContext(); \
	friend struct ::Z_Construct_UClass_USequencerMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_USequencerMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_USequencerMenuContext_NoRegister) \
	DECLARE_SERIALIZER(USequencerMenuContext)


#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerMenuContext_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerMenuContext(USequencerMenuContext&&) = delete; \
	USequencerMenuContext(const USequencerMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerMenuContext) \
	NO_API virtual ~USequencerMenuContext();


#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerMenuContext_h_11_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerMenuContext_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerMenuContext_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerMenuContext_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerMenuContext;

// ********** End Class USequencerMenuContext ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Private_Filters_Menus_SequencerMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
