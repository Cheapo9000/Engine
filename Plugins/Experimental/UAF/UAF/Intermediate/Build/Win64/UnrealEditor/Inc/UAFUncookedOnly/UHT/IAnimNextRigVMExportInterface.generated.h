// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAnimNextRigVMExportInterface.h"

#ifdef UAFUNCOOKEDONLY_IAnimNextRigVMExportInterface_generated_h
#error "IAnimNextRigVMExportInterface.generated.h already included, missing '#pragma once' in IAnimNextRigVMExportInterface.h"
#endif
#define UAFUNCOOKEDONLY_IAnimNextRigVMExportInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAnimNextRigVMExportInterface ****************************************
struct Z_Construct_UClass_UAnimNextRigVMExportInterface_Statics;
UAFUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextRigVMExportInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFUNCOOKEDONLY_API UAnimNextRigVMExportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextRigVMExportInterface(UAnimNextRigVMExportInterface&&) = delete; \
	UAnimNextRigVMExportInterface(const UAnimNextRigVMExportInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFUNCOOKEDONLY_API, UAnimNextRigVMExportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextRigVMExportInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextRigVMExportInterface) \
	virtual ~UAnimNextRigVMExportInterface() = default;


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimNextRigVMExportInterface(); \
	friend struct ::Z_Construct_UClass_UAnimNextRigVMExportInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UAnimNextRigVMExportInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextRigVMExportInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UAFUncookedOnly"), Z_Construct_UClass_UAnimNextRigVMExportInterface_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextRigVMExportInterface)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimNextRigVMExportInterface() {} \
public: \
	typedef UAnimNextRigVMExportInterface UClassType; \
	typedef IAnimNextRigVMExportInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextRigVMExportInterface;

// ********** End Interface UAnimNextRigVMExportInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_IAnimNextRigVMExportInterface_h

// ********** Begin Enum EAnimNextExportAccessSpecifier ********************************************
#define FOREACH_ENUM_EANIMNEXTEXPORTACCESSSPECIFIER(op) \
	op(EAnimNextExportAccessSpecifier::Private) \
	op(EAnimNextExportAccessSpecifier::Public) 

enum class EAnimNextExportAccessSpecifier : int32;
template<> struct TIsUEnumClass<EAnimNextExportAccessSpecifier> { enum { Value = true }; };
template<> UAFUNCOOKEDONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextExportAccessSpecifier>();
// ********** End Enum EAnimNextExportAccessSpecifier **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
