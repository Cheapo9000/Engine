// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/UIComponentContainer.h"

#ifdef UMG_UIComponentContainer_generated_h
#error "UIComponentContainer.generated.h already included, missing '#pragma once' in UIComponentContainer.h"
#endif
#define UMG_UIComponentContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FUIComponentTarget ************************************************
struct Z_Construct_UScriptStruct_FUIComponentTarget_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIComponentTarget_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FUIComponentTarget;
// ********** End ScriptStruct FUIComponentTarget **************************************************

// ********** Begin Class UUIComponentContainer ****************************************************
struct Z_Construct_UClass_UUIComponentContainer_Statics;
UMG_API UClass* Z_Construct_UClass_UUIComponentContainer_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIComponentContainer(); \
	friend struct ::Z_Construct_UClass_UUIComponentContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UUIComponentContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIComponentContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UUIComponentContainer_NoRegister) \
	DECLARE_SERIALIZER(UUIComponentContainer)


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UUIComponentContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIComponentContainer(UUIComponentContainer&&) = delete; \
	UUIComponentContainer(const UUIComponentContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UUIComponentContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIComponentContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIComponentContainer) \
	UMG_API virtual ~UUIComponentContainer();


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_50_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIComponentContainer;

// ********** End Class UUIComponentContainer ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
