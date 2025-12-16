// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidPermissionFunctionLibrary.h"

#ifdef ANDROIDPERMISSION_AndroidPermissionFunctionLibrary_generated_h
#error "AndroidPermissionFunctionLibrary.generated.h already included, missing '#pragma once' in AndroidPermissionFunctionLibrary.h"
#endif
#define ANDROIDPERMISSION_AndroidPermissionFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAndroidPermissionCallbackProxy;

// ********** Begin Class UAndroidPermissionFunctionLibrary ****************************************
#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAcquirePermissions); \
	DECLARE_FUNCTION(execCheckPermission);


struct Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics;
ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidPermissionFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDPERMISSION_API UClass* ::Z_Construct_UClass_UAndroidPermissionFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidPermissionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidPermission"), Z_Construct_UClass_UAndroidPermissionFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAndroidPermissionFunctionLibrary)


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANDROIDPERMISSION_API UAndroidPermissionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidPermissionFunctionLibrary(UAndroidPermissionFunctionLibrary&&) = delete; \
	UAndroidPermissionFunctionLibrary(const UAndroidPermissionFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANDROIDPERMISSION_API, UAndroidPermissionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidPermissionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidPermissionFunctionLibrary) \
	ANDROIDPERMISSION_API virtual ~UAndroidPermissionFunctionLibrary();


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidPermissionFunctionLibrary;

// ********** End Class UAndroidPermissionFunctionLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
