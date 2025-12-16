// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeldMeshEdgesTool.h"

#ifdef MESHMODELINGTOOLS_WeldMeshEdgesTool_generated_h
#error "WeldMeshEdgesTool.generated.h already included, missing '#pragma once' in WeldMeshEdgesTool.h"
#endif
#define MESHMODELINGTOOLS_WeldMeshEdgesTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWeldMeshEdgesToolBuilder ************************************************
struct Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UWeldMeshEdgesToolBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeldMeshEdgesToolBuilder(); \
	friend struct ::Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UWeldMeshEdgesToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeldMeshEdgesToolBuilder, USingleTargetWithSelectionToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UWeldMeshEdgesToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UWeldMeshEdgesToolBuilder)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UWeldMeshEdgesToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeldMeshEdgesToolBuilder(UWeldMeshEdgesToolBuilder&&) = delete; \
	UWeldMeshEdgesToolBuilder(const UWeldMeshEdgesToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UWeldMeshEdgesToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeldMeshEdgesToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeldMeshEdgesToolBuilder) \
	MESHMODELINGTOOLS_API virtual ~UWeldMeshEdgesToolBuilder();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeldMeshEdgesToolBuilder;

// ********** End Class UWeldMeshEdgesToolBuilder **************************************************

// ********** Begin Class UWeldMeshEdgesToolProperties *********************************************
struct Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UWeldMeshEdgesToolProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeldMeshEdgesToolProperties(); \
	friend struct ::Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UWeldMeshEdgesToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeldMeshEdgesToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UWeldMeshEdgesToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UWeldMeshEdgesToolProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UWeldMeshEdgesToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeldMeshEdgesToolProperties(UWeldMeshEdgesToolProperties&&) = delete; \
	UWeldMeshEdgesToolProperties(const UWeldMeshEdgesToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UWeldMeshEdgesToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeldMeshEdgesToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeldMeshEdgesToolProperties) \
	MESHMODELINGTOOLS_API virtual ~UWeldMeshEdgesToolProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_49_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeldMeshEdgesToolProperties;

// ********** End Class UWeldMeshEdgesToolProperties ***********************************************

// ********** Begin Class UWeldMeshEdgesOperatorFactory ********************************************
struct Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeldMeshEdgesOperatorFactory(); \
	friend struct ::Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeldMeshEdgesOperatorFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_NoRegister) \
	DECLARE_SERIALIZER(UWeldMeshEdgesOperatorFactory)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UWeldMeshEdgesOperatorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeldMeshEdgesOperatorFactory(UWeldMeshEdgesOperatorFactory&&) = delete; \
	UWeldMeshEdgesOperatorFactory(const UWeldMeshEdgesOperatorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UWeldMeshEdgesOperatorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeldMeshEdgesOperatorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeldMeshEdgesOperatorFactory) \
	MESHMODELINGTOOLS_API virtual ~UWeldMeshEdgesOperatorFactory();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_105_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeldMeshEdgesOperatorFactory;

// ********** End Class UWeldMeshEdgesOperatorFactory **********************************************

// ********** Begin Class UWeldMeshEdgesTool *******************************************************
struct Z_Construct_UClass_UWeldMeshEdgesTool_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UWeldMeshEdgesTool_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeldMeshEdgesTool(); \
	friend struct ::Z_Construct_UClass_UWeldMeshEdgesTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UWeldMeshEdgesTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeldMeshEdgesTool, USingleTargetWithSelectionTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UWeldMeshEdgesTool_NoRegister) \
	DECLARE_SERIALIZER(UWeldMeshEdgesTool)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_125_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeldMeshEdgesTool(UWeldMeshEdgesTool&&) = delete; \
	UWeldMeshEdgesTool(const UWeldMeshEdgesTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UWeldMeshEdgesTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeldMeshEdgesTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeldMeshEdgesTool) \
	MESHMODELINGTOOLS_API virtual ~UWeldMeshEdgesTool();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_122_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_125_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeldMeshEdgesTool;

// ********** End Class UWeldMeshEdgesTool *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h

// ********** Begin Enum EWeldMeshEdgesAttributeUIMode *********************************************
#define FOREACH_ENUM_EWELDMESHEDGESATTRIBUTEUIMODE(op) \
	op(EWeldMeshEdgesAttributeUIMode::None) \
	op(EWeldMeshEdgesAttributeUIMode::OnWeldedMeshEdgesOnly) \
	op(EWeldMeshEdgesAttributeUIMode::OnFullMesh) 

enum class EWeldMeshEdgesAttributeUIMode : uint8;
template<> struct TIsUEnumClass<EWeldMeshEdgesAttributeUIMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EWeldMeshEdgesAttributeUIMode>();
// ********** End Enum EWeldMeshEdgesAttributeUIMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
