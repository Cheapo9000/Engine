// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MirrorAnimLibrary.h"

#ifdef ANIMGRAPHRUNTIME_MirrorAnimLibrary_generated_h
#error "MirrorAnimLibrary.generated.h already included, missing '#pragma once' in MirrorAnimLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_MirrorAnimLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMirrorDataTable;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FMirrorAnimNodeReference;

// ********** Begin ScriptStruct FMirrorAnimNodeReference ******************************************
struct Z_Construct_UScriptStruct_FMirrorAnimNodeReference_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMirrorAnimNodeReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FMirrorAnimNodeReference;
// ********** End ScriptStruct FMirrorAnimNodeReference ********************************************

// ********** Begin Class UMirrorAnimLibrary *******************************************************
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMirrorTransitionBlendTime); \
	DECLARE_FUNCTION(execGetMirrorDataTable); \
	DECLARE_FUNCTION(execGetMirror); \
	DECLARE_FUNCTION(execSetMirrorTransitionBlendTime); \
	DECLARE_FUNCTION(execSetMirror); \
	DECLARE_FUNCTION(execConvertToMirrorNodePure); \
	DECLARE_FUNCTION(execConvertToMirrorNode);


struct Z_Construct_UClass_UMirrorAnimLibrary_Statics;
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UMirrorAnimLibrary_NoRegister();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMirrorAnimLibrary(); \
	friend struct ::Z_Construct_UClass_UMirrorAnimLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPHRUNTIME_API UClass* ::Z_Construct_UClass_UMirrorAnimLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMirrorAnimLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), Z_Construct_UClass_UMirrorAnimLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMirrorAnimLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMirrorAnimLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMirrorAnimLibrary(UMirrorAnimLibrary&&) = delete; \
	UMirrorAnimLibrary(const UMirrorAnimLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMirrorAnimLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMirrorAnimLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMirrorAnimLibrary) \
	NO_API virtual ~UMirrorAnimLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_21_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMirrorAnimLibrary;

// ********** End Class UMirrorAnimLibrary *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_MirrorAnimLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
