// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/LODManagerTool.h"

#ifdef MESHLODTOOLSET_LODManagerTool_generated_h
#error "LODManagerTool.generated.h already included, missing '#pragma once' in LODManagerTool.h"
#endif
#define MESHLODTOOLSET_LODManagerTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULODManagerToolBuilder ***************************************************
struct Z_Construct_UClass_ULODManagerToolBuilder_Statics;
MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerToolBuilder_NoRegister();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerToolBuilder(); \
	friend struct ::Z_Construct_UClass_ULODManagerToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHLODTOOLSET_API UClass* ::Z_Construct_UClass_ULODManagerToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(ULODManagerToolBuilder, UMultiSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), Z_Construct_UClass_ULODManagerToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(ULODManagerToolBuilder)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHLODTOOLSET_API ULODManagerToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULODManagerToolBuilder(ULODManagerToolBuilder&&) = delete; \
	ULODManagerToolBuilder(const ULODManagerToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHLODTOOLSET_API, ULODManagerToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerToolBuilder) \
	MESHLODTOOLSET_API virtual ~ULODManagerToolBuilder();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_22_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULODManagerToolBuilder;

// ********** End Class ULODManagerToolBuilder *****************************************************

// ********** Begin ScriptStruct FLODManagerLODInfo ************************************************
struct Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics;
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics; \
	MESHLODTOOLSET_API static class UScriptStruct* StaticStruct();


struct FLODManagerLODInfo;
// ********** End ScriptStruct FLODManagerLODInfo **************************************************

// ********** Begin Class ULODManagerLODProperties *************************************************
struct Z_Construct_UClass_ULODManagerLODProperties_Statics;
MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerLODProperties_NoRegister();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerLODProperties(); \
	friend struct ::Z_Construct_UClass_ULODManagerLODProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHLODTOOLSET_API UClass* ::Z_Construct_UClass_ULODManagerLODProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(ULODManagerLODProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), Z_Construct_UClass_ULODManagerLODProperties_NoRegister) \
	DECLARE_SERIALIZER(ULODManagerLODProperties)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHLODTOOLSET_API ULODManagerLODProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULODManagerLODProperties(ULODManagerLODProperties&&) = delete; \
	ULODManagerLODProperties(const ULODManagerLODProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHLODTOOLSET_API, ULODManagerLODProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerLODProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerLODProperties) \
	MESHLODTOOLSET_API virtual ~ULODManagerLODProperties();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_50_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULODManagerLODProperties;

// ********** End Class ULODManagerLODProperties ***************************************************

// ********** Begin Class ULODManagerPreviewLODProperties ******************************************
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLODNamesFunc);


struct Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics;
MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerPreviewLODProperties_NoRegister();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerPreviewLODProperties(); \
	friend struct ::Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHLODTOOLSET_API UClass* ::Z_Construct_UClass_ULODManagerPreviewLODProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(ULODManagerPreviewLODProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), Z_Construct_UClass_ULODManagerPreviewLODProperties_NoRegister) \
	DECLARE_SERIALIZER(ULODManagerPreviewLODProperties)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHLODTOOLSET_API ULODManagerPreviewLODProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULODManagerPreviewLODProperties(ULODManagerPreviewLODProperties&&) = delete; \
	ULODManagerPreviewLODProperties(const ULODManagerPreviewLODProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHLODTOOLSET_API, ULODManagerPreviewLODProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerPreviewLODProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerPreviewLODProperties) \
	MESHLODTOOLSET_API virtual ~ULODManagerPreviewLODProperties();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_79_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULODManagerPreviewLODProperties;

// ********** End Class ULODManagerPreviewLODProperties ********************************************

// ********** Begin Class ULODManagerActionPropertySet *********************************************
struct Z_Construct_UClass_ULODManagerActionPropertySet_Statics;
MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerActionPropertySet_NoRegister();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerActionPropertySet(); \
	friend struct ::Z_Construct_UClass_ULODManagerActionPropertySet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHLODTOOLSET_API UClass* ::Z_Construct_UClass_ULODManagerActionPropertySet_NoRegister(); \
public: \
	DECLARE_CLASS2(ULODManagerActionPropertySet, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), Z_Construct_UClass_ULODManagerActionPropertySet_NoRegister) \
	DECLARE_SERIALIZER(ULODManagerActionPropertySet)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHLODTOOLSET_API ULODManagerActionPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULODManagerActionPropertySet(ULODManagerActionPropertySet&&) = delete; \
	ULODManagerActionPropertySet(const ULODManagerActionPropertySet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHLODTOOLSET_API, ULODManagerActionPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerActionPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerActionPropertySet) \
	MESHLODTOOLSET_API virtual ~ULODManagerActionPropertySet();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_118_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_121_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULODManagerActionPropertySet;

// ********** End Class ULODManagerActionPropertySet ***********************************************

// ********** Begin Class ULODManagerHiResSourceModelActions ***************************************
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execMoveToLOD0);


struct Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics;
MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerHiResSourceModelActions_NoRegister();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerHiResSourceModelActions(); \
	friend struct ::Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHLODTOOLSET_API UClass* ::Z_Construct_UClass_ULODManagerHiResSourceModelActions_NoRegister(); \
public: \
	DECLARE_CLASS2(ULODManagerHiResSourceModelActions, ULODManagerActionPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), Z_Construct_UClass_ULODManagerHiResSourceModelActions_NoRegister) \
	DECLARE_SERIALIZER(ULODManagerHiResSourceModelActions)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHLODTOOLSET_API ULODManagerHiResSourceModelActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULODManagerHiResSourceModelActions(ULODManagerHiResSourceModelActions&&) = delete; \
	ULODManagerHiResSourceModelActions(const ULODManagerHiResSourceModelActions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHLODTOOLSET_API, ULODManagerHiResSourceModelActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerHiResSourceModelActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerHiResSourceModelActions) \
	MESHLODTOOLSET_API virtual ~ULODManagerHiResSourceModelActions();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_132_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_135_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULODManagerHiResSourceModelActions;

// ********** End Class ULODManagerHiResSourceModelActions *****************************************

// ********** Begin Class ULODManagerMaterialActions ***********************************************
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCleanMaterials);


struct Z_Construct_UClass_ULODManagerMaterialActions_Statics;
MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerMaterialActions_NoRegister();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerMaterialActions(); \
	friend struct ::Z_Construct_UClass_ULODManagerMaterialActions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHLODTOOLSET_API UClass* ::Z_Construct_UClass_ULODManagerMaterialActions_NoRegister(); \
public: \
	DECLARE_CLASS2(ULODManagerMaterialActions, ULODManagerActionPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), Z_Construct_UClass_ULODManagerMaterialActions_NoRegister) \
	DECLARE_SERIALIZER(ULODManagerMaterialActions)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHLODTOOLSET_API ULODManagerMaterialActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULODManagerMaterialActions(ULODManagerMaterialActions&&) = delete; \
	ULODManagerMaterialActions(const ULODManagerMaterialActions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHLODTOOLSET_API, ULODManagerMaterialActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerMaterialActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerMaterialActions) \
	MESHLODTOOLSET_API virtual ~ULODManagerMaterialActions();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_153_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_156_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULODManagerMaterialActions;

// ********** End Class ULODManagerMaterialActions *************************************************

// ********** Begin Interface ULODManagerToolChangeTarget ******************************************
struct Z_Construct_UClass_ULODManagerToolChangeTarget_Statics;
MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerToolChangeTarget_NoRegister();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_178_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHLODTOOLSET_API ULODManagerToolChangeTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULODManagerToolChangeTarget(ULODManagerToolChangeTarget&&) = delete; \
	ULODManagerToolChangeTarget(const ULODManagerToolChangeTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHLODTOOLSET_API, ULODManagerToolChangeTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerToolChangeTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerToolChangeTarget) \
	virtual ~ULODManagerToolChangeTarget() = default;


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_178_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULODManagerToolChangeTarget(); \
	friend struct ::Z_Construct_UClass_ULODManagerToolChangeTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHLODTOOLSET_API UClass* ::Z_Construct_UClass_ULODManagerToolChangeTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(ULODManagerToolChangeTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), Z_Construct_UClass_ULODManagerToolChangeTarget_NoRegister) \
	DECLARE_SERIALIZER(ULODManagerToolChangeTarget)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_178_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_178_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_178_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_178_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILODManagerToolChangeTarget() {} \
public: \
	typedef ULODManagerToolChangeTarget UClassType; \
	typedef ILODManagerToolChangeTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_175_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_178_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULODManagerToolChangeTarget;

// ********** End Interface ULODManagerToolChangeTarget ********************************************

// ********** Begin Class ULODManagerTool **********************************************************
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_196_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveUnreferencedMaterials); \
	DECLARE_FUNCTION(execMoveHiResToLOD0); \
	DECLARE_FUNCTION(execDeleteHiResSourceModel);


struct Z_Construct_UClass_ULODManagerTool_Statics;
MESHLODTOOLSET_API UClass* Z_Construct_UClass_ULODManagerTool_NoRegister();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_196_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerTool(); \
	friend struct ::Z_Construct_UClass_ULODManagerTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHLODTOOLSET_API UClass* ::Z_Construct_UClass_ULODManagerTool_NoRegister(); \
public: \
	DECLARE_CLASS2(ULODManagerTool, UMultiSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), Z_Construct_UClass_ULODManagerTool_NoRegister) \
	DECLARE_SERIALIZER(ULODManagerTool) \
	virtual UObject* _getUObject() const override { return const_cast<ULODManagerTool*>(this); }


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_196_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULODManagerTool(ULODManagerTool&&) = delete; \
	ULODManagerTool(const ULODManagerTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHLODTOOLSET_API, ULODManagerTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULODManagerTool) \
	MESHLODTOOLSET_API virtual ~ULODManagerTool();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_193_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_196_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_196_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_196_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_196_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULODManagerTool;

// ********** End Class ULODManagerTool ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h

// ********** Begin Enum ELODManagerToolActions ****************************************************
#define FOREACH_ENUM_ELODMANAGERTOOLACTIONS(op) \
	op(ELODManagerToolActions::NoAction) \
	op(ELODManagerToolActions::MoveHiResToLOD0) \
	op(ELODManagerToolActions::DeleteHiResSourceModel) \
	op(ELODManagerToolActions::RemoveUnreferencedMaterials) 

enum class ELODManagerToolActions;
template<> struct TIsUEnumClass<ELODManagerToolActions> { enum { Value = true }; };
template<> MESHLODTOOLSET_NON_ATTRIBUTED_API UEnum* StaticEnum<ELODManagerToolActions>();
// ********** End Enum ELODManagerToolActions ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
