// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AnimBlueprintFactory.h"

#ifdef UNREALED_AnimBlueprintFactory_generated_h
#error "AnimBlueprintFactory.generated.h already included, missing '#pragma once' in AnimBlueprintFactory.h"
#endif
#define UNREALED_AnimBlueprintFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimBlueprintFactory ****************************************************
struct Z_Construct_UClass_UAnimBlueprintFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAnimBlueprintFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBlueprintFactory(); \
	friend struct ::Z_Construct_UClass_UAnimBlueprintFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAnimBlueprintFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimBlueprintFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAnimBlueprintFactory_NoRegister) \
	DECLARE_SERIALIZER(UAnimBlueprintFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnimBlueprintFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprintFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimBlueprintFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprintFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimBlueprintFactory(UAnimBlueprintFactory&&) = delete; \
	UAnimBlueprintFactory(const UAnimBlueprintFactory&) = delete; \
	UNREALED_API virtual ~UAnimBlueprintFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimBlueprintFactory;

// ********** End Class UAnimBlueprintFactory ******************************************************

// ********** Begin Class UAnimLayerInterfaceFactory ***********************************************
struct Z_Construct_UClass_UAnimLayerInterfaceFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAnimLayerInterfaceFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimLayerInterfaceFactory(); \
	friend struct ::Z_Construct_UClass_UAnimLayerInterfaceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAnimLayerInterfaceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimLayerInterfaceFactory, UAnimBlueprintFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAnimLayerInterfaceFactory_NoRegister) \
	DECLARE_SERIALIZER(UAnimLayerInterfaceFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimLayerInterfaceFactory(UAnimLayerInterfaceFactory&&) = delete; \
	UAnimLayerInterfaceFactory(const UAnimLayerInterfaceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimLayerInterfaceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimLayerInterfaceFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimLayerInterfaceFactory) \
	UNREALED_API virtual ~UAnimLayerInterfaceFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_49_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimLayerInterfaceFactory;

// ********** End Class UAnimLayerInterfaceFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
