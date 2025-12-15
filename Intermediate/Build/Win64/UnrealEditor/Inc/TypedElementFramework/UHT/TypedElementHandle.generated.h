// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Framework/TypedElementHandle.h"

#ifdef TYPEDELEMENTFRAMEWORK_TypedElementHandle_generated_h
#error "TypedElementHandle.generated.h already included, missing '#pragma once' in TypedElementHandle.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScriptTypedElementHandle;

// ********** Begin ScriptStruct FScriptTypedElementHandle *****************************************
struct Z_Construct_UScriptStruct_FScriptTypedElementHandle_Statics;
#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_626_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScriptTypedElementHandle_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FScriptTypedElementHandle;
// ********** End ScriptStruct FScriptTypedElementHandle *******************************************

// ********** Begin Class UTypedElementHandleLibrary ***********************************************
#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_711_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotEqual); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execIsSet);


struct Z_Construct_UClass_UTypedElementHandleLibrary_Statics;
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementHandleLibrary_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_711_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypedElementHandleLibrary(); \
	friend struct ::Z_Construct_UClass_UTypedElementHandleLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTFRAMEWORK_API UClass* ::Z_Construct_UClass_UTypedElementHandleLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTypedElementHandleLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), Z_Construct_UClass_UTypedElementHandleLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTypedElementHandleLibrary)


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_711_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypedElementHandleLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTypedElementHandleLibrary(UTypedElementHandleLibrary&&) = delete; \
	UTypedElementHandleLibrary(const UTypedElementHandleLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypedElementHandleLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementHandleLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementHandleLibrary) \
	NO_API virtual ~UTypedElementHandleLibrary();


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_708_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_711_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_711_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_711_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_711_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTypedElementHandleLibrary;

// ********** End Class UTypedElementHandleLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
