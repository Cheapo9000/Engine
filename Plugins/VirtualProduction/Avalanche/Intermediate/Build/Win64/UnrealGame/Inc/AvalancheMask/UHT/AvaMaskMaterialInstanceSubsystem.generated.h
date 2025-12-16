// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/AvaMaskMaterialInstanceSubsystem.h"

#ifdef AVALANCHEMASK_AvaMaskMaterialInstanceSubsystem_generated_h
#error "AvaMaskMaterialInstanceSubsystem.generated.h already included, missing '#pragma once' in AvaMaskMaterialInstanceSubsystem.h"
#endif
#define AVALANCHEMASK_AvaMaskMaterialInstanceSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaMaskMaterialInstanceKey ***************************************
struct Z_Construct_UScriptStruct_FAvaMaskMaterialInstanceKey_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaMaskMaterialInstanceKey_Statics; \
	AVALANCHEMASK_API static class UScriptStruct* StaticStruct();


struct FAvaMaskMaterialInstanceKey;
// ********** End ScriptStruct FAvaMaskMaterialInstanceKey *****************************************

// ********** Begin ScriptStruct FAvaMaskMaterialPermutations **************************************
struct Z_Construct_UScriptStruct_FAvaMaskMaterialPermutations_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaMaskMaterialPermutations_Statics; \
	AVALANCHEMASK_API static class UScriptStruct* StaticStruct();


struct FAvaMaskMaterialPermutations;
// ********** End ScriptStruct FAvaMaskMaterialPermutations ****************************************

// ********** Begin Class UAvaMaskMaterialInstanceProvider *****************************************
struct Z_Construct_UClass_UAvaMaskMaterialInstanceProvider_Statics;
AVALANCHEMASK_API UClass* Z_Construct_UClass_UAvaMaskMaterialInstanceProvider_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMaskMaterialInstanceProvider(); \
	friend struct ::Z_Construct_UClass_UAvaMaskMaterialInstanceProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMASK_API UClass* ::Z_Construct_UClass_UAvaMaskMaterialInstanceProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaMaskMaterialInstanceProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMask"), Z_Construct_UClass_UAvaMaskMaterialInstanceProvider_NoRegister) \
	DECLARE_SERIALIZER(UAvaMaskMaterialInstanceProvider)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaMaskMaterialInstanceProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaMaskMaterialInstanceProvider(UAvaMaskMaterialInstanceProvider&&) = delete; \
	UAvaMaskMaterialInstanceProvider(const UAvaMaskMaterialInstanceProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMaskMaterialInstanceProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMaskMaterialInstanceProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaMaskMaterialInstanceProvider) \
	NO_API virtual ~UAvaMaskMaterialInstanceProvider();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_53_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaMaskMaterialInstanceProvider;

// ********** End Class UAvaMaskMaterialInstanceProvider *******************************************

// ********** Begin Class UAvaMaskMaterialInstanceWorldSubsystem ***********************************
struct Z_Construct_UClass_UAvaMaskMaterialInstanceWorldSubsystem_Statics;
AVALANCHEMASK_API UClass* Z_Construct_UClass_UAvaMaskMaterialInstanceWorldSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMaskMaterialInstanceWorldSubsystem(); \
	friend struct ::Z_Construct_UClass_UAvaMaskMaterialInstanceWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMASK_API UClass* ::Z_Construct_UClass_UAvaMaskMaterialInstanceWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaMaskMaterialInstanceWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMask"), Z_Construct_UClass_UAvaMaskMaterialInstanceWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAvaMaskMaterialInstanceWorldSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaMaskMaterialInstanceWorldSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaMaskMaterialInstanceWorldSubsystem(UAvaMaskMaterialInstanceWorldSubsystem&&) = delete; \
	UAvaMaskMaterialInstanceWorldSubsystem(const UAvaMaskMaterialInstanceWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMaskMaterialInstanceWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMaskMaterialInstanceWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMaskMaterialInstanceWorldSubsystem) \
	NO_API virtual ~UAvaMaskMaterialInstanceWorldSubsystem();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_80_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaMaskMaterialInstanceWorldSubsystem;

// ********** End Class UAvaMaskMaterialInstanceWorldSubsystem *************************************

// ********** Begin Class UAvaMaskMaterialInstanceSubsystem ****************************************
struct Z_Construct_UClass_UAvaMaskMaterialInstanceSubsystem_Statics;
AVALANCHEMASK_API UClass* Z_Construct_UClass_UAvaMaskMaterialInstanceSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMaskMaterialInstanceSubsystem(); \
	friend struct ::Z_Construct_UClass_UAvaMaskMaterialInstanceSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMASK_API UClass* ::Z_Construct_UClass_UAvaMaskMaterialInstanceSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaMaskMaterialInstanceSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMask"), Z_Construct_UClass_UAvaMaskMaterialInstanceSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAvaMaskMaterialInstanceSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaMaskMaterialInstanceSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaMaskMaterialInstanceSubsystem(UAvaMaskMaterialInstanceSubsystem&&) = delete; \
	UAvaMaskMaterialInstanceSubsystem(const UAvaMaskMaterialInstanceSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMaskMaterialInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMaskMaterialInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMaskMaterialInstanceSubsystem) \
	NO_API virtual ~UAvaMaskMaterialInstanceSubsystem();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_102_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaMaskMaterialInstanceSubsystem;

// ********** End Class UAvaMaskMaterialInstanceSubsystem ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Internal_Materials_AvaMaskMaterialInstanceSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
