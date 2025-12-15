// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/WidgetAnimationHandle.h"

#ifdef UMG_WidgetAnimationHandle_generated_h
#error "WidgetAnimationHandle.generated.h already included, missing '#pragma once' in WidgetAnimationHandle.h"
#endif
#define UMG_WidgetAnimationHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWidgetAnimationHandle;

// ********** Begin ScriptStruct FWidgetAnimationHandle ********************************************
struct Z_Construct_UScriptStruct_FWidgetAnimationHandle_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWidgetAnimationHandle_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FWidgetAnimationHandle;
// ********** End ScriptStruct FWidgetAnimationHandle **********************************************

// ********** Begin Class UWidgetAnimationHandleFunctionLibrary ************************************
#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUserTag); \
	DECLARE_FUNCTION(execGetUserTag);


struct Z_Construct_UClass_UWidgetAnimationHandleFunctionLibrary_Statics;
UMG_API UClass* Z_Construct_UClass_UWidgetAnimationHandleFunctionLibrary_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetAnimationHandleFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UWidgetAnimationHandleFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWidgetAnimationHandleFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetAnimationHandleFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWidgetAnimationHandleFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UWidgetAnimationHandleFunctionLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetAnimationHandleFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetAnimationHandleFunctionLibrary(UWidgetAnimationHandleFunctionLibrary&&) = delete; \
	UWidgetAnimationHandleFunctionLibrary(const UWidgetAnimationHandleFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetAnimationHandleFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetAnimationHandleFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetAnimationHandleFunctionLibrary) \
	UMG_API virtual ~UWidgetAnimationHandleFunctionLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h_79_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetAnimationHandleFunctionLibrary;

// ********** End Class UWidgetAnimationHandleFunctionLibrary **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationHandle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
