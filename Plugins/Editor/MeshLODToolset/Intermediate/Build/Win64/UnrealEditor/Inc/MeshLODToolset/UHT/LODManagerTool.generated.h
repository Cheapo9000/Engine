// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/LODManagerTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHLODTOOLSET_LODManagerTool_generated_h
#error "LODManagerTool.generated.h already included, missing '#pragma once' in LODManagerTool.h"
#endif
#define MESHLODTOOLSET_LODManagerTool_generated_h

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerToolBuilder(); \
	friend struct Z_Construct_UClass_ULODManagerToolBuilder_Statics; \
public: \
	DECLARE_CLASS(ULODManagerToolBuilder, UMultiSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), NO_API) \
	DECLARE_SERIALIZER(ULODManagerToolBuilder)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULODManagerToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULODManagerToolBuilder(ULODManagerToolBuilder&&); \
	ULODManagerToolBuilder(const ULODManagerToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULODManagerToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerToolBuilder) \
	NO_API virtual ~ULODManagerToolBuilder();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_20_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHLODTOOLSET_API UClass* StaticClass<class ULODManagerToolBuilder>();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLODManagerLODInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<struct FLODManagerLODInfo>();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerLODProperties(); \
	friend struct Z_Construct_UClass_ULODManagerLODProperties_Statics; \
public: \
	DECLARE_CLASS(ULODManagerLODProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), NO_API) \
	DECLARE_SERIALIZER(ULODManagerLODProperties)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULODManagerLODProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULODManagerLODProperties(ULODManagerLODProperties&&); \
	ULODManagerLODProperties(const ULODManagerLODProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULODManagerLODProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerLODProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerLODProperties) \
	NO_API virtual ~ULODManagerLODProperties();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_48_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHLODTOOLSET_API UClass* StaticClass<class ULODManagerLODProperties>();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLODNamesFunc);


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerPreviewLODProperties(); \
	friend struct Z_Construct_UClass_ULODManagerPreviewLODProperties_Statics; \
public: \
	DECLARE_CLASS(ULODManagerPreviewLODProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), NO_API) \
	DECLARE_SERIALIZER(ULODManagerPreviewLODProperties)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULODManagerPreviewLODProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULODManagerPreviewLODProperties(ULODManagerPreviewLODProperties&&); \
	ULODManagerPreviewLODProperties(const ULODManagerPreviewLODProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULODManagerPreviewLODProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerPreviewLODProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerPreviewLODProperties) \
	NO_API virtual ~ULODManagerPreviewLODProperties();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_77_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHLODTOOLSET_API UClass* StaticClass<class ULODManagerPreviewLODProperties>();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerActionPropertySet(); \
	friend struct Z_Construct_UClass_ULODManagerActionPropertySet_Statics; \
public: \
	DECLARE_CLASS(ULODManagerActionPropertySet, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), NO_API) \
	DECLARE_SERIALIZER(ULODManagerActionPropertySet)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULODManagerActionPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULODManagerActionPropertySet(ULODManagerActionPropertySet&&); \
	ULODManagerActionPropertySet(const ULODManagerActionPropertySet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULODManagerActionPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerActionPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerActionPropertySet) \
	NO_API virtual ~ULODManagerActionPropertySet();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_116_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHLODTOOLSET_API UClass* StaticClass<class ULODManagerActionPropertySet>();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execMoveToLOD0);


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerHiResSourceModelActions(); \
	friend struct Z_Construct_UClass_ULODManagerHiResSourceModelActions_Statics; \
public: \
	DECLARE_CLASS(ULODManagerHiResSourceModelActions, ULODManagerActionPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), NO_API) \
	DECLARE_SERIALIZER(ULODManagerHiResSourceModelActions)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_133_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULODManagerHiResSourceModelActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULODManagerHiResSourceModelActions(ULODManagerHiResSourceModelActions&&); \
	ULODManagerHiResSourceModelActions(const ULODManagerHiResSourceModelActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULODManagerHiResSourceModelActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerHiResSourceModelActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerHiResSourceModelActions) \
	NO_API virtual ~ULODManagerHiResSourceModelActions();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_130_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_133_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_133_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHLODTOOLSET_API UClass* StaticClass<class ULODManagerHiResSourceModelActions>();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCleanMaterials);


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerMaterialActions(); \
	friend struct Z_Construct_UClass_ULODManagerMaterialActions_Statics; \
public: \
	DECLARE_CLASS(ULODManagerMaterialActions, ULODManagerActionPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), NO_API) \
	DECLARE_SERIALIZER(ULODManagerMaterialActions)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULODManagerMaterialActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULODManagerMaterialActions(ULODManagerMaterialActions&&); \
	ULODManagerMaterialActions(const ULODManagerMaterialActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULODManagerMaterialActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerMaterialActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerMaterialActions) \
	NO_API virtual ~ULODManagerMaterialActions();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_151_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_154_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHLODTOOLSET_API UClass* StaticClass<class ULODManagerMaterialActions>();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_176_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHLODTOOLSET_API ULODManagerToolChangeTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULODManagerToolChangeTarget(ULODManagerToolChangeTarget&&); \
	ULODManagerToolChangeTarget(const ULODManagerToolChangeTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHLODTOOLSET_API, ULODManagerToolChangeTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerToolChangeTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODManagerToolChangeTarget) \
	MESHLODTOOLSET_API virtual ~ULODManagerToolChangeTarget();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_176_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULODManagerToolChangeTarget(); \
	friend struct Z_Construct_UClass_ULODManagerToolChangeTarget_Statics; \
public: \
	DECLARE_CLASS(ULODManagerToolChangeTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), MESHLODTOOLSET_API) \
	DECLARE_SERIALIZER(ULODManagerToolChangeTarget)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_176_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_176_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_176_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_176_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILODManagerToolChangeTarget() {} \
public: \
	typedef ULODManagerToolChangeTarget UClassType; \
	typedef ILODManagerToolChangeTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_173_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_176_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHLODTOOLSET_API UClass* StaticClass<class ULODManagerToolChangeTarget>();

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveUnreferencedMaterials); \
	DECLARE_FUNCTION(execMoveHiResToLOD0); \
	DECLARE_FUNCTION(execDeleteHiResSourceModel);


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULODManagerTool(); \
	friend struct Z_Construct_UClass_ULODManagerTool_Statics; \
public: \
	DECLARE_CLASS(ULODManagerTool, UMultiSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), NO_API) \
	DECLARE_SERIALIZER(ULODManagerTool) \
	virtual UObject* _getUObject() const override { return const_cast<ULODManagerTool*>(this); }


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_194_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULODManagerTool(ULODManagerTool&&); \
	ULODManagerTool(const ULODManagerTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULODManagerTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODManagerTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULODManagerTool) \
	NO_API virtual ~ULODManagerTool();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_191_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_194_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHLODTOOLSET_API UClass* StaticClass<class ULODManagerTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODManagerTool_h


#define FOREACH_ENUM_ELODMANAGERTOOLACTIONS(op) \
	op(ELODManagerToolActions::NoAction) \
	op(ELODManagerToolActions::MoveHiResToLOD0) \
	op(ELODManagerToolActions::DeleteHiResSourceModel) \
	op(ELODManagerToolActions::RemoveUnreferencedMaterials) 

enum class ELODManagerToolActions;
template<> struct TIsUEnumClass<ELODManagerToolActions> { enum { Value = true }; };
template<> MESHLODTOOLSET_API UEnum* StaticEnum<ELODManagerToolActions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
