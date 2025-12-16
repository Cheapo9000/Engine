// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectInstanceUsage.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectInstanceUsage_generated_h
#error "CustomizableObjectInstanceUsage.generated.h already included, missing '#pragma once' in CustomizableObjectInstanceUsage.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectInstanceUsage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomizableObjectInstance;
class USkeletalMeshComponent;

// ********** Begin Class UCustomizableObjectInstanceUsage *****************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceUsage_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSkipSetSkeletalMeshOnAttach); \
	DECLARE_FUNCTION(execSetSkipSetSkeletalMeshOnAttach); \
	DECLARE_FUNCTION(execGetSkipSetReferenceSkeletalMesh); \
	DECLARE_FUNCTION(execSetSkipSetReferenceSkeletalMesh); \
	DECLARE_FUNCTION(execUpdateSkeletalMeshAsyncResult); \
	DECLARE_FUNCTION(execUpdateSkeletalMeshAsync); \
	DECLARE_FUNCTION(execGetAttachParent); \
	DECLARE_FUNCTION(execAttachTo); \
	DECLARE_FUNCTION(execGetComponentName); \
	DECLARE_FUNCTION(execSetComponentName); \
	DECLARE_FUNCTION(execGetCustomizableObjectInstance); \
	DECLARE_FUNCTION(execSetCustomizableObjectInstance);


struct Z_Construct_UClass_UCustomizableObjectInstanceUsage_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstanceUsage_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceUsage_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectInstanceUsage(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectInstanceUsage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableObjectInstanceUsage_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectInstanceUsage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableObjectInstanceUsage_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectInstanceUsage)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceUsage_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectInstanceUsage(UCustomizableObjectInstanceUsage&&) = delete; \
	UCustomizableObjectInstanceUsage(const UCustomizableObjectInstanceUsage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UCustomizableObjectInstanceUsage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectInstanceUsage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectInstanceUsage) \
	CUSTOMIZABLEOBJECT_API virtual ~UCustomizableObjectInstanceUsage();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceUsage_h_28_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceUsage_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceUsage_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceUsage_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceUsage_h_34_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectInstanceUsage;

// ********** End Class UCustomizableObjectInstanceUsage *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceUsage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
