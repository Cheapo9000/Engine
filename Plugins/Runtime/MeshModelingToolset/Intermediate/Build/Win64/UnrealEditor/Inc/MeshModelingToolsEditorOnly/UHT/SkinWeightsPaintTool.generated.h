// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMesh/SkinWeightsPaintTool.h"

#ifdef MESHMODELINGTOOLSEDITORONLY_SkinWeightsPaintTool_generated_h
#error "SkinWeightsPaintTool.generated.h already included, missing '#pragma once' in SkinWeightsPaintTool.h"
#endif
#define MESHMODELINGTOOLSEDITORONLY_SkinWeightsPaintTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkinWeightsPaintToolBuilder *********************************************
struct Z_Construct_UClass_USkinWeightsPaintToolBuilder_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_USkinWeightsPaintToolBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_322_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkinWeightsPaintToolBuilder(); \
	friend struct ::Z_Construct_UClass_USkinWeightsPaintToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_USkinWeightsPaintToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(USkinWeightsPaintToolBuilder, UMeshSurfacePointMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_USkinWeightsPaintToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(USkinWeightsPaintToolBuilder)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_322_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API USkinWeightsPaintToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkinWeightsPaintToolBuilder(USkinWeightsPaintToolBuilder&&) = delete; \
	USkinWeightsPaintToolBuilder(const USkinWeightsPaintToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, USkinWeightsPaintToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinWeightsPaintToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinWeightsPaintToolBuilder) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~USkinWeightsPaintToolBuilder();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_319_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_322_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_322_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_322_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkinWeightsPaintToolBuilder;

// ********** End Class USkinWeightsPaintToolBuilder ***********************************************

// ********** Begin ScriptStruct FSkinWeightBrushConfig ********************************************
struct Z_Construct_UScriptStruct_FSkinWeightBrushConfig_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_335_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkinWeightBrushConfig_Statics; \
	MESHMODELINGTOOLSEDITORONLY_API static class UScriptStruct* StaticStruct();


struct FSkinWeightBrushConfig;
// ********** End ScriptStruct FSkinWeightBrushConfig **********************************************

// ********** Begin Class USkinWeightsPaintToolProperties ******************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_367_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSourceSkinWeightProfilesFunc); \
	DECLARE_FUNCTION(execGetSourceLODsFunc); \
	DECLARE_FUNCTION(execGetTargetSkinWeightProfilesFunc);


struct Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_USkinWeightsPaintToolProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_367_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkinWeightsPaintToolProperties(); \
	friend struct ::Z_Construct_UClass_USkinWeightsPaintToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_USkinWeightsPaintToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(USkinWeightsPaintToolProperties, UBrushBaseProperties, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_USkinWeightsPaintToolProperties_NoRegister) \
	DECLARE_SERIALIZER(USkinWeightsPaintToolProperties) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_367_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkinWeightsPaintToolProperties(USkinWeightsPaintToolProperties&&) = delete; \
	USkinWeightsPaintToolProperties(const USkinWeightsPaintToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, USkinWeightsPaintToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinWeightsPaintToolProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkinWeightsPaintToolProperties) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~USkinWeightsPaintToolProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_364_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_367_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_367_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_367_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_367_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkinWeightsPaintToolProperties;

// ********** End Class USkinWeightsPaintToolProperties ********************************************

// ********** Begin Class UDEPRECATED_WeightToolMeshSelector ***************************************
struct Z_Construct_UClass_UDEPRECATED_WeightToolMeshSelector_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UDEPRECATED_WeightToolMeshSelector_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_475_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_WeightToolMeshSelector(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_WeightToolMeshSelector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_UDEPRECATED_WeightToolMeshSelector_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_WeightToolMeshSelector, UToolMeshSelector, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_UDEPRECATED_WeightToolMeshSelector_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_WeightToolMeshSelector)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_475_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API UDEPRECATED_WeightToolMeshSelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_WeightToolMeshSelector(UDEPRECATED_WeightToolMeshSelector&&) = delete; \
	UDEPRECATED_WeightToolMeshSelector(const UDEPRECATED_WeightToolMeshSelector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, UDEPRECATED_WeightToolMeshSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_WeightToolMeshSelector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_WeightToolMeshSelector) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~UDEPRECATED_WeightToolMeshSelector();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_472_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_475_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_475_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_475_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_WeightToolMeshSelector;

// ********** End Class UDEPRECATED_WeightToolMeshSelector *****************************************

// ********** Begin Class UWeightToolTransferManager ***********************************************
struct Z_Construct_UClass_UWeightToolTransferManager_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UWeightToolTransferManager_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_482_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeightToolTransferManager(); \
	friend struct ::Z_Construct_UClass_UWeightToolTransferManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_UWeightToolTransferManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeightToolTransferManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_UWeightToolTransferManager_NoRegister) \
	DECLARE_SERIALIZER(UWeightToolTransferManager)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_482_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API UWeightToolTransferManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeightToolTransferManager(UWeightToolTransferManager&&) = delete; \
	UWeightToolTransferManager(const UWeightToolTransferManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, UWeightToolTransferManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeightToolTransferManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeightToolTransferManager) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~UWeightToolTransferManager();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_479_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_482_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_482_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_482_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeightToolTransferManager;

// ********** End Class UWeightToolTransferManager *************************************************

// ********** Begin Class UWeightToolSelectionIsolator *********************************************
struct Z_Construct_UClass_UWeightToolSelectionIsolator_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UWeightToolSelectionIsolator_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_545_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeightToolSelectionIsolator(); \
	friend struct ::Z_Construct_UClass_UWeightToolSelectionIsolator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_UWeightToolSelectionIsolator_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeightToolSelectionIsolator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_UWeightToolSelectionIsolator_NoRegister) \
	DECLARE_SERIALIZER(UWeightToolSelectionIsolator)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_545_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API UWeightToolSelectionIsolator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeightToolSelectionIsolator(UWeightToolSelectionIsolator&&) = delete; \
	UWeightToolSelectionIsolator(const UWeightToolSelectionIsolator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, UWeightToolSelectionIsolator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeightToolSelectionIsolator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeightToolSelectionIsolator) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~UWeightToolSelectionIsolator();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_542_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_545_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_545_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_545_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeightToolSelectionIsolator;

// ********** End Class UWeightToolSelectionIsolator ***********************************************

// ********** Begin Class USkinWeightsPaintTool ****************************************************
struct Z_Construct_UClass_USkinWeightsPaintTool_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_USkinWeightsPaintTool_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_615_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkinWeightsPaintTool(); \
	friend struct ::Z_Construct_UClass_USkinWeightsPaintTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_USkinWeightsPaintTool_NoRegister(); \
public: \
	DECLARE_CLASS2(USkinWeightsPaintTool, UDynamicMeshBrushTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_USkinWeightsPaintTool_NoRegister) \
	DECLARE_SERIALIZER(USkinWeightsPaintTool) \
	virtual UObject* _getUObject() const override { return const_cast<USkinWeightsPaintTool*>(this); }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_615_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API USkinWeightsPaintTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkinWeightsPaintTool(USkinWeightsPaintTool&&) = delete; \
	USkinWeightsPaintTool(const USkinWeightsPaintTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, USkinWeightsPaintTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinWeightsPaintTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkinWeightsPaintTool) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~USkinWeightsPaintTool();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_612_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_615_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_615_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h_615_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkinWeightsPaintTool;

// ********** End Class USkinWeightsPaintTool ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkinWeightsPaintTool_h

// ********** Begin Enum EWeightEditMode ***********************************************************
#define FOREACH_ENUM_EWEIGHTEDITMODE(op) \
	op(EWeightEditMode::Brush) \
	op(EWeightEditMode::Mesh) \
	op(EWeightEditMode::Bones) 

enum class EWeightEditMode : uint8;
template<> struct TIsUEnumClass<EWeightEditMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEDITORONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EWeightEditMode>();
// ********** End Enum EWeightEditMode *************************************************************

// ********** Begin Enum EMeshTransferOption *******************************************************
#define FOREACH_ENUM_EMESHTRANSFEROPTION(op) \
	op(EMeshTransferOption::Source) \
	op(EMeshTransferOption::Target) 

enum class EMeshTransferOption : uint8;
template<> struct TIsUEnumClass<EMeshTransferOption> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEDITORONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshTransferOption>();
// ********** End Enum EMeshTransferOption *********************************************************

// ********** Begin Enum EWeightColorMode **********************************************************
#define FOREACH_ENUM_EWEIGHTCOLORMODE(op) \
	op(EWeightColorMode::Greyscale) \
	op(EWeightColorMode::Ramp) \
	op(EWeightColorMode::BoneColors) \
	op(EWeightColorMode::FullMaterial) 

enum class EWeightColorMode : uint8;
template<> struct TIsUEnumClass<EWeightColorMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEDITORONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EWeightColorMode>();
// ********** End Enum EWeightColorMode ************************************************************

// ********** Begin Enum EWeightBrushFalloffMode ***************************************************
#define FOREACH_ENUM_EWEIGHTBRUSHFALLOFFMODE(op) \
	op(EWeightBrushFalloffMode::Surface) \
	op(EWeightBrushFalloffMode::Volume) 

enum class EWeightBrushFalloffMode : uint8;
template<> struct TIsUEnumClass<EWeightBrushFalloffMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEDITORONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EWeightBrushFalloffMode>();
// ********** End Enum EWeightBrushFalloffMode *****************************************************

// ********** Begin Enum EWeightEditOperation ******************************************************
#define FOREACH_ENUM_EWEIGHTEDITOPERATION(op) \
	op(EWeightEditOperation::Add) \
	op(EWeightEditOperation::Replace) \
	op(EWeightEditOperation::Multiply) \
	op(EWeightEditOperation::Relax) \
	op(EWeightEditOperation::RelativeScale) 

enum class EWeightEditOperation : uint8;
template<> struct TIsUEnumClass<EWeightEditOperation> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEDITORONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EWeightEditOperation>();
// ********** End Enum EWeightEditOperation ********************************************************

// ********** Begin Enum EMirrorDirection **********************************************************
#define FOREACH_ENUM_EMIRRORDIRECTION(op) \
	op(EMirrorDirection::PositiveToNegative) \
	op(EMirrorDirection::NegativeToPositive) 

enum class EMirrorDirection : uint8;
template<> struct TIsUEnumClass<EMirrorDirection> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEDITORONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMirrorDirection>();
// ********** End Enum EMirrorDirection ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
