// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMBlueprintLibrary.h"

#ifdef MODELVIEWVIEWMODEL_MVVMBlueprintLibrary_generated_h
#error "MVVMBlueprintLibrary.generated.h already included, missing '#pragma once' in MVVMBlueprintLibrary.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class INotifyFieldValueChanged;
class UUserWidget;

// ********** Begin Class UMVVMBlueprintLibrary ****************************************************
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetViewModelByClass);


struct Z_Construct_UClass_UMVVMBlueprintLibrary_Statics;
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMVVMBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODEL_API UClass* ::Z_Construct_UClass_UMVVMBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), Z_Construct_UClass_UMVVMBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMVVMBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMVVMBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMBlueprintLibrary(UMVVMBlueprintLibrary&&) = delete; \
	UMVVMBlueprintLibrary(const UMVVMBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMVVMBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMVVMBlueprintLibrary) \
	NO_API virtual ~UMVVMBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMBlueprintLibrary;

// ********** End Class UMVVMBlueprintLibrary ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
