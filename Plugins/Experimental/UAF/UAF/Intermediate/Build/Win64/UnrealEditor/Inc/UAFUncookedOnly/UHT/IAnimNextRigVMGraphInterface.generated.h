// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAnimNextRigVMGraphInterface.h"

#ifdef UAFUNCOOKEDONLY_IAnimNextRigVMGraphInterface_generated_h
#error "IAnimNextRigVMGraphInterface.generated.h already included, missing '#pragma once' in IAnimNextRigVMGraphInterface.h"
#endif
#define UAFUNCOOKEDONLY_IAnimNextRigVMGraphInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAnimNextRigVMGraphInterface *****************************************
struct Z_Construct_UClass_UAnimNextRigVMGraphInterface_Statics;
UAFUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextRigVMGraphInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFUNCOOKEDONLY_API UAnimNextRigVMGraphInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextRigVMGraphInterface(UAnimNextRigVMGraphInterface&&) = delete; \
	UAnimNextRigVMGraphInterface(const UAnimNextRigVMGraphInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFUNCOOKEDONLY_API, UAnimNextRigVMGraphInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextRigVMGraphInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextRigVMGraphInterface) \
	virtual ~UAnimNextRigVMGraphInterface() = default;


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimNextRigVMGraphInterface(); \
	friend struct ::Z_Construct_UClass_UAnimNextRigVMGraphInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UAnimNextRigVMGraphInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextRigVMGraphInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UAFUncookedOnly"), Z_Construct_UClass_UAnimNextRigVMGraphInterface_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextRigVMGraphInterface)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimNextRigVMGraphInterface() {} \
public: \
	typedef UAnimNextRigVMGraphInterface UClassType; \
	typedef IAnimNextRigVMGraphInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextRigVMGraphInterface;

// ********** End Interface UAnimNextRigVMGraphInterface *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
