// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SKMBackedDynaMeshComponent.h"

#ifdef SKELETALMESHMODELINGTOOLS_SKMBackedDynaMeshComponent_generated_h
#error "SKMBackedDynaMeshComponent.generated.h already included, missing '#pragma once' in SKMBackedDynaMeshComponent.h"
#endif
#define SKELETALMESHMODELINGTOOLS_SKMBackedDynaMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletalMeshBackedDynamicMeshComponent **********************************
struct Z_Construct_UClass_USkeletalMeshBackedDynamicMeshComponent_Statics;
SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletalMeshBackedDynamicMeshComponent_NoRegister();

#define FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Components_SKMBackedDynaMeshComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshBackedDynamicMeshComponent(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshBackedDynamicMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETALMESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_USkeletalMeshBackedDynamicMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshBackedDynamicMeshComponent, UDynamicMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkeletalMeshModelingTools"), Z_Construct_UClass_USkeletalMeshBackedDynamicMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshBackedDynamicMeshComponent)


#define FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Components_SKMBackedDynaMeshComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SKELETALMESHMODELINGTOOLS_API USkeletalMeshBackedDynamicMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshBackedDynamicMeshComponent(USkeletalMeshBackedDynamicMeshComponent&&) = delete; \
	USkeletalMeshBackedDynamicMeshComponent(const USkeletalMeshBackedDynamicMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKELETALMESHMODELINGTOOLS_API, USkeletalMeshBackedDynamicMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshBackedDynamicMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshBackedDynamicMeshComponent) \
	SKELETALMESHMODELINGTOOLS_API virtual ~USkeletalMeshBackedDynamicMeshComponent();


#define FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Components_SKMBackedDynaMeshComponent_h_18_PROLOG
#define FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Components_SKMBackedDynaMeshComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Components_SKMBackedDynaMeshComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Components_SKMBackedDynaMeshComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshBackedDynamicMeshComponent;

// ********** End Class USkeletalMeshBackedDynamicMeshComponent ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Components_SKMBackedDynaMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
