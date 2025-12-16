// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableSkeletalComponent.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableSkeletalComponent_generated_h
#error "CustomizableSkeletalComponent.generated.h already included, missing '#pragma once' in CustomizableSkeletalComponent.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableSkeletalComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomizableObjectInstance;

// ********** Begin Class UCustomizableSkeletalComponent *******************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateSkeletalMeshAsyncResult); \
	DECLARE_FUNCTION(execUpdateSkeletalMeshAsync); \
	DECLARE_FUNCTION(execGetSkipSetSkeletalMeshOnAttach); \
	DECLARE_FUNCTION(execSetSkipSetSkeletalMeshOnAttach); \
	DECLARE_FUNCTION(execGetSkipSetReferenceSkeletalMesh); \
	DECLARE_FUNCTION(execSetSkipSetReferenceSkeletalMesh); \
	DECLARE_FUNCTION(execSetCustomizableObjectInstance); \
	DECLARE_FUNCTION(execGetCustomizableObjectInstance); \
	DECLARE_FUNCTION(execGetComponentName); \
	DECLARE_FUNCTION(execSetComponentName);


struct Z_Construct_UClass_UCustomizableSkeletalComponent_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableSkeletalComponent(); \
	friend struct ::Z_Construct_UClass_UCustomizableSkeletalComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableSkeletalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableSkeletalComponent)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableSkeletalComponent(UCustomizableSkeletalComponent&&) = delete; \
	UCustomizableSkeletalComponent(const UCustomizableSkeletalComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UCustomizableSkeletalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableSkeletalComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableSkeletalComponent) \
	CUSTOMIZABLEOBJECT_API virtual ~UCustomizableSkeletalComponent();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalComponent_h_19_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalComponent_h_25_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableSkeletalComponent;

// ********** End Class UCustomizableSkeletalComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
