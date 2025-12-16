// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableSkeletalMeshActor.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableSkeletalMeshActor_generated_h
#error "CustomizableSkeletalMeshActor.generated.h already included, missing '#pragma once' in CustomizableSkeletalMeshActor.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableSkeletalMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomizableObjectInstance;
class UMaterialInterface;
class USkeletalMeshComponent;

// ********** Begin Class ACustomizableSkeletalMeshActor *******************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalMeshActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchComponentsMaterials); \
	DECLARE_FUNCTION(execEnableDebugMaterial); \
	DECLARE_FUNCTION(execSetDebugMaterial); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetCustomizableObjectInstance);


struct Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_ACustomizableSkeletalMeshActor_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalMeshActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomizableSkeletalMeshActor(); \
	friend struct ::Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_ACustomizableSkeletalMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACustomizableSkeletalMeshActor, ASkeletalMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_ACustomizableSkeletalMeshActor_NoRegister) \
	DECLARE_SERIALIZER(ACustomizableSkeletalMeshActor)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalMeshActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACustomizableSkeletalMeshActor(ACustomizableSkeletalMeshActor&&) = delete; \
	ACustomizableSkeletalMeshActor(const ACustomizableSkeletalMeshActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, ACustomizableSkeletalMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomizableSkeletalMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomizableSkeletalMeshActor) \
	CUSTOMIZABLEOBJECT_API virtual ~ACustomizableSkeletalMeshActor();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalMeshActor_h_17_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalMeshActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalMeshActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalMeshActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalMeshActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACustomizableSkeletalMeshActor;

// ********** End Class ACustomizableSkeletalMeshActor *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableSkeletalMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
