// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/EditorStaticMeshFactory.h"

#ifdef UNREALED_EditorStaticMeshFactory_generated_h
#error "EditorStaticMeshFactory.generated.h already included, missing '#pragma once' in EditorStaticMeshFactory.h"
#endif
#define UNREALED_EditorStaticMeshFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorStaticMeshFactory *************************************************
struct Z_Construct_UClass_UEditorStaticMeshFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorStaticMeshFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorStaticMeshFactory(); \
	friend struct ::Z_Construct_UClass_UEditorStaticMeshFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorStaticMeshFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorStaticMeshFactory, UActorFactoryStaticMesh, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorStaticMeshFactory_NoRegister) \
	DECLARE_SERIALIZER(UEditorStaticMeshFactory)


#define FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorStaticMeshFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorStaticMeshFactory(UEditorStaticMeshFactory&&) = delete; \
	UEditorStaticMeshFactory(const UEditorStaticMeshFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorStaticMeshFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorStaticMeshFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorStaticMeshFactory) \
	NO_API virtual ~UEditorStaticMeshFactory();


#define FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorStaticMeshFactory;

// ********** End Class UEditorStaticMeshFactory ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
