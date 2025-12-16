// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variables/IAnimNextRigVMVariableInterface.h"

#ifdef UAFUNCOOKEDONLY_IAnimNextRigVMVariableInterface_generated_h
#error "IAnimNextRigVMVariableInterface.generated.h already included, missing '#pragma once' in IAnimNextRigVMVariableInterface.h"
#endif
#define UAFUNCOOKEDONLY_IAnimNextRigVMVariableInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAnimNextRigVMVariableInterface **************************************
struct Z_Construct_UClass_UAnimNextRigVMVariableInterface_Statics;
UAFUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextRigVMVariableInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_Variables_IAnimNextRigVMVariableInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFUNCOOKEDONLY_API UAnimNextRigVMVariableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextRigVMVariableInterface(UAnimNextRigVMVariableInterface&&) = delete; \
	UAnimNextRigVMVariableInterface(const UAnimNextRigVMVariableInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFUNCOOKEDONLY_API, UAnimNextRigVMVariableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextRigVMVariableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextRigVMVariableInterface) \
	virtual ~UAnimNextRigVMVariableInterface() = default;


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_Variables_IAnimNextRigVMVariableInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimNextRigVMVariableInterface(); \
	friend struct ::Z_Construct_UClass_UAnimNextRigVMVariableInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UAnimNextRigVMVariableInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextRigVMVariableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UAFUncookedOnly"), Z_Construct_UClass_UAnimNextRigVMVariableInterface_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextRigVMVariableInterface)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_Variables_IAnimNextRigVMVariableInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_Variables_IAnimNextRigVMVariableInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_Variables_IAnimNextRigVMVariableInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_Variables_IAnimNextRigVMVariableInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimNextRigVMVariableInterface() {} \
public: \
	typedef UAnimNextRigVMVariableInterface UClassType; \
	typedef IAnimNextRigVMVariableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_Variables_IAnimNextRigVMVariableInterface_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_Variables_IAnimNextRigVMVariableInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_Variables_IAnimNextRigVMVariableInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextRigVMVariableInterface;

// ********** End Interface UAnimNextRigVMVariableInterface ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_Variables_IAnimNextRigVMVariableInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
