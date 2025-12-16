// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/SkeletonCommitter.h"

#ifdef MODELINGCOMPONENTSEDITORONLY_SkeletonCommitter_generated_h
#error "SkeletonCommitter.generated.h already included, missing '#pragma once' in SkeletonCommitter.h"
#endif
#define MODELINGCOMPONENTSEDITORONLY_SkeletonCommitter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USkeletonCommitter ***************************************************
struct Z_Construct_UClass_USkeletonCommitter_Statics;
MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_USkeletonCommitter_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_TargetInterfaces_SkeletonCommitter_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTSEDITORONLY_API USkeletonCommitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletonCommitter(USkeletonCommitter&&) = delete; \
	USkeletonCommitter(const USkeletonCommitter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTSEDITORONLY_API, USkeletonCommitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonCommitter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletonCommitter) \
	virtual ~USkeletonCommitter() = default;


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_TargetInterfaces_SkeletonCommitter_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSkeletonCommitter(); \
	friend struct ::Z_Construct_UClass_USkeletonCommitter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTSEDITORONLY_API UClass* ::Z_Construct_UClass_USkeletonCommitter_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletonCommitter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModelingComponentsEditorOnly"), Z_Construct_UClass_USkeletonCommitter_NoRegister) \
	DECLARE_SERIALIZER(USkeletonCommitter)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_TargetInterfaces_SkeletonCommitter_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_TargetInterfaces_SkeletonCommitter_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_TargetInterfaces_SkeletonCommitter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_TargetInterfaces_SkeletonCommitter_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISkeletonCommitter() {} \
public: \
	typedef USkeletonCommitter UClassType; \
	typedef ISkeletonCommitter ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_TargetInterfaces_SkeletonCommitter_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_TargetInterfaces_SkeletonCommitter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_TargetInterfaces_SkeletonCommitter_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletonCommitter;

// ********** End Interface USkeletonCommitter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_TargetInterfaces_SkeletonCommitter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
