// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/MicroTransactionBase.h"

#ifdef ENGINE_MicroTransactionBase_generated_h
#error "MicroTransactionBase.generated.h already included, missing '#pragma once' in MicroTransactionBase.h"
#endif
#define ENGINE_MicroTransactionBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPurchaseInfo *****************************************************
struct Z_Construct_UScriptStruct_FPurchaseInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPurchaseInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPurchaseInfo;
// ********** End ScriptStruct FPurchaseInfo *******************************************************

// ********** Begin Class UMicroTransactionBase ****************************************************
struct Z_Construct_UClass_UMicroTransactionBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMicroTransactionBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUMicroTransactionBase(); \
	friend struct ::Z_Construct_UClass_UMicroTransactionBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMicroTransactionBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMicroTransactionBase, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMicroTransactionBase_NoRegister) \
	DECLARE_SERIALIZER(UMicroTransactionBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMicroTransactionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMicroTransactionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMicroTransactionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMicroTransactionBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMicroTransactionBase(UMicroTransactionBase&&) = delete; \
	UMicroTransactionBase(const UMicroTransactionBase&) = delete; \
	NO_API virtual ~UMicroTransactionBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_83_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMicroTransactionBase;

// ********** End Class UMicroTransactionBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h

// ********** Begin Enum EMicroTransactionDelegate *************************************************
#define FOREACH_ENUM_EMICROTRANSACTIONDELEGATE(op) \
	op(MTD_PurchaseQueryComplete) \
	op(MTD_PurchaseComplete) 

enum EMicroTransactionDelegate : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMicroTransactionDelegate>();
// ********** End Enum EMicroTransactionDelegate ***************************************************

// ********** Begin Enum EMicroTransactionResult ***************************************************
#define FOREACH_ENUM_EMICROTRANSACTIONRESULT(op) \
	op(MTR_Succeeded) \
	op(MTR_Failed) \
	op(MTR_Canceled) \
	op(MTR_RestoredFromServer) 

enum EMicroTransactionResult : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMicroTransactionResult>();
// ********** End Enum EMicroTransactionResult *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
