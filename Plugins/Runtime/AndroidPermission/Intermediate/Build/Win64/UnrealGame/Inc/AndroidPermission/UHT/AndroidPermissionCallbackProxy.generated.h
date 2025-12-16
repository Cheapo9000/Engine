// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidPermissionCallbackProxy.h"

#ifdef ANDROIDPERMISSION_AndroidPermissionCallbackProxy_generated_h
#error "AndroidPermissionCallbackProxy.generated.h already included, missing '#pragma once' in AndroidPermissionCallbackProxy.h"
#endif
#define ANDROIDPERMISSION_AndroidPermissionCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FAndroidPermissionDynamicDelegate *************************************
#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_9_DELEGATE \
ANDROIDPERMISSION_API void FAndroidPermissionDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& AndroidPermissionDynamicDelegate, TArray<FString> const& Permissions, TArray<bool> const& GrantResults);


// ********** End Delegate FAndroidPermissionDynamicDelegate ***************************************

// ********** Begin Class UAndroidPermissionCallbackProxy ******************************************
struct Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics;
ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidPermissionCallbackProxy(); \
	friend struct ::Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDPERMISSION_API UClass* ::Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidPermissionCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidPermission"), Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UAndroidPermissionCallbackProxy)


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANDROIDPERMISSION_API UAndroidPermissionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidPermissionCallbackProxy(UAndroidPermissionCallbackProxy&&) = delete; \
	UAndroidPermissionCallbackProxy(const UAndroidPermissionCallbackProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANDROIDPERMISSION_API, UAndroidPermissionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidPermissionCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidPermissionCallbackProxy) \
	ANDROIDPERMISSION_API virtual ~UAndroidPermissionCallbackProxy();


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidPermissionCallbackProxy;

// ********** End Class UAndroidPermissionCallbackProxy ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
