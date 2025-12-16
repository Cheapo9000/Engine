// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextRigVMAssetEditorData.h"

#ifdef UAFUNCOOKEDONLY_AnimNextRigVMAssetEditorData_generated_h
#error "AnimNextRigVMAssetEditorData.generated.h already included, missing '#pragma once' in AnimNextRigVMAssetEditorData.h"
#endif
#define UAFUNCOOKEDONLY_AnimNextRigVMAssetEditorData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimNextEventGraphEntry;
class UAnimNextRigVMAsset;
class UAnimNextRigVMAssetEntry;
class UAnimNextSharedVariables;
class UAnimNextSharedVariablesEntry;
class UAnimNextVariableEntry;
class UObject;
class URigVMLibraryNode;
class UScriptStruct;
enum class EPropertyBagContainerType : uint8;
enum class EPropertyBagPropertyType : uint8;

// ********** Begin Class UAnimNextRigVMAssetLibrary ***********************************************
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRenameCategory); \
	DECLARE_FUNCTION(execAddCategory); \
	DECLARE_FUNCTION(execAddFunction); \
	DECLARE_FUNCTION(execAddSharedVariablesStruct); \
	DECLARE_FUNCTION(execAddSharedVariables); \
	DECLARE_FUNCTION(execAddEventGraph); \
	DECLARE_FUNCTION(execAddVariable); \
	DECLARE_FUNCTION(execRemoveAllEntries); \
	DECLARE_FUNCTION(execRemoveEntries); \
	DECLARE_FUNCTION(execRemoveEntry); \
	DECLARE_FUNCTION(execFindEntry);


struct Z_Construct_UClass_UAnimNextRigVMAssetLibrary_Statics;
UAFUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextRigVMAssetLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextRigVMAssetLibrary(); \
	friend struct ::Z_Construct_UClass_UAnimNextRigVMAssetLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UAnimNextRigVMAssetLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextRigVMAssetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFUncookedOnly"), Z_Construct_UClass_UAnimNextRigVMAssetLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextRigVMAssetLibrary)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextRigVMAssetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextRigVMAssetLibrary(UAnimNextRigVMAssetLibrary&&) = delete; \
	UAnimNextRigVMAssetLibrary(const UAnimNextRigVMAssetLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextRigVMAssetLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextRigVMAssetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextRigVMAssetLibrary) \
	NO_API virtual ~UAnimNextRigVMAssetLibrary();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_106_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextRigVMAssetLibrary;

// ********** End Class UAnimNextRigVMAssetLibrary *************************************************

// ********** Begin Class UAnimNextRigVMAssetEditorData ********************************************
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_161_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimNextRigVMAssetEditorData, UAFUNCOOKEDONLY_API)


struct Z_Construct_UClass_UAnimNextRigVMAssetEditorData_Statics;
UAFUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextRigVMAssetEditorData_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_161_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextRigVMAssetEditorData(); \
	friend struct ::Z_Construct_UClass_UAnimNextRigVMAssetEditorData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UAnimNextRigVMAssetEditorData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextRigVMAssetEditorData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UAFUncookedOnly"), Z_Construct_UClass_UAnimNextRigVMAssetEditorData_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextRigVMAssetEditorData) \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_161_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimNextRigVMAssetEditorData*>(this); }


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_161_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFUNCOOKEDONLY_API UAnimNextRigVMAssetEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextRigVMAssetEditorData(UAnimNextRigVMAssetEditorData&&) = delete; \
	UAnimNextRigVMAssetEditorData(const UAnimNextRigVMAssetEditorData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFUNCOOKEDONLY_API, UAnimNextRigVMAssetEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextRigVMAssetEditorData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextRigVMAssetEditorData) \
	UAFUNCOOKEDONLY_API virtual ~UAnimNextRigVMAssetEditorData();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_158_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_161_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_161_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextRigVMAssetEditorData;

// ********** End Class UAnimNextRigVMAssetEditorData **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
