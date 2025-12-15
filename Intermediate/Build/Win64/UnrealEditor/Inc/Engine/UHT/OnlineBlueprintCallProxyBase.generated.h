// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/OnlineBlueprintCallProxyBase.h"

#ifdef ENGINE_OnlineBlueprintCallProxyBase_generated_h
#error "OnlineBlueprintCallProxyBase.generated.h already included, missing '#pragma once' in OnlineBlueprintCallProxyBase.h"
#endif
#define ENGINE_OnlineBlueprintCallProxyBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FEmptyOnlineDelegate **************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_11_DELEGATE \
ENGINE_API void FEmptyOnlineDelegate_DelegateWrapper(const FMulticastScriptDelegate& EmptyOnlineDelegate);


// ********** End Delegate FEmptyOnlineDelegate ****************************************************

// ********** Begin Class UOnlineBlueprintCallProxyBase ********************************************
struct Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineBlueprintCallProxyBase(); \
	friend struct ::Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UOnlineBlueprintCallProxyBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnlineBlueprintCallProxyBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UOnlineBlueprintCallProxyBase_NoRegister) \
	DECLARE_SERIALIZER(UOnlineBlueprintCallProxyBase)


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UOnlineBlueprintCallProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineBlueprintCallProxyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UOnlineBlueprintCallProxyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineBlueprintCallProxyBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnlineBlueprintCallProxyBase(UOnlineBlueprintCallProxyBase&&) = delete; \
	UOnlineBlueprintCallProxyBase(const UOnlineBlueprintCallProxyBase&) = delete; \
	ENGINE_API virtual ~UOnlineBlueprintCallProxyBase();


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnlineBlueprintCallProxyBase;

// ********** End Class UOnlineBlueprintCallProxyBase **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
