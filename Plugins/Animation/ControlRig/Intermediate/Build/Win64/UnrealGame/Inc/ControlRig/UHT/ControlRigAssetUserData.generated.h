// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigAssetUserData.h"

#ifdef CONTROLRIG_ControlRigAssetUserData_generated_h
#error "ControlRigAssetUserData.generated.h already included, missing '#pragma once' in ControlRigAssetUserData.h"
#endif
#define CONTROLRIG_ControlRigAssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRigShapeLibrary;

// ********** Begin Class UControlRigShapeLibraryLink **********************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetShapeLibrary); \
	DECLARE_FUNCTION(execGetShapeLibrary);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigShapeLibraryLink, CONTROLRIG_API)


struct Z_Construct_UClass_UControlRigShapeLibraryLink_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibraryLink_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigShapeLibraryLink(); \
	friend struct ::Z_Construct_UClass_UControlRigShapeLibraryLink_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigShapeLibraryLink_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigShapeLibraryLink, UNameSpacedUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigShapeLibraryLink_NoRegister) \
	DECLARE_SERIALIZER(UControlRigShapeLibraryLink) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_17_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRigShapeLibraryLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigShapeLibraryLink(UControlRigShapeLibraryLink&&) = delete; \
	UControlRigShapeLibraryLink(const UControlRigShapeLibraryLink&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigShapeLibraryLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigShapeLibraryLink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigShapeLibraryLink) \
	CONTROLRIG_API virtual ~UControlRigShapeLibraryLink();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_14_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigShapeLibraryLink;

// ********** End Class UControlRigShapeLibraryLink ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
