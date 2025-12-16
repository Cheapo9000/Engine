// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "View/MVVMBindingSubsystem.h"

#ifdef MODELVIEWVIEWMODEL_MVVMBindingSubsystem_generated_h
#error "MVVMBindingSubsystem.generated.h already included, missing '#pragma once' in MVVMBindingSubsystem.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMBindingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMVVMBindingSubsystem ****************************************************
struct Z_Construct_UClass_UMVVMBindingSubsystem_Statics;
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMBindingSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMBindingSubsystem(); \
	friend struct ::Z_Construct_UClass_UMVVMBindingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODEL_API UClass* ::Z_Construct_UClass_UMVVMBindingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMBindingSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), Z_Construct_UClass_UMVVMBindingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMVVMBindingSubsystem)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMVVMBindingSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMBindingSubsystem(UMVVMBindingSubsystem&&) = delete; \
	UMVVMBindingSubsystem(const UMVVMBindingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMVVMBindingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMBindingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMVVMBindingSubsystem) \
	NO_API virtual ~UMVVMBindingSubsystem();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMBindingSubsystem;

// ********** End Class UMVVMBindingSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMBindingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
