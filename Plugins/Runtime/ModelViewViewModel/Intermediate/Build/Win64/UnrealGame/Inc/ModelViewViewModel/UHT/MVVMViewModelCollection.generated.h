// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/MVVMViewModelCollection.h"

#ifdef MODELVIEWVIEWMODEL_MVVMViewModelCollection_generated_h
#error "MVVMViewModelCollection.generated.h already included, missing '#pragma once' in MVVMViewModelCollection.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMViewModelCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMVVMViewModelBase;
struct FMVVMViewModelContext;

// ********** Begin ScriptStruct FMVVMViewModelCollection ******************************************
struct Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics; \
	MODELVIEWVIEWMODEL_API static class UScriptStruct* StaticStruct();


struct FMVVMViewModelCollection;
// ********** End ScriptStruct FMVVMViewModelCollection ********************************************

// ********** Begin Class UMVVMViewModelCollectionObject *******************************************
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveAllViewModelInstance); \
	DECLARE_FUNCTION(execRemoveViewModel); \
	DECLARE_FUNCTION(execAddViewModelInstance); \
	DECLARE_FUNCTION(execFindFirstViewModelInstanceOfType); \
	DECLARE_FUNCTION(execFindViewModelInstance);


struct Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics;
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMViewModelCollectionObject(); \
	friend struct ::Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODEL_API UClass* ::Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMViewModelCollectionObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister) \
	DECLARE_SERIALIZER(UMVVMViewModelCollectionObject)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELVIEWVIEWMODEL_API UMVVMViewModelCollectionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMViewModelCollectionObject(UMVVMViewModelCollectionObject&&) = delete; \
	UMVVMViewModelCollectionObject(const UMVVMViewModelCollectionObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELVIEWVIEWMODEL_API, UMVVMViewModelCollectionObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMViewModelCollectionObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMVVMViewModelCollectionObject) \
	MODELVIEWVIEWMODEL_API virtual ~UMVVMViewModelCollectionObject();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_43_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMViewModelCollectionObject;

// ********** End Class UMVVMViewModelCollectionObject *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
