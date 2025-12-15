// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_GetSequenceBinding.h"

#ifdef MOVIESCENETOOLS_K2Node_GetSequenceBinding_generated_h
#error "K2Node_GetSequenceBinding.generated.h already included, missing '#pragma once' in K2Node_GetSequenceBinding.h"
#endif
#define MOVIESCENETOOLS_K2Node_GetSequenceBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_GetSequenceBinding ***********************************************
#define FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_GetSequenceBinding, MOVIESCENETOOLS_API)


struct Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics;
MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UK2Node_GetSequenceBinding_NoRegister();

#define FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_GetSequenceBinding(); \
	friend struct ::Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETOOLS_API UClass* ::Z_Construct_UClass_UK2Node_GetSequenceBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_GetSequenceBinding, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), Z_Construct_UClass_UK2Node_GetSequenceBinding_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_GetSequenceBinding) \
	FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_24_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETOOLS_API UK2Node_GetSequenceBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_GetSequenceBinding(UK2Node_GetSequenceBinding&&) = delete; \
	UK2Node_GetSequenceBinding(const UK2Node_GetSequenceBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETOOLS_API, UK2Node_GetSequenceBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_GetSequenceBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_GetSequenceBinding) \
	MOVIESCENETOOLS_API virtual ~UK2Node_GetSequenceBinding();


#define FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_19_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_GetSequenceBinding;

// ********** End Class UK2Node_GetSequenceBinding *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
