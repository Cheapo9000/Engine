// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "View/MVVMViewModelContextResolver.h"

#ifdef MODELVIEWVIEWMODEL_MVVMViewModelContextResolver_generated_h
#error "MVVMViewModelContextResolver.generated.h already included, missing '#pragma once' in MVVMViewModelContextResolver.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMViewModelContextResolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class INotifyFieldValueChanged;
class UClass;
class UMVVMView;
class UObject;
class UUserWidget;

// ********** Begin Class UMVVMViewModelContextResolver ********************************************
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_22_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMVVMViewModelContextResolver_Statics;
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelContextResolver_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMViewModelContextResolver(); \
	friend struct ::Z_Construct_UClass_UMVVMViewModelContextResolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODEL_API UClass* ::Z_Construct_UClass_UMVVMViewModelContextResolver_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMViewModelContextResolver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), Z_Construct_UClass_UMVVMViewModelContextResolver_NoRegister) \
	DECLARE_SERIALIZER(UMVVMViewModelContextResolver)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELVIEWVIEWMODEL_API UMVVMViewModelContextResolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMViewModelContextResolver(UMVVMViewModelContextResolver&&) = delete; \
	UMVVMViewModelContextResolver(const UMVVMViewModelContextResolver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELVIEWVIEWMODEL_API, UMVVMViewModelContextResolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMViewModelContextResolver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMVVMViewModelContextResolver) \
	MODELVIEWVIEWMODEL_API virtual ~UMVVMViewModelContextResolver();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMViewModelContextResolver;

// ********** End Class UMVVMViewModelContextResolver **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
