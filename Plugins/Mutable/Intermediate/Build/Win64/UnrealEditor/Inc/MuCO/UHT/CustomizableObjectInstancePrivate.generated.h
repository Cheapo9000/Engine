// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectInstancePrivate.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectInstancePrivate_generated_h
#error "CustomizableObjectInstancePrivate.generated.h already included, missing '#pragma once' in CustomizableObjectInstancePrivate.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectInstancePrivate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FReferencedPhysicsAssets ******************************************
struct Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FReferencedPhysicsAssets;
// ********** End ScriptStruct FReferencedPhysicsAssets ********************************************

// ********** Begin ScriptStruct FReferencedSkeletons **********************************************
struct Z_Construct_UScriptStruct_FReferencedSkeletons_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReferencedSkeletons_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FReferencedSkeletons;
// ********** End ScriptStruct FReferencedSkeletons ************************************************

// ********** Begin ScriptStruct FCustomizableInstanceComponentData ********************************
struct Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FCustomizableInstanceComponentData;
// ********** End ScriptStruct FCustomizableInstanceComponentData **********************************

// ********** Begin ScriptStruct FAnimInstanceOverridePhysicsAsset *********************************
struct Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_162_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FAnimInstanceOverridePhysicsAsset;
// ********** End ScriptStruct FAnimInstanceOverridePhysicsAsset ***********************************

// ********** Begin ScriptStruct FAnimBpGeneratedPhysicsAssets *************************************
struct Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_174_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FAnimBpGeneratedPhysicsAssets;
// ********** End ScriptStruct FAnimBpGeneratedPhysicsAssets ***************************************

// ********** Begin ScriptStruct FExtensionInstanceData ********************************************
struct Z_Construct_UScriptStruct_FExtensionInstanceData_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_184_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExtensionInstanceData_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FExtensionInstanceData;
// ********** End ScriptStruct FExtensionInstanceData **********************************************

// ********** Begin ScriptStruct FTextureReuseCacheKey *********************************************
struct Z_Construct_UScriptStruct_FTextureReuseCacheKey_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_211_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTextureReuseCacheKey_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FTextureReuseCacheKey;
// ********** End ScriptStruct FTextureReuseCacheKey ***********************************************

// ********** Begin Class UCustomizableInstancePrivate *********************************************
struct Z_Construct_UClass_UCustomizableInstancePrivate_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableInstancePrivate_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableInstancePrivate(); \
	friend struct ::Z_Construct_UClass_UCustomizableInstancePrivate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableInstancePrivate_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableInstancePrivate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableInstancePrivate_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableInstancePrivate)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECT_API UCustomizableInstancePrivate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableInstancePrivate(UCustomizableInstancePrivate&&) = delete; \
	UCustomizableInstancePrivate(const UCustomizableInstancePrivate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UCustomizableInstancePrivate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableInstancePrivate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableInstancePrivate) \
	CUSTOMIZABLEOBJECT_API virtual ~UCustomizableInstancePrivate();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_240_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_244_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h_244_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableInstancePrivate;

// ********** End Class UCustomizableInstancePrivate ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstancePrivate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
