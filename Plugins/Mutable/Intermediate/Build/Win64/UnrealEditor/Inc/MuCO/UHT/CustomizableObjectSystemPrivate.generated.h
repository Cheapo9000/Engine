// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectSystemPrivate.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectSystemPrivate_generated_h
#error "CustomizableObjectSystemPrivate.generated.h already included, missing '#pragma once' in CustomizableObjectSystemPrivate.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectSystemPrivate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGeneratedTexture *************************************************
struct Z_Construct_UScriptStruct_FGeneratedTexture_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectSystemPrivate_h_319_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeneratedTexture_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FGeneratedTexture;
// ********** End ScriptStruct FGeneratedTexture ***************************************************

// ********** Begin ScriptStruct FGeneratedMaterial ************************************************
struct Z_Construct_UScriptStruct_FGeneratedMaterial_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectSystemPrivate_h_334_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeneratedMaterial_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FGeneratedMaterial;
// ********** End ScriptStruct FGeneratedMaterial **************************************************

// ********** Begin ScriptStruct FPendingReleaseSkeletalMeshInfo ***********************************
struct Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectSystemPrivate_h_732_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


struct FPendingReleaseSkeletalMeshInfo;
// ********** End ScriptStruct FPendingReleaseSkeletalMeshInfo *************************************

// ********** Begin Class UCustomizableObjectSystemPrivate *****************************************
struct Z_Construct_UClass_UCustomizableObjectSystemPrivate_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectSystemPrivate_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectSystemPrivate_h_818_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectSystemPrivate(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectSystemPrivate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableObjectSystemPrivate_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectSystemPrivate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableObjectSystemPrivate_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectSystemPrivate)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectSystemPrivate_h_818_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizableObjectSystemPrivate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectSystemPrivate(UCustomizableObjectSystemPrivate&&) = delete; \
	UCustomizableObjectSystemPrivate(const UCustomizableObjectSystemPrivate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectSystemPrivate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectSystemPrivate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectSystemPrivate) \
	NO_API virtual ~UCustomizableObjectSystemPrivate();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectSystemPrivate_h_815_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectSystemPrivate_h_818_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectSystemPrivate_h_818_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectSystemPrivate_h_818_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectSystemPrivate;

// ********** End Class UCustomizableObjectSystemPrivate *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectSystemPrivate_h

// ********** Begin Enum ECustomizableObjectDDCPolicy **********************************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTDDCPOLICY(op) \
	op(ECustomizableObjectDDCPolicy::None) \
	op(ECustomizableObjectDDCPolicy::Local) \
	op(ECustomizableObjectDDCPolicy::Default) 

enum class ECustomizableObjectDDCPolicy : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectDDCPolicy> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectDDCPolicy>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum ECustomizableObjectDDCPolicy ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
