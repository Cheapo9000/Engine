// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMSubsystem.h"

#ifdef MODELVIEWVIEWMODEL_MVVMSubsystem_generated_h
#error "MVVMSubsystem.generated.h already included, missing '#pragma once' in MVVMSubsystem.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMVVMView;
class UMVVMViewModelCollectionObject;
class UObject;
class UUserWidget;
class UWidget;
class UWidgetTree;
enum class EMVVMConditionOperation : uint8;
struct FMVVMAvailableBinding;
struct FMVVMBindingName;

// ********** Begin Class UMVVMSubsystem ***********************************************************
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGlobalViewModelCollection); \
	DECLARE_FUNCTION(execK2_GetAvailableBinding); \
	DECLARE_FUNCTION(execK2_GetAvailableBindings); \
	DECLARE_FUNCTION(execDoesWidgetTreeContainedWidget); \
	DECLARE_FUNCTION(execK2_GetViewFromUserWidget); \
	DECLARE_FUNCTION(execK2_CompareFloatValues);


struct Z_Construct_UClass_UMVVMSubsystem_Statics;
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMSubsystem(); \
	friend struct ::Z_Construct_UClass_UMVVMSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODEL_API UClass* ::Z_Construct_UClass_UMVVMSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), Z_Construct_UClass_UMVVMSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMVVMSubsystem)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELVIEWVIEWMODEL_API UMVVMSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMSubsystem(UMVVMSubsystem&&) = delete; \
	UMVVMSubsystem(const UMVVMSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELVIEWVIEWMODEL_API, UMVVMSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMVVMSubsystem) \
	MODELVIEWVIEWMODEL_API virtual ~UMVVMSubsystem();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMSubsystem;

// ********** End Class UMVVMSubsystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
