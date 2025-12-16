// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/UVUnwrapDynamicMesh.h"

#ifdef UVEDITORTOOLS_UVUnwrapDynamicMesh_generated_h
#error "UVUnwrapDynamicMesh.generated.h already included, missing '#pragma once' in UVUnwrapDynamicMesh.h"
#endif
#define UVEDITORTOOLS_UVUnwrapDynamicMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UUVUnwrapDynamicMesh *************************************************
struct Z_Construct_UClass_UUVUnwrapDynamicMesh_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVUnwrapDynamicMesh_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVUnwrapDynamicMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVUnwrapDynamicMesh(UUVUnwrapDynamicMesh&&) = delete; \
	UUVUnwrapDynamicMesh(const UUVUnwrapDynamicMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVUnwrapDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVUnwrapDynamicMesh); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVUnwrapDynamicMesh) \
	virtual ~UUVUnwrapDynamicMesh() = default;


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUVUnwrapDynamicMesh(); \
	friend struct ::Z_Construct_UClass_UUVUnwrapDynamicMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVUnwrapDynamicMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVUnwrapDynamicMesh, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVUnwrapDynamicMesh_NoRegister) \
	DECLARE_SERIALIZER(UUVUnwrapDynamicMesh)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUVUnwrapDynamicMesh() {} \
public: \
	typedef UUVUnwrapDynamicMesh UClassType; \
	typedef IUVUnwrapDynamicMesh ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_14_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVUnwrapDynamicMesh;

// ********** End Interface UUVUnwrapDynamicMesh ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
