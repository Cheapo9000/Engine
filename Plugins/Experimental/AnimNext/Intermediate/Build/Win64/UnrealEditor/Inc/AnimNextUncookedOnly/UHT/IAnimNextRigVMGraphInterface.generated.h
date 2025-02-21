// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAnimNextRigVMGraphInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTUNCOOKEDONLY_IAnimNextRigVMGraphInterface_generated_h
#error "IAnimNextRigVMGraphInterface.generated.h already included, missing '#pragma once' in IAnimNextRigVMGraphInterface.h"
#endif
#define ANIMNEXTUNCOOKEDONLY_IAnimNextRigVMGraphInterface_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextRigVMGraphInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextRigVMGraphInterface(UAnimNextRigVMGraphInterface&&); \
	UAnimNextRigVMGraphInterface(const UAnimNextRigVMGraphInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextRigVMGraphInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextRigVMGraphInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextRigVMGraphInterface) \
	NO_API virtual ~UAnimNextRigVMGraphInterface();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimNextRigVMGraphInterface(); \
	friend struct Z_Construct_UClass_UAnimNextRigVMGraphInterface_Statics; \
public: \
	DECLARE_CLASS(UAnimNextRigVMGraphInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimNextUncookedOnly"), NO_API) \
	DECLARE_SERIALIZER(UAnimNextRigVMGraphInterface)


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimNextRigVMGraphInterface() {} \
public: \
	typedef UAnimNextRigVMGraphInterface UClassType; \
	typedef IAnimNextRigVMGraphInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<class UAnimNextRigVMGraphInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_IAnimNextRigVMGraphInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
