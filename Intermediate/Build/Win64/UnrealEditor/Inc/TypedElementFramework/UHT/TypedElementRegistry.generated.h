// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Framework/TypedElementRegistry.h"

#ifdef TYPEDELEMENTFRAMEWORK_TypedElementRegistry_generated_h
#error "TypedElementRegistry.generated.h already included, missing '#pragma once' in TypedElementRegistry.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UInterface;
class UObject;
class UTypedElementRegistry;
struct FScriptTypedElementHandle;

// ********** Begin Class UTypedElementRegistry ****************************************************
#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetElementInterface); \
	DECLARE_FUNCTION(execGetInstance);


struct Z_Construct_UClass_UTypedElementRegistry_Statics;
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementRegistry_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypedElementRegistry(); \
	friend struct ::Z_Construct_UClass_UTypedElementRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTFRAMEWORK_API UClass* ::Z_Construct_UClass_UTypedElementRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UTypedElementRegistry, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), Z_Construct_UClass_UTypedElementRegistry_NoRegister) \
	DECLARE_SERIALIZER(UTypedElementRegistry)


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTypedElementRegistry(UTypedElementRegistry&&) = delete; \
	UTypedElementRegistry(const UTypedElementRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTFRAMEWORK_API, UTypedElementRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementRegistry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTypedElementRegistry) \
	TYPEDELEMENTFRAMEWORK_API virtual ~UTypedElementRegistry();


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_53_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTypedElementRegistry;

// ********** End Class UTypedElementRegistry ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
