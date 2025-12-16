// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMViewModelBase.h"

#ifdef MODELVIEWVIEWMODEL_MVVMViewModelBase_generated_h
#error "MVVMViewModelBase.generated.h already included, missing '#pragma once' in MVVMViewModelBase.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMViewModelBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFieldNotificationId;

// ********** Begin Class UMVVMViewModelBase *******************************************************
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_BroadcastFieldValueChanged); \
	DECLARE_FUNCTION(execK2_RemoveFieldValueChangedDelegate); \
	DECLARE_FUNCTION(execK2_AddFieldValueChangedDelegate);


struct Z_Construct_UClass_UMVVMViewModelBase_Statics;
	struct Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics; \
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMViewModelBase(); \
	friend struct ::Z_Construct_UClass_UMVVMViewModelBase_Statics; \
	friend struct ::Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODEL_API UClass* ::Z_Construct_UClass_UMVVMViewModelBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMViewModelBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), Z_Construct_UClass_UMVVMViewModelBase_NoRegister) \
	DECLARE_SERIALIZER(UMVVMViewModelBase) \
	virtual UObject* _getUObject() const override { return const_cast<UMVVMViewModelBase*>(this); }


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELVIEWVIEWMODEL_API UMVVMViewModelBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMViewModelBase(UMVVMViewModelBase&&) = delete; \
	UMVVMViewModelBase(const UMVVMViewModelBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELVIEWVIEWMODEL_API, UMVVMViewModelBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMViewModelBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMVVMViewModelBase) \
	MODELVIEWVIEWMODEL_API virtual ~UMVVMViewModelBase();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_41_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMViewModelBase;

// ********** End Class UMVVMViewModelBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
