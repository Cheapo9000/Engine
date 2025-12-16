// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectInstanceAssetUserData.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectInstanceAssetUserData_generated_h
#error "CustomizableObjectInstanceAssetUserData.generated.h already included, missing '#pragma once' in CustomizableObjectInstanceAssetUserData.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectInstanceAssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;

// ********** Begin ScriptStruct FCustomizableObjectAnimationSlot **********************************
struct Z_Construct_UScriptStruct_FCustomizableObjectAnimationSlot_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceAssetUserData_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectAnimationSlot_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectAnimationSlot;
// ********** End ScriptStruct FCustomizableObjectAnimationSlot ************************************

// ********** Begin Class UCustomizableObjectInstanceUserData **************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceAssetUserData_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAnimationGameplayTags); \
	DECLARE_FUNCTION(execGetAnimationGameplayTags);


struct Z_Construct_UClass_UCustomizableObjectInstanceUserData_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstanceUserData_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceAssetUserData_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectInstanceUserData(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectInstanceUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableObjectInstanceUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectInstanceUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableObjectInstanceUserData_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectInstanceUserData)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceAssetUserData_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECT_API UCustomizableObjectInstanceUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectInstanceUserData(UCustomizableObjectInstanceUserData&&) = delete; \
	UCustomizableObjectInstanceUserData(const UCustomizableObjectInstanceUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UCustomizableObjectInstanceUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectInstanceUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectInstanceUserData) \
	CUSTOMIZABLEOBJECT_API virtual ~UCustomizableObjectInstanceUserData();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceAssetUserData_h_27_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceAssetUserData_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceAssetUserData_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceAssetUserData_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceAssetUserData_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectInstanceUserData;

// ********** End Class UCustomizableObjectInstanceUserData ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceAssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
