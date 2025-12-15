// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_AnimGetter.h"

#ifdef ANIMGRAPH_K2Node_AnimGetter_generated_h
#error "K2Node_AnimGetter.generated.h already included, missing '#pragma once' in K2Node_AnimGetter.h"
#endif
#define ANIMGRAPH_K2Node_AnimGetter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNodeSpawnData ****************************************************
struct Z_Construct_UScriptStruct_FNodeSpawnData_Statics;
#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNodeSpawnData_Statics; \
	ANIMGRAPH_API static class UScriptStruct* StaticStruct();


struct FNodeSpawnData;
// ********** End ScriptStruct FNodeSpawnData ******************************************************

// ********** Begin Class UK2Node_AnimGetter *******************************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_68_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_AnimGetter, ANIMGRAPH_API)


struct Z_Construct_UClass_UK2Node_AnimGetter_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_AnimGetter_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_AnimGetter(); \
	friend struct ::Z_Construct_UClass_UK2Node_AnimGetter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_AnimGetter_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_AnimGetter, UK2Node_CallFunction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UK2Node_AnimGetter_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_AnimGetter) \
	FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_68_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UK2Node_AnimGetter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_AnimGetter(UK2Node_AnimGetter&&) = delete; \
	UK2Node_AnimGetter(const UK2Node_AnimGetter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UK2Node_AnimGetter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_AnimGetter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_AnimGetter) \
	ANIMGRAPH_API virtual ~UK2Node_AnimGetter();


#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_65_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_AnimGetter;

// ********** End Class UK2Node_AnimGetter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
