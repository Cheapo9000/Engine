// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scripting/ViewModelScriptingStruct.h"

#ifdef SEQUENCERCORE_ViewModelScriptingStruct_generated_h
#error "ViewModelScriptingStruct.generated.h already included, missing '#pragma once' in ViewModelScriptingStruct.h"
#endif
#define SEQUENCERCORE_ViewModelScriptingStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSequencerViewModelScriptingStruct;

// ********** Begin ScriptStruct FSequencerViewModelScriptingStruct ********************************
struct Z_Construct_UScriptStruct_FSequencerViewModelScriptingStruct_Statics;
#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequencerViewModelScriptingStruct_Statics; \
	SEQUENCERCORE_API static class UScriptStruct* StaticStruct();


struct FSequencerViewModelScriptingStruct;
// ********** End ScriptStruct FSequencerViewModelScriptingStruct **********************************

// ********** Begin Class USequencerViewModelStructExtensions **************************************
#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetLabel);


struct Z_Construct_UClass_USequencerViewModelStructExtensions_Statics;
SEQUENCERCORE_API UClass* Z_Construct_UClass_USequencerViewModelStructExtensions_NoRegister();

#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerViewModelStructExtensions(); \
	friend struct ::Z_Construct_UClass_USequencerViewModelStructExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERCORE_API UClass* ::Z_Construct_UClass_USequencerViewModelStructExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerViewModelStructExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerCore"), Z_Construct_UClass_USequencerViewModelStructExtensions_NoRegister) \
	DECLARE_SERIALIZER(USequencerViewModelStructExtensions)


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerViewModelStructExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerViewModelStructExtensions(USequencerViewModelStructExtensions&&) = delete; \
	USequencerViewModelStructExtensions(const USequencerViewModelStructExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerViewModelStructExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerViewModelStructExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerViewModelStructExtensions) \
	NO_API virtual ~USequencerViewModelStructExtensions();


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_45_PROLOG
#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_50_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerViewModelStructExtensions;

// ********** End Class USequencerViewModelStructExtensions ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
