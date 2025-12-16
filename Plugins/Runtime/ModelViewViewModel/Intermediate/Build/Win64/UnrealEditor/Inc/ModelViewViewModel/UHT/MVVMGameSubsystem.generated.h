// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMGameSubsystem.h"

#ifdef MODELVIEWVIEWMODEL_MVVMGameSubsystem_generated_h
#error "MVVMGameSubsystem.generated.h already included, missing '#pragma once' in MVVMGameSubsystem.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMGameSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMVVMViewModelCollectionObject;

// ********** Begin Class UMVVMGameSubsystem *******************************************************
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetViewModelCollection);


struct Z_Construct_UClass_UMVVMGameSubsystem_Statics;
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMGameSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMGameSubsystem(); \
	friend struct ::Z_Construct_UClass_UMVVMGameSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODEL_API UClass* ::Z_Construct_UClass_UMVVMGameSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMGameSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), Z_Construct_UClass_UMVVMGameSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMVVMGameSubsystem)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELVIEWVIEWMODEL_API UMVVMGameSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMGameSubsystem(UMVVMGameSubsystem&&) = delete; \
	UMVVMGameSubsystem(const UMVVMGameSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELVIEWVIEWMODEL_API, UMVVMGameSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMGameSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMVVMGameSubsystem) \
	MODELVIEWVIEWMODEL_API virtual ~UMVVMGameSubsystem();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMGameSubsystem;

// ********** End Class UMVVMGameSubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
