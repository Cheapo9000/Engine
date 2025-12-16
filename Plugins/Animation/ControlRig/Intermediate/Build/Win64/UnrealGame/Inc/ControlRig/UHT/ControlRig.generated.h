// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRig.h"

#ifdef CONTROLRIG_ControlRig_generated_h
#error "ControlRig.generated.h already included, missing '#pragma once' in ControlRig.h"
#endif
#define CONTROLRIG_ControlRig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UControlRig;
class UObject;
class URigHierarchy;
class UTransformableControlHandle;
struct FRigControlElement;

// ********** Begin SparseDelegate FOnControlSelectedBP ********************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_82_DELEGATE \
static CONTROLRIG_API void FOnControlSelectedBP_DelegateWrapper(const FMulticastScriptDelegate& OnControlSelectedBP, UControlRig* Rig, FRigControlElement const& Control, bool bSelected);


// ********** End SparseDelegate FOnControlSelectedBP **********************************************

// ********** Begin Class UControlRig **************************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_62_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetInteractionRigClass); \
	DECLARE_FUNCTION(execGetInteractionRigClass); \
	DECLARE_FUNCTION(execSetInteractionRig); \
	DECLARE_FUNCTION(execGetInteractionRig); \
	DECLARE_FUNCTION(execIsControlSelected); \
	DECLARE_FUNCTION(execCurrentControlSelection); \
	DECLARE_FUNCTION(execClearControlSelection); \
	DECLARE_FUNCTION(execSelectControl); \
	DECLARE_FUNCTION(execSupportsBackwardsSolve); \
	DECLARE_FUNCTION(execRequestConstruction); \
	DECLARE_FUNCTION(execGetHierarchy); \
	DECLARE_FUNCTION(execGetHostingActor); \
	DECLARE_FUNCTION(execCreateTransformableControlHandle); \
	DECLARE_FUNCTION(execFindControlRigs);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_62_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRig, CONTROLRIG_API)


struct Z_Construct_UClass_UControlRig_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUControlRig(); \
	friend struct ::Z_Construct_UClass_UControlRig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRig_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRig, URigVMHost, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRig_NoRegister) \
	DECLARE_SERIALIZER(UControlRig) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_62_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UControlRig*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRig); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRig(UControlRig&&) = delete; \
	UControlRig(const UControlRig&) = delete; \
	CONTROLRIG_API virtual ~UControlRig();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_59_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_62_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_62_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRig;

// ********** End Class UControlRig ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
