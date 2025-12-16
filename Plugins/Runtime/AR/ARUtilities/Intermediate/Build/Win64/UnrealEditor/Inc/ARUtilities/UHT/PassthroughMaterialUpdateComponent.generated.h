// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PassthroughMaterialUpdateComponent.h"

#ifdef ARUTILITIES_PassthroughMaterialUpdateComponent_generated_h
#error "PassthroughMaterialUpdateComponent.generated.h already included, missing '#pragma once' in PassthroughMaterialUpdateComponent.h"
#endif
#define ARUTILITIES_PassthroughMaterialUpdateComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FLinearColor;

// ********** Begin Class UPassthroughMaterialUpdateComponent **************************************
#define FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPassthroughDebugColor); \
	DECLARE_FUNCTION(execRemoveAffectedComponent); \
	DECLARE_FUNCTION(execAddAffectedComponent);


struct Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics;
ARUTILITIES_API UClass* Z_Construct_UClass_UPassthroughMaterialUpdateComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPassthroughMaterialUpdateComponent(); \
	friend struct ::Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARUTILITIES_API UClass* ::Z_Construct_UClass_UPassthroughMaterialUpdateComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPassthroughMaterialUpdateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARUtilities"), Z_Construct_UClass_UPassthroughMaterialUpdateComponent_NoRegister) \
	DECLARE_SERIALIZER(UPassthroughMaterialUpdateComponent)


#define FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPassthroughMaterialUpdateComponent(UPassthroughMaterialUpdateComponent&&) = delete; \
	UPassthroughMaterialUpdateComponent(const UPassthroughMaterialUpdateComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPassthroughMaterialUpdateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPassthroughMaterialUpdateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPassthroughMaterialUpdateComponent) \
	NO_API virtual ~UPassthroughMaterialUpdateComponent();


#define FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPassthroughMaterialUpdateComponent;

// ********** End Class UPassthroughMaterialUpdateComponent ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
