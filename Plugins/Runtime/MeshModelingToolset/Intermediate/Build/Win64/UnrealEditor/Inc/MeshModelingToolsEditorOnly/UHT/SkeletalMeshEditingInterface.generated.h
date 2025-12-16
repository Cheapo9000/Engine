// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMesh/SkeletalMeshEditingInterface.h"

#ifdef MESHMODELINGTOOLSEDITORONLY_SkeletalMeshEditingInterface_generated_h
#error "SkeletalMeshEditingInterface.generated.h already included, missing '#pragma once' in SkeletalMeshEditingInterface.h"
#endif
#define MESHMODELINGTOOLSEDITORONLY_SkeletalMeshEditingInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USkeletalMeshEditingInterface ****************************************
struct Z_Construct_UClass_USkeletalMeshEditingInterface_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshEditingInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API USkeletalMeshEditingInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshEditingInterface(USkeletalMeshEditingInterface&&) = delete; \
	USkeletalMeshEditingInterface(const USkeletalMeshEditingInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, USkeletalMeshEditingInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshEditingInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshEditingInterface) \
	virtual ~USkeletalMeshEditingInterface() = default;


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_34_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSkeletalMeshEditingInterface(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshEditingInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_USkeletalMeshEditingInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshEditingInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_USkeletalMeshEditingInterface_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshEditingInterface)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_34_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_34_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_34_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISkeletalMeshEditingInterface() {} \
public: \
	typedef USkeletalMeshEditingInterface UClassType; \
	typedef ISkeletalMeshEditingInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_31_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshEditingInterface;

// ********** End Interface USkeletalMeshEditingInterface ******************************************

// ********** Begin Class USkeletalMeshGizmoContextObjectBase **************************************
struct Z_Construct_UClass_USkeletalMeshGizmoContextObjectBase_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshGizmoContextObjectBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshGizmoContextObjectBase(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshGizmoContextObjectBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_USkeletalMeshGizmoContextObjectBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshGizmoContextObjectBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_USkeletalMeshGizmoContextObjectBase_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshGizmoContextObjectBase)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API USkeletalMeshGizmoContextObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshGizmoContextObjectBase(USkeletalMeshGizmoContextObjectBase&&) = delete; \
	USkeletalMeshGizmoContextObjectBase(const USkeletalMeshGizmoContextObjectBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, USkeletalMeshGizmoContextObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshGizmoContextObjectBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshGizmoContextObjectBase) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~USkeletalMeshGizmoContextObjectBase();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_98_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshGizmoContextObjectBase;

// ********** End Class USkeletalMeshGizmoContextObjectBase ****************************************

// ********** Begin Class USkeletalMeshGizmoWrapperBase ********************************************
struct Z_Construct_UClass_USkeletalMeshGizmoWrapperBase_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshGizmoWrapperBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshGizmoWrapperBase(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshGizmoWrapperBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_USkeletalMeshGizmoWrapperBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshGizmoWrapperBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_USkeletalMeshGizmoWrapperBase_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshGizmoWrapperBase)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API USkeletalMeshGizmoWrapperBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshGizmoWrapperBase(USkeletalMeshGizmoWrapperBase&&) = delete; \
	USkeletalMeshGizmoWrapperBase(const USkeletalMeshGizmoWrapperBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, USkeletalMeshGizmoWrapperBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshGizmoWrapperBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshGizmoWrapperBase) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~USkeletalMeshGizmoWrapperBase();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_113_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_116_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshGizmoWrapperBase;

// ********** End Class USkeletalMeshGizmoWrapperBase **********************************************

// ********** Begin Class USkeletalMeshEditorContextObjectBase *************************************
struct Z_Construct_UClass_USkeletalMeshEditorContextObjectBase_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_USkeletalMeshEditorContextObjectBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshEditorContextObjectBase(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshEditorContextObjectBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_USkeletalMeshEditorContextObjectBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshEditorContextObjectBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_USkeletalMeshEditorContextObjectBase_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshEditorContextObjectBase)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API USkeletalMeshEditorContextObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshEditorContextObjectBase(USkeletalMeshEditorContextObjectBase&&) = delete; \
	USkeletalMeshEditorContextObjectBase(const USkeletalMeshEditorContextObjectBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, USkeletalMeshEditorContextObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshEditorContextObjectBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshEditorContextObjectBase) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~USkeletalMeshEditorContextObjectBase();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_144_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_147_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshEditorContextObjectBase;

// ********** End Class USkeletalMeshEditorContextObjectBase ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletalMeshEditingInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
