// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifier/VCamModifier.h"

#ifdef VCAMCORE_VCamModifier_generated_h
#error "VCamModifier.generated.h already included, missing '#pragma once' in VCamModifier.h"
#endif
#define VCAMCORE_VCamModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineCameraComponent;
class UVCamComponent;
class UVCamModifierContext;
struct FLiveLinkCameraBlueprintData;

// ********** Begin ScriptStruct FVCamModifierConnectionPoint **************************************
struct Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVCamModifierConnectionPoint;
// ********** End ScriptStruct FVCamModifierConnectionPoint ****************************************

// ********** Begin Class UVCamModifier ************************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStackEntryName); \
	DECLARE_FUNCTION(execSetStackEntryName); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetCurrentLiveLinkDataFromOwningComponent); \
	DECLARE_FUNCTION(execGetOwningVCamComponent);


struct Z_Construct_UClass_UVCamModifier_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamModifier(); \
	friend struct ::Z_Construct_UClass_UVCamModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamModifier_NoRegister) \
	DECLARE_SERIALIZER(UVCamModifier)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamModifier(UVCamModifier&&) = delete; \
	UVCamModifier(const UVCamModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamModifier) \
	NO_API virtual ~UVCamModifier();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_27_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamModifier;

// ********** End Class UVCamModifier **************************************************************

// ********** Begin Class UVCamBlueprintModifier ***************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_87_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UVCamBlueprintModifier_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamBlueprintModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamBlueprintModifier(); \
	friend struct ::Z_Construct_UClass_UVCamBlueprintModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamBlueprintModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamBlueprintModifier, UVCamModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamBlueprintModifier_NoRegister) \
	DECLARE_SERIALIZER(UVCamBlueprintModifier)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamBlueprintModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamBlueprintModifier(UVCamBlueprintModifier&&) = delete; \
	UVCamBlueprintModifier(const UVCamBlueprintModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamBlueprintModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamBlueprintModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamBlueprintModifier) \
	NO_API virtual ~UVCamBlueprintModifier();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_84_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_87_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamBlueprintModifier;

// ********** End Class UVCamBlueprintModifier *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
