// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/SequencerScriptingRangeExtensions.h"

#ifdef SEQUENCERSCRIPTING_SequencerScriptingRangeExtensions_generated_h
#error "SequencerScriptingRangeExtensions.generated.h already included, missing '#pragma once' in SequencerScriptingRangeExtensions.h"
#endif
#define SEQUENCERSCRIPTING_SequencerScriptingRangeExtensions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSequencerScriptingRange;

// ********** Begin Class USequencerScriptingRangeExtensions ***************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEndFrame); \
	DECLARE_FUNCTION(execSetStartFrame); \
	DECLARE_FUNCTION(execGetEndFrame); \
	DECLARE_FUNCTION(execGetStartFrame); \
	DECLARE_FUNCTION(execSetEndSeconds); \
	DECLARE_FUNCTION(execSetStartSeconds); \
	DECLARE_FUNCTION(execGetEndSeconds); \
	DECLARE_FUNCTION(execGetStartSeconds); \
	DECLARE_FUNCTION(execRemoveEnd); \
	DECLARE_FUNCTION(execRemoveStart); \
	DECLARE_FUNCTION(execHasEnd); \
	DECLARE_FUNCTION(execHasStart);


struct Z_Construct_UClass_USequencerScriptingRangeExtensions_Statics;
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_USequencerScriptingRangeExtensions_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerScriptingRangeExtensions(); \
	friend struct ::Z_Construct_UClass_USequencerScriptingRangeExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTING_API UClass* ::Z_Construct_UClass_USequencerScriptingRangeExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerScriptingRangeExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), Z_Construct_UClass_USequencerScriptingRangeExtensions_NoRegister) \
	DECLARE_SERIALIZER(USequencerScriptingRangeExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerScriptingRangeExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerScriptingRangeExtensions(USequencerScriptingRangeExtensions&&) = delete; \
	USequencerScriptingRangeExtensions(const USequencerScriptingRangeExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerScriptingRangeExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerScriptingRangeExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerScriptingRangeExtensions) \
	NO_API virtual ~USequencerScriptingRangeExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_16_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerScriptingRangeExtensions;

// ********** End Class USequencerScriptingRangeExtensions *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
