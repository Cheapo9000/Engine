// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextRigVMAssetEditorData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimNextAnimationGraphEntry;
class UAnimNextDataInterface;
class UAnimNextDataInterfaceEntry;
class UAnimNextEventGraphEntry;
class UAnimNextRigVMAsset;
class UAnimNextRigVMAssetEntry;
class UAnimNextVariableEntry;
class UObject;
class UScriptStruct;
enum class EPropertyBagContainerType : uint8;
enum class EPropertyBagPropertyType : uint8;
#ifdef ANIMNEXTUNCOOKEDONLY_AnimNextRigVMAssetEditorData_generated_h
#error "AnimNextRigVMAssetEditorData.generated.h already included, missing '#pragma once' in AnimNextRigVMAssetEditorData.h"
#endif
#define ANIMNEXTUNCOOKEDONLY_AnimNextRigVMAssetEditorData_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddDataInterface); \
	DECLARE_FUNCTION(execAddEventGraph); \
	DECLARE_FUNCTION(execAddVariable); \
	DECLARE_FUNCTION(execAddAnimationGraph); \
	DECLARE_FUNCTION(execRemoveAllEntries); \
	DECLARE_FUNCTION(execRemoveEntries); \
	DECLARE_FUNCTION(execRemoveEntry); \
	DECLARE_FUNCTION(execFindEntry);


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextRigVMAssetLibrary(); \
	friend struct Z_Construct_UClass_UAnimNextRigVMAssetLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimNextRigVMAssetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNextUncookedOnly"), NO_API) \
	DECLARE_SERIALIZER(UAnimNextRigVMAssetLibrary)


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextRigVMAssetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextRigVMAssetLibrary(UAnimNextRigVMAssetLibrary&&); \
	UAnimNextRigVMAssetLibrary(const UAnimNextRigVMAssetLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextRigVMAssetLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextRigVMAssetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextRigVMAssetLibrary) \
	NO_API virtual ~UAnimNextRigVMAssetLibrary();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_77_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<class UAnimNextRigVMAssetLibrary>();

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_120_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimNextRigVMAssetEditorData, NO_API)


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextRigVMAssetEditorData(); \
	friend struct Z_Construct_UClass_UAnimNextRigVMAssetEditorData_Statics; \
public: \
	DECLARE_CLASS(UAnimNextRigVMAssetEditorData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimNextUncookedOnly"), NO_API) \
	DECLARE_SERIALIZER(UAnimNextRigVMAssetEditorData) \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_120_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimNextRigVMAssetEditorData*>(this); }


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_120_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextRigVMAssetEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextRigVMAssetEditorData(UAnimNextRigVMAssetEditorData&&); \
	UAnimNextRigVMAssetEditorData(const UAnimNextRigVMAssetEditorData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextRigVMAssetEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextRigVMAssetEditorData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextRigVMAssetEditorData) \
	NO_API virtual ~UAnimNextRigVMAssetEditorData();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_117_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_120_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<class UAnimNextRigVMAssetEditorData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_AnimNextRigVMAssetEditorData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
