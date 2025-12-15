// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/BlueprintAsyncActionBase.h"

#ifdef ENGINE_BlueprintAsyncActionBase_generated_h
#error "BlueprintAsyncActionBase.generated.h already included, missing '#pragma once' in BlueprintAsyncActionBase.h"
#endif
#define ENGINE_BlueprintAsyncActionBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintAsyncActionBase ************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActivate);


struct Z_Construct_UClass_UBlueprintAsyncActionBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintAsyncActionBase(); \
	friend struct ::Z_Construct_UClass_UBlueprintAsyncActionBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlueprintAsyncActionBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintAsyncActionBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBlueprintAsyncActionBase_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintAsyncActionBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintAsyncActionBase(UBlueprintAsyncActionBase&&) = delete; \
	UBlueprintAsyncActionBase(const UBlueprintAsyncActionBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintAsyncActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintAsyncActionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintAsyncActionBase) \
	ENGINE_API virtual ~UBlueprintAsyncActionBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintAsyncActionBase;

// ********** End Class UBlueprintAsyncActionBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
