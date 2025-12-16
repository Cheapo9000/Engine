// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigAsset.h"

#ifdef CONTROLRIGDEVELOPER_ControlRigAsset_generated_h
#error "ControlRigAsset.generated.h already included, missing '#pragma once' in ControlRigAsset.h"
#endif
#define CONTROLRIGDEVELOPER_ControlRigAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UControlRigAssetInterface ********************************************
struct Z_Construct_UClass_UControlRigAssetInterface_Statics;
CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigAssetInterface_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigAsset_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigAssetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigAssetInterface(UControlRigAssetInterface&&) = delete; \
	UControlRigAssetInterface(const UControlRigAssetInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigAssetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigAssetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigAssetInterface) \
	virtual ~UControlRigAssetInterface() = default;


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigAsset_h_41_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUControlRigAssetInterface(); \
	friend struct ::Z_Construct_UClass_UControlRigAssetInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGDEVELOPER_API UClass* ::Z_Construct_UClass_UControlRigAssetInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigAssetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ControlRigDeveloper"), Z_Construct_UClass_UControlRigAssetInterface_NoRegister) \
	DECLARE_SERIALIZER(UControlRigAssetInterface)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigAsset_h_41_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigAsset_h_41_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigAsset_h_41_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigAsset_h_41_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IControlRigAssetInterface() {} \
public: \
	typedef UControlRigAssetInterface UClassType; \
	typedef IControlRigAssetInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigAsset_h_38_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigAsset_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigAsset_h_41_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigAssetInterface;

// ********** End Interface UControlRigAssetInterface **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
