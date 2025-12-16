// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/MeshMaterialProperties.h"

#ifdef MESHMODELINGTOOLS_MeshMaterialProperties_generated_h
#error "MeshMaterialProperties.generated.h already included, missing '#pragma once' in MeshMaterialProperties.h"
#endif
#define MESHMODELINGTOOLS_MeshMaterialProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNewMeshMaterialProperties ***********************************************
struct Z_Construct_UClass_UNewMeshMaterialProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNewMeshMaterialProperties(); \
	friend struct ::Z_Construct_UClass_UNewMeshMaterialProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UNewMeshMaterialProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister) \
	DECLARE_SERIALIZER(UNewMeshMaterialProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNewMeshMaterialProperties(UNewMeshMaterialProperties&&) = delete; \
	UNewMeshMaterialProperties(const UNewMeshMaterialProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UNewMeshMaterialProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewMeshMaterialProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNewMeshMaterialProperties) \
	MESHMODELINGTOOLS_API virtual ~UNewMeshMaterialProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNewMeshMaterialProperties;

// ********** End Class UNewMeshMaterialProperties *************************************************

// ********** Begin Class UExistingMeshMaterialProperties ******************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUVChannelNamesFunc);


struct Z_Construct_UClass_UExistingMeshMaterialProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExistingMeshMaterialProperties(); \
	friend struct ::Z_Construct_UClass_UExistingMeshMaterialProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UExistingMeshMaterialProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister) \
	DECLARE_SERIALIZER(UExistingMeshMaterialProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UExistingMeshMaterialProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExistingMeshMaterialProperties(UExistingMeshMaterialProperties&&) = delete; \
	UExistingMeshMaterialProperties(const UExistingMeshMaterialProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UExistingMeshMaterialProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExistingMeshMaterialProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExistingMeshMaterialProperties) \
	MESHMODELINGTOOLS_API virtual ~UExistingMeshMaterialProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_64_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExistingMeshMaterialProperties;

// ********** End Class UExistingMeshMaterialProperties ********************************************

// ********** Begin Class UMeshEditingViewProperties ***********************************************
struct Z_Construct_UClass_UMeshEditingViewProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshEditingViewProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshEditingViewProperties(); \
	friend struct ::Z_Construct_UClass_UMeshEditingViewProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UMeshEditingViewProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshEditingViewProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UMeshEditingViewProperties_NoRegister) \
	DECLARE_SERIALIZER(UMeshEditingViewProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UMeshEditingViewProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshEditingViewProperties(UMeshEditingViewProperties&&) = delete; \
	UMeshEditingViewProperties(const UMeshEditingViewProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UMeshEditingViewProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshEditingViewProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshEditingViewProperties) \
	MESHMODELINGTOOLS_API virtual ~UMeshEditingViewProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_124_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshEditingViewProperties;

// ********** End Class UMeshEditingViewProperties *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h

// ********** Begin Enum ESetMeshMaterialMode ******************************************************
#define FOREACH_ENUM_ESETMESHMATERIALMODE(op) \
	op(ESetMeshMaterialMode::Original) \
	op(ESetMeshMaterialMode::Checkerboard) \
	op(ESetMeshMaterialMode::Override) 

enum class ESetMeshMaterialMode : uint8;
template<> struct TIsUEnumClass<ESetMeshMaterialMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESetMeshMaterialMode>();
// ********** End Enum ESetMeshMaterialMode ********************************************************

// ********** Begin Enum EMeshEditingMaterialModes *************************************************
#define FOREACH_ENUM_EMESHEDITINGMATERIALMODES(op) \
	op(EMeshEditingMaterialModes::ExistingMaterial) \
	op(EMeshEditingMaterialModes::Diffuse) \
	op(EMeshEditingMaterialModes::Grey) \
	op(EMeshEditingMaterialModes::Soft) \
	op(EMeshEditingMaterialModes::Transparent) \
	op(EMeshEditingMaterialModes::TangentNormal) \
	op(EMeshEditingMaterialModes::VertexColor) \
	op(EMeshEditingMaterialModes::CustomImage) \
	op(EMeshEditingMaterialModes::Custom) 

enum class EMeshEditingMaterialModes;
template<> struct TIsUEnumClass<EMeshEditingMaterialModes> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshEditingMaterialModes>();
// ********** End Enum EMeshEditingMaterialModes ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
