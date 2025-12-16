// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectSkeletalMesh.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectSkeletalMesh_generated_h
#error "CustomizableObjectSkeletalMesh.generated.h already included, missing '#pragma once' in CustomizableObjectSkeletalMesh.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectSkeletalMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectSkeletalMesh ******************************************
struct Z_Construct_UClass_UCustomizableObjectSkeletalMesh_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectSkeletalMesh_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSkeletalMesh_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectSkeletalMesh(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectSkeletalMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableObjectSkeletalMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectSkeletalMesh, USkeletalMesh, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableObjectSkeletalMesh_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectSkeletalMesh)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSkeletalMesh_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECT_API UCustomizableObjectSkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectSkeletalMesh(UCustomizableObjectSkeletalMesh&&) = delete; \
	UCustomizableObjectSkeletalMesh(const UCustomizableObjectSkeletalMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UCustomizableObjectSkeletalMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectSkeletalMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectSkeletalMesh) \
	CUSTOMIZABLEOBJECT_API virtual ~UCustomizableObjectSkeletalMesh();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSkeletalMesh_h_30_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSkeletalMesh_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSkeletalMesh_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSkeletalMesh_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectSkeletalMesh;

// ********** End Class UCustomizableObjectSkeletalMesh ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectSkeletalMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
