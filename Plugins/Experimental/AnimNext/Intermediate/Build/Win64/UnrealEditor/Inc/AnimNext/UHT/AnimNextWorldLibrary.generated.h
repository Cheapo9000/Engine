// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Param/AnimNextWorldLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
#ifdef ANIMNEXT_AnimNextWorldLibrary_generated_h
#error "AnimNextWorldLibrary.generated.h already included, missing '#pragma once' in AnimNextWorldLibrary.h"
#endif
#define ANIMNEXT_AnimNextWorldLibrary_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextWorldLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDeltaSeconds); \
	DECLARE_FUNCTION(execGetRealTimeSeconds); \
	DECLARE_FUNCTION(execGetUnpausedTimeSeconds); \
	DECLARE_FUNCTION(execGetTimeSeconds);


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextWorldLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextWorldLibrary(); \
	friend struct Z_Construct_UClass_UAnimNextWorldLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimNextWorldLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNext"), NO_API) \
	DECLARE_SERIALIZER(UAnimNextWorldLibrary)


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextWorldLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextWorldLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextWorldLibrary(UAnimNextWorldLibrary&&); \
	UAnimNextWorldLibrary(const UAnimNextWorldLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextWorldLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextWorldLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextWorldLibrary) \
	NO_API virtual ~UAnimNextWorldLibrary();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextWorldLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextWorldLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextWorldLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextWorldLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextWorldLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXT_API UClass* StaticClass<class UAnimNextWorldLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Param_AnimNextWorldLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
