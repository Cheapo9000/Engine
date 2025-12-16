// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMesh/SkeletonTransformProxy.h"

#ifdef MESHMODELINGTOOLSEDITORONLY_SkeletonTransformProxy_generated_h
#error "SkeletonTransformProxy.generated.h already included, missing '#pragma once' in SkeletonTransformProxy.h"
#endif
#define MESHMODELINGTOOLSEDITORONLY_SkeletonTransformProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletonTransformProxy **************************************************
struct Z_Construct_UClass_USkeletonTransformProxy_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_USkeletonTransformProxy_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonTransformProxy_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletonTransformProxy(); \
	friend struct ::Z_Construct_UClass_USkeletonTransformProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_USkeletonTransformProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletonTransformProxy, UTransformProxy, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_USkeletonTransformProxy_NoRegister) \
	DECLARE_SERIALIZER(USkeletonTransformProxy)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonTransformProxy_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API USkeletonTransformProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletonTransformProxy(USkeletonTransformProxy&&) = delete; \
	USkeletonTransformProxy(const USkeletonTransformProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, USkeletonTransformProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonTransformProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletonTransformProxy) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~USkeletonTransformProxy();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonTransformProxy_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonTransformProxy_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonTransformProxy_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonTransformProxy_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletonTransformProxy;

// ********** End Class USkeletonTransformProxy ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonTransformProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
