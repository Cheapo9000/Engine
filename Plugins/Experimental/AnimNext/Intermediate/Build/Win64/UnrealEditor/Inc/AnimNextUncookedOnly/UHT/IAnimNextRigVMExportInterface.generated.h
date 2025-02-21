// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAnimNextRigVMExportInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTUNCOOKEDONLY_IAnimNextRigVMExportInterface_generated_h
#error "IAnimNextRigVMExportInterface.generated.h already included, missing '#pragma once' in IAnimNextRigVMExportInterface.h"
#endif
#define ANIMNEXTUNCOOKEDONLY_IAnimNextRigVMExportInterface_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextRigVMExportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextRigVMExportInterface(UAnimNextRigVMExportInterface&&); \
	UAnimNextRigVMExportInterface(const UAnimNextRigVMExportInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextRigVMExportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextRigVMExportInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextRigVMExportInterface) \
	NO_API virtual ~UAnimNextRigVMExportInterface();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimNextRigVMExportInterface(); \
	friend struct Z_Construct_UClass_UAnimNextRigVMExportInterface_Statics; \
public: \
	DECLARE_CLASS(UAnimNextRigVMExportInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimNextUncookedOnly"), NO_API) \
	DECLARE_SERIALIZER(UAnimNextRigVMExportInterface)


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimNextRigVMExportInterface() {} \
public: \
	typedef UAnimNextRigVMExportInterface UClassType; \
	typedef IAnimNextRigVMExportInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMExportInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<class UAnimNextRigVMExportInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMExportInterface_h


#define FOREACH_ENUM_EANIMNEXTEXPORTACCESSSPECIFIER(op) \
	op(EAnimNextExportAccessSpecifier::Private) \
	op(EAnimNextExportAccessSpecifier::Public) 

enum class EAnimNextExportAccessSpecifier : int32;
template<> struct TIsUEnumClass<EAnimNextExportAccessSpecifier> { enum { Value = true }; };
template<> ANIMNEXTUNCOOKEDONLY_API UEnum* StaticEnum<EAnimNextExportAccessSpecifier>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
