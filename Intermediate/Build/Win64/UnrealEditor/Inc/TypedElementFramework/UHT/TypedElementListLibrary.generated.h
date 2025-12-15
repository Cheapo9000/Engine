// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Framework/TypedElementListLibrary.h"

#ifdef TYPEDELEMENTFRAMEWORK_TypedElementListLibrary_generated_h
#error "TypedElementListLibrary.generated.h already included, missing '#pragma once' in TypedElementListLibrary.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementListLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UInterface;
class UObject;
class UTypedElementRegistry;
struct FScriptTypedElementHandle;
struct FScriptTypedElementListProxy;

// ********** Begin Class UTypedElementListLibrary *************************************************
#define FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execAppendList); \
	DECLARE_FUNCTION(execAppend); \
	DECLARE_FUNCTION(execAdd); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execReserve); \
	DECLARE_FUNCTION(execShrink); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execIsValidIndex); \
	DECLARE_FUNCTION(execGetElementHandles); \
	DECLARE_FUNCTION(execCountElementsOfType); \
	DECLARE_FUNCTION(execHasElementsOfType); \
	DECLARE_FUNCTION(execCountElements); \
	DECLARE_FUNCTION(execHasElements); \
	DECLARE_FUNCTION(execGetElementInterface); \
	DECLARE_FUNCTION(execGetElementHandleAt); \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execCreateScriptElementList);


struct Z_Construct_UClass_UTypedElementListLibrary_Statics;
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementListLibrary_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypedElementListLibrary(); \
	friend struct ::Z_Construct_UClass_UTypedElementListLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTFRAMEWORK_API UClass* ::Z_Construct_UClass_UTypedElementListLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTypedElementListLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), Z_Construct_UClass_UTypedElementListLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTypedElementListLibrary)


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypedElementListLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTypedElementListLibrary(UTypedElementListLibrary&&) = delete; \
	UTypedElementListLibrary(const UTypedElementListLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypedElementListLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementListLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementListLibrary) \
	NO_API virtual ~UTypedElementListLibrary();


#define FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_11_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTypedElementListLibrary;

// ********** End Class UTypedElementListLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
