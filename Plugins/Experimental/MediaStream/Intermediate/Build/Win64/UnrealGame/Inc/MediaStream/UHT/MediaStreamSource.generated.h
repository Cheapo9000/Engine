// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaStreamSource.h"

#ifdef MEDIASTREAM_MediaStreamSource_generated_h
#error "MediaStreamSource.generated.h already included, missing '#pragma once' in MediaStreamSource.h"
#endif
#define MEDIASTREAM_MediaStreamSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMediaStreamSource ************************************************
struct Z_Construct_UScriptStruct_FMediaStreamSource_Statics;
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSource_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaStreamSource_Statics; \
	MEDIASTREAM_API static class UScriptStruct* StaticStruct();


struct FMediaStreamSource;
// ********** End ScriptStruct FMediaStreamSource **************************************************

// ********** Begin Class UMediaStreamSourceBlueprintFunctionLibrary *******************************
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSource_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSchemeTypes);


struct Z_Construct_UClass_UMediaStreamSourceBlueprintFunctionLibrary_Statics;
MEDIASTREAM_API UClass* Z_Construct_UClass_UMediaStreamSourceBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSource_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaStreamSourceBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMediaStreamSourceBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIASTREAM_API UClass* ::Z_Construct_UClass_UMediaStreamSourceBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaStreamSourceBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaStream"), Z_Construct_UClass_UMediaStreamSourceBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMediaStreamSourceBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSource_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaStreamSourceBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaStreamSourceBlueprintFunctionLibrary(UMediaStreamSourceBlueprintFunctionLibrary&&) = delete; \
	UMediaStreamSourceBlueprintFunctionLibrary(const UMediaStreamSourceBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaStreamSourceBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaStreamSourceBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaStreamSourceBlueprintFunctionLibrary) \
	NO_API virtual ~UMediaStreamSourceBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSource_h_53_PROLOG
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSource_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSource_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSource_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSource_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaStreamSourceBlueprintFunctionLibrary;

// ********** End Class UMediaStreamSourceBlueprintFunctionLibrary *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
