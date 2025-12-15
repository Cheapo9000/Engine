// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/MaterialFunctionFactoryNew.h"

#ifdef UNREALED_MaterialFunctionFactoryNew_generated_h
#error "MaterialFunctionFactoryNew.generated.h already included, missing '#pragma once' in MaterialFunctionFactoryNew.h"
#endif
#define UNREALED_MaterialFunctionFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialFunctionFactoryNew **********************************************
struct Z_Construct_UClass_UMaterialFunctionFactoryNew_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionFactoryNew_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialFunctionFactoryNew(); \
	friend struct ::Z_Construct_UClass_UMaterialFunctionFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialFunctionFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialFunctionFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialFunctionFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UMaterialFunctionFactoryNew)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialFunctionFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunctionFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialFunctionFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunctionFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialFunctionFactoryNew(UMaterialFunctionFactoryNew&&) = delete; \
	UMaterialFunctionFactoryNew(const UMaterialFunctionFactoryNew&) = delete; \
	UNREALED_API virtual ~UMaterialFunctionFactoryNew();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialFunctionFactoryNew;

// ********** End Class UMaterialFunctionFactoryNew ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
